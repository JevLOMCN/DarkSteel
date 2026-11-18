// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 13

// CreateRayTracingShader<6> @ 145b883e0

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

FVulkanRayTracingShader * __thiscall
FVulkanShaderFactory::CreateRayTracingShader<6>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  uint uVar5;
  FVulkanShader **ppFVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  FVulkanRayTracingShader *pFVar9;
  FVulkanRayTracingShader *pFVar10;
  ulonglong uVar11;
  undefined1 auStackY_2a8 [32];
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  FMemoryReaderView local_1b8;
  ulong64 *local_108;
  FVulkanShader ***local_100;
  FShaderCodeReader local_f8;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar1 = param_1->ArrayNum;
  uVar7 = (ulonglong)uVar1;
  uVar5 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar1,0);
  uVar11 = CONCAT44(uVar5,uVar1);
  pFVar9 = (FVulkanRayTracingShader *)0x0;
  local_268[0] = uVar11;
  if (uVar11 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(this->RWLock + 6));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 6),uVar11);
    if ((ppFVar6 != (FVulkanShader **)0x0) &&
       (pFVar9 = (FVulkanRayTracingShader *)0x0, *ppFVar6 != (FVulkanShader *)0x0)) {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
    }
    ReleaseSRWLockShared((PSRWLOCK)(this->RWLock + 6));
    uVar7 = uVar11;
  }
  if (pFVar9 == (FVulkanRayTracingShader *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
    local_1b8.Bytes.Data = param_1->DataPtr;
    local_1b8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    pFVar10 = (FVulkanRayTracingShader *)0x0;
    local_1b8._padding_ = 0;
    uVar8 = (undefined7)(uVar7 >> 8);
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1b8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar8,1));
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    ::operator<<((FArchive *)&local_1b8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1b8._padding_ + 8) < *(uint **)local_1b8._padding_ + 1) {
      if ((local_1b8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1b8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1b8,&local_258,4);
        }
        else {
          (**(code **)(local_1b8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1b8._padding_;
      *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1b8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)(this->RWLock + 6));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 6),local_268[0]);
    if (ppFVar6 == (FVulkanShader **)0x0) {
      pFVar9 = ::operator_new(0x278);
      uVar3 = local_268[0];
      if (pFVar9 != (FVulkanRayTracingShader *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pFVar9,RRT_RayTracingShader,SF_NumStandardFrequencies);
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = (longlong)&___7FRHIRayTracingShader__6B_;
        *(undefined4 *)&pFVar9->_padding_ = 0;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)&pFVar9->_padding_,param_2,SF_NumStandardFrequencies,&local_d8,
                   &local_1e8,uVar3,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_);
        pFVar9->_padding_ =
             (longlong)&FVulkanRayTracingShader::_vftable__for__FRHIRayTracingShader__;
        (pFVar9->AnyHitSpirvContainer).UncompressedSizeBytes = -1;
        pFVar9->_padding_ = (longlong)&FVulkanRayTracingShader::_vftable__for__FVulkanShader__;
        (pFVar9->IntersectionSpirvContainer).UncompressedSizeBytes = -1;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayMax = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayMax = 0;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pFVar9->_padding_,&local_258);
        pFVar10 = pFVar9;
      }
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_;
      *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) =
           *(undefined4 *)((longlong)&pFVar10->_padding_ + 4);
      local_1d0.Value = (FVulkanShader **)&pFVar10->_padding_;
      local_108 = local_268;
      local_100 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  *)(this->ShaderMap + 6),&local_1d0,(bool *)&local_108);
      local_f8.ShaderCode.DataPtr = param_1->DataPtr;
      local_f8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_f8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanRayTracingShader *)(*pcVar2)();
        return pFVar9;
      }
      ReadShaderOptionalData<FVulkanRayTracingShader>(&local_f8,pFVar10);
      pFVar9 = pFVar10;
    }
    else {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
      if (*ppFVar6 == (FVulkanShader *)0x0) {
        pFVar9 = pFVar10;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(this->RWLock + 6));
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1b8);
  }
  return pFVar9;
}

// CreateRayTracingShader<7> @ 145b88950

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

FVulkanRayTracingShader * __thiscall
FVulkanShaderFactory::CreateRayTracingShader<7>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  uint uVar5;
  FVulkanShader **ppFVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  FVulkanRayTracingShader *pFVar9;
  FVulkanRayTracingShader *pFVar10;
  ulonglong uVar11;
  undefined1 auStackY_2a8 [32];
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  FMemoryReaderView local_1b8;
  ulong64 *local_108;
  FVulkanShader ***local_100;
  FShaderCodeReader local_f8;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar1 = param_1->ArrayNum;
  uVar7 = (ulonglong)uVar1;
  uVar5 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar1,0);
  uVar11 = CONCAT44(uVar5,uVar1);
  pFVar9 = (FVulkanRayTracingShader *)0x0;
  local_268[0] = uVar11;
  if (uVar11 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(this->RWLock + 7));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 7),uVar11);
    if ((ppFVar6 != (FVulkanShader **)0x0) &&
       (pFVar9 = (FVulkanRayTracingShader *)0x0, *ppFVar6 != (FVulkanShader *)0x0)) {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
    }
    ReleaseSRWLockShared((PSRWLOCK)(this->RWLock + 7));
    uVar7 = uVar11;
  }
  if (pFVar9 == (FVulkanRayTracingShader *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
    local_1b8.Bytes.Data = param_1->DataPtr;
    local_1b8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    pFVar10 = (FVulkanRayTracingShader *)0x0;
    local_1b8._padding_ = 0;
    uVar8 = (undefined7)(uVar7 >> 8);
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1b8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar8,1));
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    ::operator<<((FArchive *)&local_1b8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1b8._padding_ + 8) < *(uint **)local_1b8._padding_ + 1) {
      if ((local_1b8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1b8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1b8,&local_258,4);
        }
        else {
          (**(code **)(local_1b8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1b8._padding_;
      *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1b8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)(this->RWLock + 7));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 7),local_268[0]);
    if (ppFVar6 == (FVulkanShader **)0x0) {
      pFVar9 = ::operator_new(0x278);
      uVar3 = local_268[0];
      if (pFVar9 != (FVulkanRayTracingShader *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pFVar9,RRT_RayTracingShader,SF_RayMiss);
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = (longlong)&___7FRHIRayTracingShader__6B_;
        *(undefined4 *)&pFVar9->_padding_ = 0;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)&pFVar9->_padding_,param_2,SF_RayMiss,&local_d8,&local_1e8,uVar3
                   ,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_);
        pFVar9->_padding_ =
             (longlong)&FVulkanRayTracingShader::_vftable__for__FRHIRayTracingShader__;
        (pFVar9->AnyHitSpirvContainer).UncompressedSizeBytes = -1;
        pFVar9->_padding_ = (longlong)&FVulkanRayTracingShader::_vftable__for__FVulkanShader__;
        (pFVar9->IntersectionSpirvContainer).UncompressedSizeBytes = -1;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayMax = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayMax = 0;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pFVar9->_padding_,&local_258);
        pFVar10 = pFVar9;
      }
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_;
      *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) =
           *(undefined4 *)((longlong)&pFVar10->_padding_ + 4);
      local_1d0.Value = (FVulkanShader **)&pFVar10->_padding_;
      local_108 = local_268;
      local_100 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  *)(this->ShaderMap + 7),&local_1d0,(bool *)&local_108);
      local_f8.ShaderCode.DataPtr = param_1->DataPtr;
      local_f8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_f8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanRayTracingShader *)(*pcVar2)();
        return pFVar9;
      }
      ReadShaderOptionalData<FVulkanRayTracingShader>(&local_f8,pFVar10);
      pFVar9 = pFVar10;
    }
    else {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
      if (*ppFVar6 == (FVulkanShader *)0x0) {
        pFVar9 = pFVar10;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(this->RWLock + 7));
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1b8);
  }
  return pFVar9;
}

// CreateRayTracingShader<8> @ 145b88ec0

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

FVulkanRayTracingShader * __thiscall
FVulkanShaderFactory::CreateRayTracingShader<8>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FSpirvContainer *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  FVulkanRayTracingShader *pFVar11;
  FVulkanRayTracingShader *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_2d8 [32];
  FSpirvContainer local_298;
  FSpirvContainer local_280;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  FMemoryReaderView local_1b8;
  ulong64 *local_108;
  FVulkanShader ***local_100;
  FShaderCodeReader local_f8;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar2 = param_1->ArrayNum;
  uVar9 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  uVar13 = CONCAT44(uVar7,uVar2);
  pFVar11 = (FVulkanRayTracingShader *)0x0;
  local_268[0] = uVar13;
  if (uVar13 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(this->RWLock + 8));
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 8),uVar13);
    if ((ppFVar8 != (FVulkanShader **)0x0) &&
       (pFVar11 = (FVulkanRayTracingShader *)0x0, *ppFVar8 != (FVulkanShader *)0x0)) {
      pFVar11 = (FVulkanRayTracingShader *)&(*ppFVar8)[-1].DebugEntryPoint.Data.ArrayNum;
    }
    ReleaseSRWLockShared((PSRWLOCK)(this->RWLock + 8));
    uVar9 = uVar13;
  }
  if (pFVar11 == (FVulkanRayTracingShader *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
    local_1b8.Bytes.Data = param_1->DataPtr;
    local_1b8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    pFVar12 = (FVulkanRayTracingShader *)0x0;
    local_1b8._padding_ = 0;
    uVar10 = (undefined7)(uVar9 >> 8);
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1b8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar10,1));
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    ::operator<<((FArchive *)&local_1b8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1b8._padding_ + 8) < *(uint **)local_1b8._padding_ + 1) {
      if ((local_1b8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1b8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1b8,&local_258,4);
        }
        else {
          (**(code **)(local_1b8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1b8._padding_;
      *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1b8,&local_1e8);
    local_280.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.SpirvCode.ArrayNum = 0;
    local_280.SpirvCode.ArrayMax = 0;
    local_280.UncompressedSizeBytes = -1;
    local_298.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.SpirvCode.ArrayNum = 0;
    local_298.SpirvCode.ArrayMax = 0;
    local_298.UncompressedSizeBytes = -1;
    if (local_d8.RayGroupAnyHit == SeparateBlob) {
      ::operator<<((FArchive *)&local_1b8,&local_280);
    }
    if (local_d8.RayGroupIntersection == SeparateBlob) {
      ::operator<<((FArchive *)&local_1b8,&local_298);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(this->RWLock + 8));
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 8),local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      pFVar11 = ::operator_new(0x278);
      uVar5 = local_268[0];
      if (pFVar11 != (FVulkanRayTracingShader *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pFVar11,RRT_RayTracingShader,SF_RayHitGroup);
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = (longlong)&___7FRHIRayTracingShader__6B_;
        *(undefined4 *)&pFVar11->_padding_ = 0;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)&pFVar11->_padding_,param_2,SF_RayHitGroup,&local_d8,&local_1e8,
                   uVar5,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar11->_padding_);
        pFVar11->_padding_ =
             (longlong)&FVulkanRayTracingShader::_vftable__for__FRHIRayTracingShader__;
        (pFVar11->AnyHitSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        pFVar11->_padding_ = (longlong)&FVulkanRayTracingShader::_vftable__for__FVulkanShader__;
        (pFVar11->AnyHitSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar11->AnyHitSpirvContainer).SpirvCode.ArrayMax = 0;
        (pFVar11->AnyHitSpirvContainer).UncompressedSizeBytes = -1;
        (pFVar11->IntersectionSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar11->IntersectionSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar11->IntersectionSpirvContainer).SpirvCode.ArrayMax = 0;
        (pFVar11->IntersectionSpirvContainer).UncompressedSizeBytes = -1;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pFVar11->_padding_,&local_258);
        pFVar12 = pFVar11;
      }
      pFVar1 = &pFVar12->AnyHitSpirvContainer;
      if (pFVar1 != &local_280) {
        pFVar3 = (pFVar1->SpirvCode).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->SpirvCode).AllocatorInstance.Data = local_280.SpirvCode.AllocatorInstance.Data;
        local_280.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->AnyHitSpirvContainer).SpirvCode.ArrayNum = local_280.SpirvCode.ArrayNum;
        (pFVar12->AnyHitSpirvContainer).SpirvCode.ArrayMax = local_280.SpirvCode.ArrayMax;
        local_280.SpirvCode.ArrayNum = 0;
        local_280.SpirvCode.ArrayMax = 0;
      }
      (pFVar12->AnyHitSpirvContainer).UncompressedSizeBytes = local_280.UncompressedSizeBytes;
      pFVar1 = &pFVar12->IntersectionSpirvContainer;
      if (pFVar1 != &local_298) {
        pFVar3 = (pFVar1->SpirvCode).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->SpirvCode).AllocatorInstance.Data = local_298.SpirvCode.AllocatorInstance.Data;
        local_298.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->IntersectionSpirvContainer).SpirvCode.ArrayNum = local_298.SpirvCode.ArrayNum;
        (pFVar12->IntersectionSpirvContainer).SpirvCode.ArrayMax = local_298.SpirvCode.ArrayMax;
        local_298.SpirvCode.ArrayNum = 0;
        local_298.SpirvCode.ArrayMax = 0;
      }
      (pFVar12->IntersectionSpirvContainer).UncompressedSizeBytes = local_298.UncompressedSizeBytes;
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_;
      *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) =
           *(undefined4 *)((longlong)&pFVar12->_padding_ + 4);
      local_1d0.Value = (FVulkanShader **)&pFVar12->_padding_;
      local_108 = local_268;
      local_100 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  *)(this->ShaderMap + 8),&local_1d0,(bool *)&local_108);
      local_f8.ShaderCode.DataPtr = param_1->DataPtr;
      local_f8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_f8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FVulkanRayTracingShader *)(*pcVar4)();
        return pFVar11;
      }
      ReadShaderOptionalData<FVulkanRayTracingShader>(&local_f8,pFVar12);
      pFVar11 = pFVar12;
    }
    else {
      pFVar11 = (FVulkanRayTracingShader *)&(*ppFVar8)[-1].DebugEntryPoint.Data.ArrayNum;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pFVar11 = pFVar12;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(this->RWLock + 8));
    if (local_298.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.SpirvCode.AllocatorInstance.Data);
    }
    if (local_280.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.SpirvCode.AllocatorInstance.Data);
    }
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1b8);
  }
  return pFVar11;
}

// CreateRayTracingShader<9> @ 145b89530

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

FVulkanRayTracingShader * __thiscall
FVulkanShaderFactory::CreateRayTracingShader<9>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  uint uVar5;
  FVulkanShader **ppFVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  FVulkanRayTracingShader *pFVar9;
  FVulkanRayTracingShader *pFVar10;
  ulonglong uVar11;
  undefined1 auStackY_2a8 [32];
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  FMemoryReaderView local_1b8;
  ulong64 *local_108;
  FVulkanShader ***local_100;
  FShaderCodeReader local_f8;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar1 = param_1->ArrayNum;
  uVar7 = (ulonglong)uVar1;
  uVar5 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar1,0);
  uVar11 = CONCAT44(uVar5,uVar1);
  pFVar9 = (FVulkanRayTracingShader *)0x0;
  local_268[0] = uVar11;
  if (uVar11 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(this->RWLock + 9));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 9),uVar11);
    if ((ppFVar6 != (FVulkanShader **)0x0) &&
       (pFVar9 = (FVulkanRayTracingShader *)0x0, *ppFVar6 != (FVulkanShader *)0x0)) {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
    }
    ReleaseSRWLockShared((PSRWLOCK)(this->RWLock + 9));
    uVar7 = uVar11;
  }
  if (pFVar9 == (FVulkanRayTracingShader *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    local_1b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
    local_1b8.Bytes.Data = param_1->DataPtr;
    local_1b8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    pFVar10 = (FVulkanRayTracingShader *)0x0;
    local_1b8._padding_ = 0;
    uVar8 = (undefined7)(uVar7 >> 8);
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1b8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar8,1));
    local_1b8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    ::operator<<((FArchive *)&local_1b8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1b8._padding_ + 8) < *(uint **)local_1b8._padding_ + 1) {
      if ((local_1b8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1b8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1b8,&local_258,4);
        }
        else {
          (**(code **)(local_1b8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1b8._padding_;
      *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1b8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1b8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)(this->RWLock + 9));
    ppFVar6 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 9),local_268[0]);
    if (ppFVar6 == (FVulkanShader **)0x0) {
      pFVar9 = ::operator_new(0x278);
      uVar3 = local_268[0];
      if (pFVar9 != (FVulkanRayTracingShader *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pFVar9,RRT_RayTracingShader,SF_RayCallable);
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = (longlong)&___7FRHIRayTracingShader__6B_;
        *(undefined4 *)&pFVar9->_padding_ = 0;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)&pFVar9->_padding_,param_2,SF_RayCallable,&local_d8,&local_1e8,
                   uVar3,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_);
        pFVar9->_padding_ =
             (longlong)&FVulkanRayTracingShader::_vftable__for__FRHIRayTracingShader__;
        (pFVar9->AnyHitSpirvContainer).UncompressedSizeBytes = -1;
        pFVar9->_padding_ = (longlong)&FVulkanRayTracingShader::_vftable__for__FVulkanShader__;
        (pFVar9->IntersectionSpirvContainer).UncompressedSizeBytes = -1;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->AnyHitSpirvContainer).SpirvCode.ArrayMax = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayNum = 0;
        (pFVar9->IntersectionSpirvContainer).SpirvCode.ArrayMax = 0;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pFVar9->_padding_,&local_258);
        pFVar10 = pFVar9;
      }
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_;
      *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) =
           *(undefined4 *)((longlong)&pFVar10->_padding_ + 4);
      local_1d0.Value = (FVulkanShader **)&pFVar10->_padding_;
      local_108 = local_268;
      local_100 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  *)(this->ShaderMap + 9),&local_1d0,(bool *)&local_108);
      local_f8.ShaderCode.DataPtr = param_1->DataPtr;
      local_f8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_f8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FVulkanRayTracingShader *)(*pcVar2)();
        return pFVar9;
      }
      ReadShaderOptionalData<FVulkanRayTracingShader>(&local_f8,pFVar10);
      pFVar9 = pFVar10;
    }
    else {
      pFVar9 = (FVulkanRayTracingShader *)&(*ppFVar6)[-1].DebugEntryPoint.Data.ArrayNum;
      if (*ppFVar6 == (FVulkanShader *)0x0) {
        pFVar9 = pFVar10;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(this->RWLock + 9));
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1b8);
  }
  return pFVar9;
}

// CreateShader<TVulkanBaseShader<FRHIAmplificationShader,2>_> @ 145b89aa0

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

TVulkanBaseShader<FRHIAmplificationShader,2> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIAmplificationShader,2>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIAmplificationShader,2> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  TVulkanBaseShader<FRHIAmplificationShader,2> *pTVar14;
  ulonglong uVar15;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *local_1c0;
  FShaderCodeReader local_1b8;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar12 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  SRWLock = this->RWLock + 2;
  uVar15 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar15;
  if (uVar15 != 0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 2),uVar15);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pTVar9 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)&pFVar3[-1].CodeHeader;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0;
      }
      goto LAB_145b89b42;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar12 = uVar15;
  }
  uVar15 = uVar12;
  pTVar9 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0;
LAB_145b89b42:
  pTVar14 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar13 = (undefined7)(uVar15 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar13,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_1c0 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                 *)(this->ShaderMap + 2);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)local_1c0,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      pTVar9 = ::operator_new(0x238);
      uVar5 = local_268[0];
      local_1d0.Value = (FVulkanShader **)pTVar14;
      if (pTVar9 != (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pTVar9,RRT_AmplificationShader,SF_Amplification);
        *(undefined ***)pTVar9 = &___7FRHIAmplificationShader__6B_;
        puVar1 = &pTVar9->field_0x108;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Amplification,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x80);
        *(undefined ***)pTVar9 =
             &TVulkanBaseShader<FRHIAmplificationShader,2>::_vftable__for__FRHIAmplificationShader__
        ;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIAmplificationShader,2>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pTVar9->field_0x18,&local_258);
        pTVar14 = pTVar9;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                (local_1c0,&local_1d0,(bool *)&local_f8);
      local_1b8.ShaderCode.DataPtr = param_1->DataPtr;
      local_1b8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1b8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1b8);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar14->field_0x104 == '\x05') {
          pTVar14->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 1 ^ pTVar14->field_0x105;
        }
        pTVar14->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 2 ^ pTVar14->field_0x105;
        pTVar14->field_0x209 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1b8,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar14->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar14->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar14->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar14,&local_1b8);
      pTVar9 = pTVar14;
      if (((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
          0x1e4000001000000) {
        FVulkanDevice::SupportsBindless(param_2);
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIAmplificationShader,2> *)&(*ppFVar8)[-1].CodeHeader;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar14;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// CreateShader<TVulkanBaseShader<FRHIComputeShader,5>_> @ 145b8a0e0

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

TVulkanBaseShader<FRHIComputeShader,5> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIComputeShader,5>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIComputeShader,5> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  TVulkanBaseShader<FRHIComputeShader,5> *pTVar14;
  ulonglong uVar15;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *local_1c0;
  FShaderCodeReader local_1b8;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar12 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  SRWLock = this->RWLock + 5;
  uVar15 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar15;
  if (uVar15 != 0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 5),uVar15);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pTVar9 = (TVulkanBaseShader<FRHIComputeShader,5> *)&pFVar3[-1].ShaderKey;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIComputeShader,5> *)0x0;
      }
      goto LAB_145b8a182;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar12 = uVar15;
  }
  uVar15 = uVar12;
  pTVar9 = (TVulkanBaseShader<FRHIComputeShader,5> *)0x0;
LAB_145b8a182:
  pTVar14 = (TVulkanBaseShader<FRHIComputeShader,5> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar13 = (undefined7)(uVar15 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar13,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_1c0 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                 *)(this->ShaderMap + 5);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)local_1c0,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      pTVar9 = ::operator_new(0x240);
      uVar5 = local_268[0];
      local_1d0.Value = (FVulkanShader **)pTVar14;
      if (pTVar9 != (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pTVar9,RRT_ComputeShader,SF_Compute);
        *(undefined8 *)&pTVar9->field_0x108 = 0;
        *(undefined ***)pTVar9 = &___7FRHIComputeShader__6B_;
        puVar1 = &pTVar9->field_0x110;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Compute,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x80);
        *(undefined ***)pTVar9 =
             &TVulkanBaseShader<FRHIComputeShader,5>::_vftable__for__FRHIComputeShader__;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIComputeShader,5>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pTVar9->field_0x18,&local_258);
        pTVar14 = pTVar9;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                (local_1c0,&local_1d0,(bool *)&local_f8);
      local_1b8.ShaderCode.DataPtr = param_1->DataPtr;
      local_1b8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1b8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIComputeShader,5> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1b8);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar14->field_0x104 == '\x05') {
          pTVar14->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 1 ^ pTVar14->field_0x105;
        }
        pTVar14->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 2 ^ pTVar14->field_0x105;
        pTVar14->field_0x211 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1b8,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar14->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar14->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar14->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar14,&local_1b8);
      pTVar9 = pTVar14;
      if (((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
          0x1e4000001000000) {
        FVulkanDevice::SupportsBindless(param_2);
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIComputeShader,5> *)&(*ppFVar8)[-1].ShaderKey;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar14;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// CreateShader<TVulkanBaseShader<FRHIGeometryShader,4>_> @ 145b8a720

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

TVulkanBaseShader<FRHIGeometryShader,4> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIGeometryShader,4> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  TVulkanBaseShader<FRHIGeometryShader,4> *pTVar14;
  ulonglong uVar15;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *local_1c0;
  FShaderCodeReader local_1b8;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar12 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  SRWLock = this->RWLock + 4;
  uVar15 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar15;
  if (uVar15 != 0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 4),uVar15);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pTVar9 = (TVulkanBaseShader<FRHIGeometryShader,4> *)&pFVar3[-1].CodeHeader;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0;
      }
      goto LAB_145b8a7c2;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar12 = uVar15;
  }
  uVar15 = uVar12;
  pTVar9 = (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0;
LAB_145b8a7c2:
  pTVar14 = (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar13 = (undefined7)(uVar15 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar13,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_1c0 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                 *)(this->ShaderMap + 4);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)local_1c0,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      pTVar9 = ::operator_new(0x238);
      uVar5 = local_268[0];
      local_1d0.Value = (FVulkanShader **)pTVar14;
      if (pTVar9 != (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)pTVar9,RRT_GeometryShader,SF_Geometry);
        *(undefined ***)pTVar9 = &___7FRHIGeometryShader__6B_;
        puVar1 = &pTVar9->field_0x108;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Geometry,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x80);
        *(undefined ***)pTVar9 =
             &TVulkanBaseShader<FRHIGeometryShader,4>::_vftable__for__FRHIGeometryShader__;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIGeometryShader,4>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&pTVar9->field_0x18,&local_258);
        pTVar14 = pTVar9;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                (local_1c0,&local_1d0,(bool *)&local_f8);
      local_1b8.ShaderCode.DataPtr = param_1->DataPtr;
      local_1b8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1b8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIGeometryShader,4> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1b8);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar14->field_0x104 == '\x05') {
          pTVar14->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 1 ^ pTVar14->field_0x105;
        }
        pTVar14->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar14->field_0x105) & 2 ^ pTVar14->field_0x105;
        pTVar14->field_0x209 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1b8,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar14->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar14->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar14->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar14,&local_1b8);
      pTVar9 = pTVar14;
      if (((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
          0x1e4000001000000) {
        FVulkanDevice::SupportsBindless(param_2);
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIGeometryShader,4> *)&(*ppFVar8)[-1].CodeHeader;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar14;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// CreateShader<TVulkanBaseShader<FRHIMeshShader,1>_> @ 145b8ad60

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */

TVulkanBaseShader<FRHIMeshShader,1> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIMeshShader,1>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIMeshShader,1> *this_00;
  TVulkanBaseShader<FRHIMeshShader,1> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  VkPipeline_T *pVVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  TVulkanBaseShader<FRHIMeshShader,1> *pTVar15;
  ulonglong uVar16;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *local_1c0;
  FShaderCodeReader local_1b8;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar13 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  SRWLock = this->RWLock + 1;
  uVar16 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar16;
  if (uVar16 != 0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 1),uVar16);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pTVar9 = (TVulkanBaseShader<FRHIMeshShader,1> *)&pFVar3[-1].CodeHeader;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIMeshShader,1> *)0x0;
      }
      goto LAB_145b8ae07;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar13 = uVar16;
  }
  uVar16 = uVar13;
  pTVar9 = (TVulkanBaseShader<FRHIMeshShader,1> *)0x0;
LAB_145b8ae07:
  pTVar15 = (TVulkanBaseShader<FRHIMeshShader,1> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIMeshShader,1> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar14 = (undefined7)(uVar16 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar14,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_1c0 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                 *)(this->ShaderMap + 1);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)local_1c0,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      this_00 = ::operator_new(0x238);
      uVar5 = local_268[0];
      pTVar9 = pTVar15;
      local_1d0.Value = (FVulkanShader **)pTVar15;
      if (this_00 != (TVulkanBaseShader<FRHIMeshShader,1> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)this_00,RRT_MeshShader,SF_Mesh);
        *(undefined ***)this_00 = &___7FRHIMeshShader__6B_;
        puVar1 = &this_00->field_0x108;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Mesh,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->field_0x80);
        *(undefined ***)this_00 =
             &TVulkanBaseShader<FRHIMeshShader,1>::_vftable__for__FRHIMeshShader__;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIMeshShader,1>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&this_00->field_0x18,&local_258);
        pTVar9 = this_00;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                (local_1c0,&local_1d0,(bool *)&local_f8);
      local_1b8.ShaderCode.DataPtr = param_1->DataPtr;
      local_1b8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1b8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIMeshShader,1> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1b8);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar9->field_0x104 == '\x05') {
          pTVar9->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 1 ^ pTVar9->field_0x105;
        }
        pTVar9->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 2 ^ pTVar9->field_0x105;
        pTVar9->field_0x209 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1b8,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar9->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar9->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar9->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar9,&local_1b8);
      if ((((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
           0x1e4000001000000) && (bVar6 = FVulkanDevice::SupportsBindless(param_2), bVar6)) {
        if (pTVar9 != (TVulkanBaseShader<FRHIMeshShader,1> *)0x0) {
          pTVar15 = (TVulkanBaseShader<FRHIMeshShader,1> *)&pTVar9->field_0x108;
        }
        pVVar12 = CreatePreRasterShaderLibrary
                            (param_2,(FVulkanShader *)pTVar15,VK_SHADER_STAGE_MESH_BIT_EXT);
        *(VkPipeline_T **)&pTVar9->field_0x210 = pVVar12;
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIMeshShader,1> *)&(*ppFVar8)[-1].CodeHeader;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar15;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// CreateShader<TVulkanBaseShader<FRHIPixelShader,3>_> @ 145b8b3c0

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

TVulkanBaseShader<FRHIPixelShader,3> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIPixelShader,3>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIPixelShader,3> *this_00;
  TVulkanBaseShader<FRHIPixelShader,3> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  VkPipeline_T *pVVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  TVulkanBaseShader<FRHIPixelShader,3> *pTVar15;
  ulonglong uVar16;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *local_1c0;
  FShaderCodeReader local_1b8;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar13 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  SRWLock = this->RWLock + 3;
  uVar16 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar16;
  if (uVar16 != 0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)(this->ShaderMap + 3),uVar16);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      pTVar9 = (TVulkanBaseShader<FRHIPixelShader,3> *)&pFVar3[-1].CodeHeader;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIPixelShader,3> *)0x0;
      }
      goto LAB_145b8b467;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    uVar13 = uVar16;
  }
  uVar16 = uVar13;
  pTVar9 = (TVulkanBaseShader<FRHIPixelShader,3> *)0x0;
LAB_145b8b467:
  pTVar15 = (TVulkanBaseShader<FRHIPixelShader,3> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar14 = (undefined7)(uVar16 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar14,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_1c0 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                 *)(this->ShaderMap + 3);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)local_1c0,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      this_00 = ::operator_new(0x238);
      uVar5 = local_268[0];
      pTVar9 = pTVar15;
      local_1d0.Value = (FVulkanShader **)pTVar15;
      if (this_00 != (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)this_00,RRT_PixelShader,SF_Pixel);
        *(undefined ***)this_00 = &___7FRHIPixelShader__6B_;
        puVar1 = &this_00->field_0x108;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Pixel,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->field_0x80);
        *(undefined ***)this_00 =
             &TVulkanBaseShader<FRHIPixelShader,3>::_vftable__for__FRHIPixelShader__;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIPixelShader,3>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&this_00->field_0x18,&local_258);
        pTVar9 = this_00;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                (local_1c0,&local_1d0,(bool *)&local_f8);
      local_1b8.ShaderCode.DataPtr = param_1->DataPtr;
      local_1b8.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1b8.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIPixelShader,3> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1b8);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar9->field_0x104 == '\x05') {
          pTVar9->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 1 ^ pTVar9->field_0x105;
        }
        pTVar9->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 2 ^ pTVar9->field_0x105;
        pTVar9->field_0x209 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1b8,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar9->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar9->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar9->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar9,&local_1b8);
      if ((((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
           0x1e4000001000000) && (bVar6 = FVulkanDevice::SupportsBindless(param_2), bVar6)) {
        if (pTVar9 != (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
          pTVar15 = (TVulkanBaseShader<FRHIPixelShader,3> *)&pTVar9->field_0x108;
        }
        pVVar12 = CreatePixelShaderLibrary(param_2,(FVulkanShader *)pTVar15);
        *(VkPipeline_T **)&pTVar9->field_0x210 = pVVar12;
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIPixelShader,3> *)&(*ppFVar8)[-1].CodeHeader;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar15;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// CreateShader<TVulkanBaseShader<FRHIVertexShader,0>_> @ 145b8ba20

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */

TVulkanBaseShader<FRHIVertexShader,0> * __thiscall
FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIVertexShader,0>_>
          (FVulkanShaderFactory *this,TArrayView<unsigned_char_const_,int> *param_1,
          FVulkanDevice *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FVulkanShader *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  FVulkanShader **ppFVar8;
  TVulkanBaseShader<FRHIVertexShader,0> *this_00;
  TVulkanBaseShader<FRHIVertexShader,0> *pTVar9;
  FShaderCodePackedResourceCounts *pFVar10;
  char *pcVar11;
  VkPipeline_T *pVVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  TVulkanBaseShader<FRHIVertexShader,0> *pTVar15;
  ulonglong uVar16;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  ulong64 local_268 [2];
  FShaderResourceTable local_258;
  FSpirvContainer local_1e8;
  TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&> local_1d0;
  FShaderCodeReader local_1c0;
  FMemoryReaderView local_1a8;
  ulong64 *local_f8;
  FVulkanShader ***local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FVulkanShaderHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar2 = param_1->ArrayNum;
  uVar13 = (ulonglong)uVar2;
  uVar7 = (*FCrc::MemCrc32Func)(param_1->DataPtr,uVar2,0);
  uVar16 = CONCAT44(uVar7,uVar2);
  local_268[0] = uVar16;
  if (uVar16 != 0) {
    AcquireSRWLockShared((PSRWLOCK)this);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)this->ShaderMap,uVar16);
    if (ppFVar8 != (FVulkanShader **)0x0) {
      pFVar3 = *ppFVar8;
      ReleaseSRWLockShared((PSRWLOCK)this);
      pTVar9 = (TVulkanBaseShader<FRHIVertexShader,0> *)&pFVar3[-1].CodeHeader;
      if (pFVar3 == (FVulkanShader *)0x0) {
        pTVar9 = (TVulkanBaseShader<FRHIVertexShader,0> *)0x0;
      }
      goto LAB_145b8babb;
    }
    ReleaseSRWLockShared((PSRWLOCK)this);
    uVar13 = uVar16;
  }
  uVar16 = uVar13;
  pTVar9 = (TVulkanBaseShader<FRHIVertexShader,0> *)0x0;
LAB_145b8babb:
  pTVar15 = (TVulkanBaseShader<FRHIVertexShader,0> *)0x0;
  if (pTVar9 == (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
    local_e8 = param_1->DataPtr;
    uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8.Bytes.Data = param_1->DataPtr;
    local_1a8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_1->ArrayNum;
    uVar14 = (undefined7)(uVar16 >> 8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_1a8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,CONCAT71(uVar14,1));
    local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d8.SourceHash.Hash[0x10] = '\0';
    local_d8.SourceHash.Hash[0x11] = '\0';
    local_d8.SourceHash.Hash[0x12] = '\0';
    local_d8.SourceHash.Hash[0x13] = '\0';
    local_d8.SpirvCRC = 0;
    local_d8.WaveSize = '\0';
    local_d8.RayGroupAnyHit = NotPresent;
    local_d8.RayGroupIntersection = NotPresent;
    local_d8.SourceHash.Hash[0] = '\0';
    local_d8.SourceHash.Hash[1] = '\0';
    local_d8.SourceHash.Hash[2] = '\0';
    local_d8.SourceHash.Hash[3] = '\0';
    local_d8.SourceHash.Hash[4] = '\0';
    local_d8.SourceHash.Hash[5] = '\0';
    local_d8.SourceHash.Hash[6] = '\0';
    local_d8.SourceHash.Hash[7] = '\0';
    local_d8.SourceHash.Hash[8] = '\0';
    local_d8.SourceHash.Hash[9] = '\0';
    local_d8.SourceHash.Hash[10] = '\0';
    local_d8.SourceHash.Hash[0xb] = '\0';
    local_d8.SourceHash.Hash[0xc] = '\0';
    local_d8.SourceHash.Hash[0xd] = '\0';
    local_d8.SourceHash.Hash[0xe] = '\0';
    local_d8.SourceHash.Hash[0xf] = '\0';
    local_d8.DebugName.Data.ArrayNum = 0;
    local_d8.DebugName.Data.ArrayMax = 0;
    local_d8.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Bindings.ArrayNum = 0;
    local_d8.Bindings.ArrayMax = 0;
    local_d8.UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniformBufferInfos.ArrayNum = 0;
    local_d8.UniformBufferInfos.ArrayMax = 0;
    local_d8.InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.InputAttachmentInfos.ArrayNum = 0;
    local_d8.InputAttachmentInfos.ArrayMax = 0;
    local_d8.GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.GlobalSamplerInfos.ArrayNum = 0;
    local_d8.GlobalSamplerInfos.ArrayMax = 0;
    local_d8.NumBoundUniformBuffers = 0;
    local_d8.PackedGlobalsSize = 0;
    local_d8.InputAttachmentsMask = 0;
    local_d8.RayTracingPayloadType = 0;
    local_d8.RayTracingPayloadSize = 0;
    local_d8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::operator<<((FArchive *)&local_1a8,&local_d8);
    local_258.ResourceTableBits = 0;
    local_258.ShaderResourceViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ShaderResourceViewMap.ArrayNum = 0;
    local_258.ShaderResourceViewMap.ArrayMax = 0;
    local_258.SamplerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SamplerMap.ArrayNum = 0;
    local_258.SamplerMap.ArrayMax = 0;
    local_258.UnorderedAccessViewMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.UnorderedAccessViewMap.ArrayNum = 0;
    local_258.UnorderedAccessViewMap.ArrayMax = 0;
    local_258.ResourceTableLayoutHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceTableLayoutHashes.ArrayNum = 0;
    local_258.ResourceTableLayoutHashes.ArrayMax = 0;
    local_258.TextureMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.TextureMap.ArrayNum = 0;
    local_258.TextureMap.ArrayMax = 0;
    local_258.ResourceCollectionMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ResourceCollectionMap.ArrayNum = 0;
    local_258.ResourceCollectionMap.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          FMemoryReaderView::Serialize(&local_1a8,&local_258,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_258.ResourceTableBits);
      }
    }
    else {
      local_258.ResourceTableBits = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ShaderResourceViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.SamplerMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.UnorderedAccessViewMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceTableLayoutHashes);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.TextureMap);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_1a8,&local_258.ResourceCollectionMap);
    local_1e8.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SpirvCode.ArrayNum = 0;
    local_1e8.SpirvCode.ArrayMax = 0;
    local_1e8.UncompressedSizeBytes = -1;
    ::operator<<((FArchive *)&local_1a8,&local_1e8);
    AcquireSRWLockExclusive((PSRWLOCK)this);
    ppFVar8 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                      *)this->ShaderMap,local_268[0]);
    if (ppFVar8 == (FVulkanShader **)0x0) {
      this_00 = ::operator_new(0x238);
      uVar5 = local_268[0];
      pTVar9 = pTVar15;
      local_1d0.Value = (FVulkanShader **)pTVar15;
      if (this_00 != (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
        FRHIShader::FRHIShader((FRHIShader *)this_00,RRT_VertexShader,SF_Vertex);
        *(undefined ***)this_00 = &___7FRHIVertexShader__6B_;
        puVar1 = &this_00->field_0x108;
        FVulkanShader::FVulkanShader
                  ((FVulkanShader *)puVar1,param_2,SF_Vertex,&local_d8,&local_1e8,uVar5,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->field_0x80);
        *(undefined ***)this_00 =
             &TVulkanBaseShader<FRHIVertexShader,0>::_vftable__for__FRHIVertexShader__;
        *(undefined ***)puVar1 =
             &TVulkanBaseShader<FRHIVertexShader,0>::_vftable__for__FVulkanShader__;
        FShaderResourceTable::operator=((FShaderResourceTable *)&this_00->field_0x18,&local_258);
        pTVar9 = this_00;
        local_1d0.Value = (FVulkanShader **)puVar1;
      }
      local_f8 = local_268;
      local_f0 = &local_1d0.Value;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanShader_*_&&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  *)this->ShaderMap,&local_1d0,(bool *)&local_f8);
      local_1c0.ShaderCode.DataPtr = param_1->DataPtr;
      local_1c0.ShaderCode.ArrayNum = param_1->ArrayNum;
      local_1c0.ShaderCode._12_4_ = *(undefined4 *)&param_1->field_0xc;
      if ((param_1->ArrayNum == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderCode.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                             ,0x3de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVulkanBaseShader<FRHIVertexShader,0> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar10 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(&local_1c0);
      if (pFVar10 != (FShaderCodePackedResourceCounts *)0x0) {
        if (pTVar9->field_0x104 == '\x05') {
          pTVar9->field_0x105 =
               (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 1 ^ pTVar9->field_0x105;
        }
        pTVar9->field_0x105 =
             (pFVar10->UsageFlags >> 4 ^ pTVar9->field_0x105) & 2 ^ pTVar9->field_0x105;
        pTVar9->field_0x209 = (pFVar10->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
      }
      pcVar11 = FShaderCodeReader::FindOptionalData(&local_1c0,Name);
      ::FString::FString(&local_278,pcVar11);
      puVar1 = &pTVar9->field_0x90;
      if ((FString *)puVar1 != &local_278) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_278.Data.AllocatorInstance.Data;
        *(int *)&pTVar9->field_0x98 = local_278.Data.ArrayNum;
        *(int *)&pTVar9->field_0x9c = local_278.Data.ArrayMax;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)pTVar9,&local_1c0);
      if ((((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
           0x1e4000001000000) && (bVar6 = FVulkanDevice::SupportsBindless(param_2), bVar6)) {
        if (pTVar9 != (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
          pTVar15 = (TVulkanBaseShader<FRHIVertexShader,0> *)&pTVar9->field_0x108;
        }
        pVVar12 = CreatePreRasterShaderLibrary
                            (param_2,(FVulkanShader *)pTVar15,VK_SHADER_STAGE_VERTEX_BIT);
        *(VkPipeline_T **)&pTVar9->field_0x210 = pVVar12;
      }
    }
    else {
      pTVar9 = (TVulkanBaseShader<FRHIVertexShader,0> *)&(*ppFVar8)[-1].CodeHeader;
      if (*ppFVar8 == (FVulkanShader *)0x0) {
        pTVar9 = pTVar15;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    if (local_1e8.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.SpirvCode.AllocatorInstance.Data);
    }
    if (local_258.ResourceCollectionMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ResourceCollectionMap.AllocatorInstance.Data);
    }
    if (local_258.TextureMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.TextureMap.AllocatorInstance.Data);
    }
    if (local_258.ResourceTableLayoutHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_258.ResourceTableLayoutHashes.AllocatorInstance.Data);
    }
    if (local_258.UnorderedAccessViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.UnorderedAccessViewMap.AllocatorInstance.Data);
    }
    if (local_258.SamplerMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SamplerMap.AllocatorInstance.Data);
    }
    if (local_258.ShaderResourceViewMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ShaderResourceViewMap.AllocatorInstance.Data);
    }
    if (local_d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DebugName.Data.AllocatorInstance.Data);
    }
    if (local_d8.GlobalSamplerInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.GlobalSamplerInfos.AllocatorInstance.Data);
    }
    if (local_d8.InputAttachmentInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.InputAttachmentInfos.AllocatorInstance.Data);
    }
    if (local_d8.UniformBufferInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBufferInfos.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
  }
  return pTVar9;
}

// ~FVulkanShaderFactory @ 145b96180

void __thiscall FVulkanShaderFactory::~FVulkanShaderFactory(FVulkanShaderFactory *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  FVulkanShaderFactory *pFVar7;
  TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
  *SRWLock;
  longlong lVar8;
  longlong lVar9;
  
  SRWLock = this->ShaderMap;
  for (pFVar7 = (FVulkanShaderFactory *)SRWLock; pFVar7 != this + 1;
      pFVar7 = (FVulkanShaderFactory *)
               ((longlong)
                ((ForElementType<FSetElementId> *)
                 ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pFVar7->RWLock + 1) + 1) + 8)) {
    bVar6 = 1 < *(int *)((ForElementType<FSetElementId> *)
                         ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)pFVar7->RWLock + 1) + 1);
    if (!bVar6) {
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                        *)pFVar7);
    }
    puVar1 = &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pFVar7->RWLock)->field_0xc;
    *(undefined4 *)
     &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)pFVar7->RWLock)->field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar7,0,(int *)puVar1);
    }
    *(undefined4 *)
     &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)pFVar7->RWLock)->field_0x30 = 0xffffffff;
    *(undefined4 *)
     &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)pFVar7->RWLock)->field_0x34 = 0;
    iVar2 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pFVar7->RWLock)->field_0x2c;
    *(undefined4 *)
     &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)pFVar7->RWLock)->field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)
       &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)pFVar7->RWLock)->field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)pFVar7->RWLock)->field_0x10,0);
    }
    if (bVar6) {
      *(int *)((ForElementType<FSetElementId> *)
               ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pFVar7->RWLock + 1) + 1) = 1;
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                *)pFVar7);
    }
  }
  lVar8 = 0xc;
  lVar9 = 0xc;
  pFVar7 = this + 1;
  do {
    lVar9 = lVar9 + -1;
    *(undefined4 *)&pFVar7[-1].ShaderMap[0xb].field_0x48 = 0;
    pvVar3 = *(void **)&pFVar7[-1].ShaderMap[0xb].field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanShader_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(pFVar7[-1].ShaderMap + 0xb));
    pFVar7 = (FVulkanShaderFactory *)(pFVar7[-1].ShaderMap + 0xb);
  } while (lVar9 != 0);
  do {
    SRWLock = (TMap<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
               *)((FPlatformRWLock *)(SRWLock + -1) + 9);
    lVar8 = lVar8 + -1;
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar5 == '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  } while (lVar8 != 0);
  return;
}

// LookupGfxShaders @ 145bb15b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanShaderFactory::LookupGfxShaders
          (FVulkanShaderFactory *this,ulong64 *param_1,FVulkanShader **param_2)

{
  PSRWLOCK SRWLock;
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FVulkanShader **ppFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  lVar8 = (longlong)param_1 - (longlong)param_2;
  do {
    uVar1 = *(ulong64 *)((longlong)param_2 + lVar8);
    if (uVar1 != 0) {
      if (iVar7 == 0) {
        lVar4 = 0;
        lVar6 = 0x60;
      }
      else if (iVar7 == 1) {
        lVar4 = 0x18;
        lVar6 = 0x150;
      }
      else if (iVar7 == 2) {
        lVar4 = 0x20;
        lVar6 = 0x1a0;
      }
      else if (iVar7 == 3) {
        lVar4 = 8;
        lVar6 = 0xb0;
      }
      else if (iVar7 == 4) {
        lVar4 = 0x10;
        lVar6 = 0x100;
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                           ,0x5e,L"Invalid graphic shader stage: %d");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar4 = 0x60;
        lVar6 = 0x420;
      }
      SRWLock = (PSRWLOCK)((longlong)&this->RWLock[0].Mutex.Mutex.Ptr + lVar4);
      AcquireSRWLockShared(SRWLock);
      ppFVar5 = TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                ::Find((TMapBase<unsigned___int64,FVulkanShader_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>_>
                        *)((longlong)&this->RWLock[0].Mutex.Mutex.Ptr + lVar6),uVar1);
      if (ppFVar5 != (FVulkanShader **)0x0) {
        *param_2 = *ppFVar5;
      }
      ReleaseSRWLockShared(SRWLock);
    }
    iVar7 = iVar7 + 1;
    param_2 = param_2 + 1;
  } while (iVar7 < 5);
  return;
}

// OnDeleteShader @ 145bb1eb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanShaderFactory::OnDeleteShader(FVulkanShaderFactory *this,FVulkanShader *param_1)

{
  EShaderFrequency EVar1;
  ulong64 uVar2;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *this_00;
  ulong64 local_res8;
  
  EVar1 = param_1->Frequency;
  uVar2 = param_1->ShaderKey;
  AcquireSRWLockExclusive((PSRWLOCK)(this->RWLock + EVar1));
  this_00 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
             *)(this->ShaderMap + param_1->Frequency);
  local_res8 = uVar2;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>(this_00,(int)(uVar2 >> 0x20) * 0x17 + (int)uVar2,&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bb1f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(this->RWLock + EVar1));
  return;
}

