// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 10

// FVulkanShader @ 145b92110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FVulkanShader * __thiscall
FVulkanShader::FVulkanShader
          (FVulkanShader *this,FVulkanDevice *param_1,EShaderFrequency param_2,
          FVulkanShaderHeader *param_3,FSpirvContainer *param_4,ulong64 param_5,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_6)

{
  FString *pFVar1;
  ERayHitGroupEntrypoint EVar2;
  int iVar3;
  uint uVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FVulkanShader *pFVar12;
  FShaderParametersMetadata *pFVar13;
  uchar *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_c8 [32];
  FScriptContainerElement local_78;
  undefined1 local_77 [3];
  FLLMScope local_74;
  FString local_70;
  FMemScope local_60;
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = &this->DebugEntryPoint;
  this->_padding_ = (longlong)&___7FVulkanShader__6B_;
  this->StaticSlots = param_6;
  (this->CodeHeader).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugEntryPoint).Data.ArrayNum = 0;
  (this->DebugEntryPoint).Data.ArrayMax = 0;
  this->ShaderKey = param_5;
  (this->CodeHeader).Bindings.AllocatorInstance.Data = (param_3->Bindings).AllocatorInstance.Data;
  (param_3->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).Bindings.ArrayNum = (param_3->Bindings).ArrayNum;
  (this->CodeHeader).Bindings.ArrayMax = (param_3->Bindings).ArrayMax;
  (param_3->Bindings).ArrayNum = 0;
  (param_3->Bindings).ArrayMax = 0;
  (this->CodeHeader).UniformBufferInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).UniformBufferInfos.AllocatorInstance.Data =
       (param_3->UniformBufferInfos).AllocatorInstance.Data;
  (param_3->UniformBufferInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).UniformBufferInfos.ArrayNum = (param_3->UniformBufferInfos).ArrayNum;
  (this->CodeHeader).UniformBufferInfos.ArrayMax = (param_3->UniformBufferInfos).ArrayMax;
  (param_3->UniformBufferInfos).ArrayNum = 0;
  (param_3->UniformBufferInfos).ArrayMax = 0;
  (this->CodeHeader).InputAttachmentInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).InputAttachmentInfos.AllocatorInstance.Data =
       (param_3->InputAttachmentInfos).AllocatorInstance.Data;
  (param_3->InputAttachmentInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).InputAttachmentInfos.ArrayNum = (param_3->InputAttachmentInfos).ArrayNum;
  (this->CodeHeader).InputAttachmentInfos.ArrayMax = (param_3->InputAttachmentInfos).ArrayMax;
  (param_3->InputAttachmentInfos).ArrayNum = 0;
  (param_3->InputAttachmentInfos).ArrayMax = 0;
  (this->CodeHeader).GlobalSamplerInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).GlobalSamplerInfos.AllocatorInstance.Data =
       (param_3->GlobalSamplerInfos).AllocatorInstance.Data;
  (param_3->GlobalSamplerInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).GlobalSamplerInfos.ArrayNum = (param_3->GlobalSamplerInfos).ArrayNum;
  (this->CodeHeader).GlobalSamplerInfos.ArrayMax = (param_3->GlobalSamplerInfos).ArrayMax;
  (param_3->GlobalSamplerInfos).ArrayNum = 0;
  (param_3->GlobalSamplerInfos).ArrayMax = 0;
  (this->CodeHeader).NumBoundUniformBuffers = param_3->NumBoundUniformBuffers;
  (this->CodeHeader).PackedGlobalsSize = param_3->PackedGlobalsSize;
  (this->CodeHeader).InputAttachmentsMask = param_3->InputAttachmentsMask;
  (this->CodeHeader).InOutMask = param_3->InOutMask;
  (this->CodeHeader).RayTracingPayloadType = param_3->RayTracingPayloadType;
  (this->CodeHeader).RayTracingPayloadSize = param_3->RayTracingPayloadSize;
  uVar9 = *(undefined8 *)((param_3->SourceHash).Hash + 8);
  *(undefined8 *)(this->CodeHeader).SourceHash.Hash = *(undefined8 *)(param_3->SourceHash).Hash;
  *(undefined8 *)((this->CodeHeader).SourceHash.Hash + 8) = uVar9;
  *(undefined4 *)((this->CodeHeader).SourceHash.Hash + 0x10) =
       *(undefined4 *)((param_3->SourceHash).Hash + 0x10);
  (this->CodeHeader).SpirvCRC = param_3->SpirvCRC;
  (this->CodeHeader).WaveSize = param_3->WaveSize;
  (this->CodeHeader).RayGroupAnyHit = param_3->RayGroupAnyHit;
  EVar2 = param_3->RayGroupIntersection;
  (this->CodeHeader).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).RayGroupIntersection = EVar2;
  (this->CodeHeader).DebugName.Data.AllocatorInstance.Data =
       (param_3->DebugName).Data.AllocatorInstance.Data;
  (param_3->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CodeHeader).DebugName.Data.ArrayNum = (param_3->DebugName).Data.ArrayNum;
  (this->CodeHeader).DebugName.Data.ArrayMax = (param_3->DebugName).Data.ArrayMax;
  (param_3->DebugName).Data.ArrayNum = 0;
  (param_3->DebugName).Data.ArrayMax = 0;
  *(undefined8 *)&this->ShaderModules = 0;
  *(undefined8 *)&(this->ShaderModules).field_0x8 = 0;
  *(undefined8 *)&(this->ShaderModules).field_0x20 = 0;
  *(undefined4 *)&(this->ShaderModules).field_0x28 = 0;
  *(undefined4 *)&(this->ShaderModules).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderModules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderModules).field_0x34 = 0;
  *(undefined8 *)&(this->ShaderModules).field_0x40 = 0;
  *(undefined4 *)&(this->ShaderModules).field_0x48 = 0;
  (this->SpirvContainer).SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Frequency = param_2;
  this->bUsesBindless = false;
  this->PipelineLibrary = (VkPipeline_T *)0x0;
  (this->SpirvContainer).SpirvCode.AllocatorInstance.Data =
       (param_4->SpirvCode).AllocatorInstance.Data;
  (param_4->SpirvCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpirvContainer).SpirvCode.ArrayNum = (param_4->SpirvCode).ArrayNum;
  (this->SpirvContainer).SpirvCode.ArrayMax = (param_4->SpirvCode).ArrayMax;
  (param_4->SpirvCode).ArrayNum = 0;
  (param_4->SpirvCode).ArrayMax = 0;
  (this->SpirvContainer).UncompressedSizeBytes = param_4->UncompressedSizeBytes;
  this->Device = param_1;
  FLLMScope::FLLMScope(&local_74,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true)
  ;
  FMemScope::FMemScope(&local_60,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  if ((this->Device == (FVulkanDevice *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Device",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                          ,0x1c6,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FVulkanShader *)(*pcVar8)();
    return pFVar12;
  }
  iVar3 = (this->SpirvContainer).UncompressedSizeBytes;
  if (iVar3 < 0) {
    iVar3 = (this->SpirvContainer).SpirvCode.ArrayNum;
  }
  if ((iVar3 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpirvContainer.GetSizeBytes() != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                          ,0x1c8,L"Empty SPIR-V! %s"), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FVulkanShader *)(*pcVar8)();
    return pFVar12;
  }
  uVar4 = (this->CodeHeader).UniformBufferInfos.ArrayNum;
  if ((int)(uint)((this->CodeHeader).PackedGlobalsSize != 0) < (int)uVar4) {
    pTVar5 = this->StaticSlots;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (pTVar5->ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,&pTVar5->AllocatorInstance,pTVar5->ArrayNum,&pTVar5->ArrayMax);
    }
    pFVar15 = (this->CodeHeader).UniformBufferInfos.AllocatorInstance.Data;
    iVar3 = (this->CodeHeader).UniformBufferInfos.ArrayNum;
    pFVar7 = pFVar15 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->CodeHeader).UniformBufferInfos.ArrayNum != iVar3) {
        local_77[0] = 0;
        `TCheckedPointerIterator<FVulkanShaderHeader::FUniformBufferInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_77);
      }
      if (pFVar15 == pFVar7) break;
      pFVar13 = FindUniformBufferStructByLayoutHash(*(uint *)pFVar15);
      pTVar5 = this->StaticSlots;
      if (pFVar13 == (FShaderParametersMetadata *)0x0) {
        local_78 = (FScriptContainerElement)0xff;
        pFVar6 = (pTVar5->AllocatorInstance).Data;
        if (((pFVar6 <= &local_78) && (&local_78 < pFVar6 + pTVar5->ArrayMax)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FVulkanShader *)(*pcVar8)();
          return pFVar12;
        }
        iVar11 = pTVar5->ArrayNum;
        if (iVar11 == pTVar5->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar11 + 1;
        pFVar15 = pFVar15 + 8;
        (pTVar5->AllocatorInstance).Data[iVar11] = local_78;
      }
      else {
        if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x177,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FVulkanShader *)(*pcVar8)();
          return pFVar12;
        }
        pFVar6 = (pTVar5->AllocatorInstance).Data;
        puVar14 = &((pFVar13->Layout).Reference)->StaticSlot;
        if (((pFVar6 <= puVar14) && (puVar14 < pFVar6 + pTVar5->ArrayMax)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FVulkanShader *)(*pcVar8)();
          return pFVar12;
        }
        iVar11 = pTVar5->ArrayNum;
        if (iVar11 == pTVar5->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar11 + 1;
        pFVar15 = pFVar15 + 8;
        (pTVar5->AllocatorInstance).Data[iVar11] = (FScriptContainerElement)*puVar14;
      }
    }
  }
  TCString<char>::SnprintfImpl(local_58,0x18,"main_%0.8x_%0.8x");
  ::FString::FString(&local_70,local_58);
  if (pFVar1 != &local_70) {
    pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    (this->DebugEntryPoint).Data.ArrayNum = local_70.Data.ArrayNum;
    (this->DebugEntryPoint).Data.ArrayMax = local_70.Data.ArrayMax;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(&local_74);
  return this;
}

// ~FVulkanShader @ 145b95d40

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanShader::~FVulkanShader(FVulkanShader *this)

{
  undefined1 *puVar1;
  TMap<unsigned_int,TRefCountPtr<FVulkanShaderModule>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>_>
  *this_00;
  FPlatformRWLock *SRWLock;
  EShaderFrequency EVar2;
  int iVar3;
  FVulkanDevice *pFVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  *this_03;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs> *this_04;
  wchar_t *pwVar11;
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FVulkanShader__6B_;
  EnterCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  this_00 = &this->ShaderModules;
  bVar8 = 1 < *(int *)&(this->ShaderModules).field_0x48;
  if (!bVar8) {
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ShaderModules).field_0x8);
  puVar1 = &(this->ShaderModules).field_0xc;
  *(undefined4 *)&(this->ShaderModules).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ShaderModules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderModules).field_0x34 = 0;
  iVar3 = *(int *)&(this->ShaderModules).field_0x2c;
  *(undefined4 *)&(this->ShaderModules).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ShaderModules).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderModules).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ShaderModules).field_0x48 = 1;
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  pFVar4 = this->Device;
  FVar5 = (FName)this->ShaderKey;
  SRWLock = (pFVar4->ShaderFactory).RWLock + this->Frequency;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_03 = (TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
             *)((pFVar4->ShaderFactory).ShaderMap + this->Frequency);
  local_res8 = FVar5;
  if (*(int *)&(this_03->Elements).field_0x8 != *(int *)&(this_03->Elements).field_0x34) {
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              (this_03,FVar5.Number * 0x17 + FVar5.ComparisonIndex.Value.Value,
               (ulong64 *)&local_res8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (this->PipelineLibrary == (VkPipeline_T *)0x0) goto LAB_145b960cf;
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&this->Device->DeferredDeletionQueue,Pipeline,(ulong64)this->PipelineLibrary);
  EVar2 = this->Frequency;
  this->PipelineLibrary = (VkPipeline_T *)0x0;
  if (EVar2 == SF_Vertex) {
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)StatPtr_STAT_VulkanNumVSLibs;
    if (StatPtr_STAT_VulkanNumVSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs>)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_VulkanNumVSLibs");
      pwVar11 = L"Num VS Libraries";
      this_04 = &StatPtr_STAT_VulkanNumVSLibs;
LAB_145b95fff:
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_04,*pFVar9,pwVar11,
                          "STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
                          L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
  }
  else if (EVar2 == SF_Mesh) {
    FVar10 = StatPtr_STAT_VulkanNumMSLibs;
    if (StatPtr_STAT_VulkanNumMSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_VulkanNumMSLibs");
      pwVar11 = L"Num MS Libraries";
      this_04 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs> *)&StatPtr_STAT_VulkanNumMSLibs;
      goto LAB_145b95fff;
    }
  }
  else {
    if (EVar2 != SF_Pixel) goto LAB_145b960cf;
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)StatPtr_STAT_VulkanNumPSLibs;
    if (StatPtr_STAT_VulkanNumPSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_VulkanNumPSLibs");
      pwVar11 = L"Num PS Libraries";
      this_04 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs> *)&StatPtr_STAT_VulkanNumPSLibs;
      goto LAB_145b95fff;
    }
  }
  FVar5 = *(FName *)FVar10;
  local_res8 = FVar5;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_38.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar5;
    local_38.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_01,&local_38);
    FStatsTrace::Add(&local_res8,-1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
LAB_145b960cf:
  pFVar6 = (this->SpirvContainer).SpirvCode.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  *(undefined4 *)&(this->ShaderModules).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ShaderModules).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  pFVar6 = (this->CodeHeader).DebugName.Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CodeHeader).GlobalSamplerInfos.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CodeHeader).InputAttachmentInfos.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CodeHeader).UniformBufferInfos.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CodeHeader).Bindings.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DebugEntryPoint).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// CreateHandle @ 145ba3e50

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

TRefCountPtr<FVulkanShaderModule> __thiscall
FVulkanShader::CreateHandle
          (FVulkanShader *this,FGfxPipelineDesc *param_1,FVulkanLayout *param_2,uint param_3)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FSpirvCode *pFVar2;
  ForAnyElementType FVar3;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  ForAnyElementType local_40;
  FSpirvCode local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  GetSpirvCode(&local_30,&this->SpirvContainer);
  FVar3.Data = local_30.UncompressedCode.AllocatorInstance.Data;
  if ((1 < *(ushort *)((longlong)&param_2->_padding_ + 4)) &&
     ((this->CodeHeader).InputAttachmentsMask != 0)) {
    pFVar2 = PatchSpirvInputAttachments((FSpirvCode *)local_50,&local_30);
    local_30.CodeView.DataPtr = (pFVar2->CodeView).DataPtr;
    local_30.CodeView.ArrayNum = (pFVar2->CodeView).ArrayNum;
    local_30.CodeView._12_4_ = *(undefined4 *)&(pFVar2->CodeView).field_0xc;
    pTVar1 = &pFVar2->UncompressedCode;
    if (&local_30.UncompressedCode != pTVar1) {
      if (local_30.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.UncompressedCode.AllocatorInstance.Data);
      }
      local_30.UncompressedCode.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_30.UncompressedCode.ArrayNum = (pFVar2->UncompressedCode).ArrayNum;
      local_30.UncompressedCode.ArrayMax = (pFVar2->UncompressedCode).ArrayMax;
      (pFVar2->UncompressedCode).ArrayNum = 0;
      (pFVar2->UncompressedCode).ArrayMax = 0;
    }
    FVar3.Data = local_30.UncompressedCode.AllocatorInstance.Data;
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  CreateShaderModule((FVulkanDevice *)param_1,(FSpirvCode *)this->Device);
  local_50._0_8_ = &stack0x00000028;
  local_50._8_8_ = param_1;
  TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
            ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
              *)&this->ShaderModules,
             (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> *)
             local_58,(bool *)local_50);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  return (TRefCountPtr<FVulkanShaderModule>)(FVulkanShaderModule *)param_1;
}

// CreateHandle @ 145ba3fa0

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

TRefCountPtr<FVulkanShaderModule> __thiscall
FVulkanShader::CreateHandle(FVulkanShader *this,FVulkanLayout *param_1,uint param_2)

{
  FVulkanDevice *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement local_res20 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  FSpirvCode local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  GetSpirvCode(&local_30,&this->SpirvContainer);
  CreateShaderModule((FVulkanDevice *)param_1,(FSpirvCode *)this->Device);
  local_40._0_8_ = local_res20;
  local_40._8_8_ = param_1;
  TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
            ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
              *)&this->ShaderModules,
             (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> *)
             local_48,(bool *)local_40);
  if (1 < (this->CodeHeader).DebugName.Data.ArrayNum) {
    this_00 = this->Device;
    ::FString::PrintfImpl((FString *)local_40,L"%s : (FVulkanShader*)0x%p");
    pFVar1 = (FScriptContainerElement *)L"";
    if (local_40._8_4_ != 0) {
      pFVar1 = (FScriptContainerElement *)local_40._0_8_;
    }
    FVulkanDevice::VulkanSetObjectName
              (this_00,VK_OBJECT_TYPE_SHADER_MODULE,*(ulong64 *)(param_1->_padding_ + 0x10),
               (wchar_t *)pFVar1);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
  }
  if (local_30.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.UncompressedCode.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  return (TRefCountPtr<FVulkanShaderModule>)(FVulkanShaderModule *)param_1;
}

// GetOrCreateHandle @ 145bac490

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

TRefCountPtr<FVulkanShaderModule> __thiscall FVulkanShader::GetOrCreateHandle(FVulkanShader *this)

{
  longlong lVar1;
  FVulkanDevice *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FVulkanShaderModule> TVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  FVulkanShaderModule *in_RDX;
  ForAnyElementType FVar8;
  undefined4 local_res8 [4];
  TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> local_res18;
  FString local_68;
  undefined4 *local_58;
  TRefCountPtr<FVulkanShaderModule> **local_50;
  FSpirvCode local_48;
  
  bVar3 = FVulkanDevice::SupportsBindless(this->Device);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device->SupportsBindless()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x273,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4.Reference = (FVulkanShaderModule *)(*pcVar2)();
    return (TRefCountPtr<FVulkanShaderModule>)TVar4.Reference;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  local_res8[0] = 0;
  if (*(int *)&(this->ShaderModules).field_0x8 != *(int *)&(this->ShaderModules).field_0x34) {
    piVar5 = *(int **)&(this->ShaderModules).field_0x40;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)&(this->ShaderModules).field_0x38;
    }
    iVar6 = *piVar5;
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->ShaderModules + (longlong)iVar6 * 0x18;
        if (*(int *)(*(longlong *)&this->ShaderModules + (longlong)iVar6 * 0x18) == 0) {
          plVar7 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            lVar1 = *plVar7;
            in_RDX->_padding_ = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
            }
            goto LAB_145bac657;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  GetSpirvCode(&local_48,&this->SpirvContainer);
  CreateShaderModule((FVulkanDevice *)&local_res18.Value,(FSpirvCode *)this->Device);
  local_58 = local_res8;
  local_50 = &local_res18.Value;
  TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
            ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
              *)&this->ShaderModules,&local_res18,(bool *)&local_58);
  if (1 < (this->CodeHeader).DebugName.Data.ArrayNum) {
    this_00 = this->Device;
    ::FString::PrintfImpl(&local_68,L"%s : (FVulkanShader*)0x%p");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
    }
    FVulkanDevice::VulkanSetObjectName
              (this_00,VK_OBJECT_TYPE_SHADER_MODULE,(ulong64)local_res18.Value[2].Reference,
               (wchar_t *)FVar8.Data);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  in_RDX->_padding_ = (longlong)local_res18.Value;
  local_res18.Value = (TRefCountPtr<FVulkanShaderModule> *)0x0;
  if (local_48.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.UncompressedCode.AllocatorInstance.Data);
  }
LAB_145bac657:
  LeaveCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  return (TRefCountPtr<FVulkanShaderModule>)in_RDX;
}

// GetPatchedSpirvCode @ 145bac680

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

FSpirvCode * __thiscall
FVulkanShader::GetPatchedSpirvCode
          (FVulkanShader *this,FSpirvCode *__return_storage_ptr__,FGfxPipelineDesc *param_1,
          FVulkanLayout *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined4 uVar5;
  FSpirvCode *pFVar6;
  FSpirvCode local_28;
  
  GetSpirvCode(__return_storage_ptr__,&this->SpirvContainer);
  if ((1 < param_1->RasterizationSamples) && ((this->CodeHeader).InputAttachmentsMask != 0)) {
    pFVar6 = PatchSpirvInputAttachments(&local_28,__return_storage_ptr__);
    pTVar1 = &__return_storage_ptr__->UncompressedCode;
    iVar4 = (pFVar6->CodeView).ArrayNum;
    uVar5 = *(undefined4 *)&(pFVar6->CodeView).field_0xc;
    pTVar2 = &pFVar6->UncompressedCode;
    (__return_storage_ptr__->CodeView).DataPtr = (pFVar6->CodeView).DataPtr;
    (__return_storage_ptr__->CodeView).ArrayNum = iVar4;
    *(undefined4 *)&(__return_storage_ptr__->CodeView).field_0xc = uVar5;
    if (pTVar1 != pTVar2) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UncompressedCode).ArrayNum = (pFVar6->UncompressedCode).ArrayNum;
      (__return_storage_ptr__->UncompressedCode).ArrayMax = (pFVar6->UncompressedCode).ArrayMax;
      (pFVar6->UncompressedCode).ArrayNum = 0;
      (pFVar6->UncompressedCode).ArrayMax = 0;
    }
    if (local_28.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.UncompressedCode.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetSpirvCode @ 145bac930

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FSpirvCode * __cdecl
FVulkanShader::GetSpirvCode(FSpirvCode *__return_storage_ptr__,FSpirvContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  FSpirvCode *pFVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  ForAnyElementType local_58;
  int local_50 [2];
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar6 = param_1->UncompressedSizeBytes;
  if (iVar6 == -1) {
    local_38 = (param_1->SpirvCode).AllocatorInstance.Data;
    iStack_30 = (int)((ulonglong)(longlong)(param_1->SpirvCode).ArrayNum >> 2);
    if ((iStack_30 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FSpirvCode *)(*pcVar2)();
      return pFVar9;
    }
    (__return_storage_ptr__->CodeView).DataPtr = (uint *)local_38;
    *(ulonglong *)&(__return_storage_ptr__->CodeView).ArrayNum = CONCAT44(uStack_2c,iStack_30);
    (__return_storage_ptr__->UncompressedCode).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UncompressedCode).ArrayNum = 0;
    (__return_storage_ptr__->UncompressedCode).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  if (iVar6 < 0) {
    iVar6 = (param_1->SpirvCode).ArrayNum;
  }
  iVar7 = (int)((ulonglong)(longlong)iVar6 >> 2);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(longlong)iVar6 >> 2 & 0xffffffff);
  }
  iVar6 = 0;
  if (0 < iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,&local_58,0,local_50 + 1);
    iVar6 = local_50[0];
  }
  iVar7 = param_1->UncompressedSizeBytes;
  if (iVar7 < 0) {
    iVar7 = (param_1->SpirvCode).ArrayNum;
  }
  uVar10 = (uint)((ulonglong)(longlong)iVar7 >> 2);
  if (iVar6 < (int)uVar10) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10 - iVar6,&local_58,local_50,local_50 + 1);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(longlong)iVar7 >> 2 & 0xffffffff);
    }
    if ((int)uVar10 < iVar6) {
      uVar11 = iVar6 - uVar10;
      if ((int)(uVar11 | uVar10) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FSpirvCode *)(*pcVar2)();
          return pFVar9;
        }
        iVar6 = local_50[0];
      }
      if (uVar11 != 0) {
        iVar7 = (iVar6 - uVar10) - uVar11;
        if (iVar7 != 0) {
          memmove(local_58.Data + (longlong)(int)uVar10 * 4,
                  local_58.Data + (longlong)(int)uVar10 * 4 + (longlong)(int)uVar11 * 4,
                  (longlong)iVar7 << 2);
          iVar6 = local_50[0];
        }
        local_50[0] = iVar6 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_58,iVar6 - uVar11,local_50 + 1);
      }
    }
  }
  FVar4.Data = local_58.Data;
  iVar6 = (param_1->SpirvCode).ArrayNum;
  iVar7 = param_1->UncompressedSizeBytes;
  pFVar1 = (param_1->SpirvCode).AllocatorInstance.Data;
  FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
  uStackX_1c = 0;
  if (iVar7 < 0) {
    iVar7 = iVar6;
  }
  local_res18 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_res18;
  FCompression::UncompressMemory
            (FVar3,FVar4.Data,(longlong)iVar7,pFVar1,(longlong)iVar6,COMPRESS_NoFlags,0);
  iStack_40 = local_50[0];
  (__return_storage_ptr__->UncompressedCode).AllocatorInstance.Data = local_58.Data;
  (__return_storage_ptr__->CodeView).DataPtr = (uint *)0x0;
  (__return_storage_ptr__->CodeView).ArrayNum = 0;
  (__return_storage_ptr__->UncompressedCode).ArrayMax = local_50[1];
  (__return_storage_ptr__->UncompressedCode).ArrayNum = local_50[0];
  local_48 = (__return_storage_ptr__->UncompressedCode).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  if ((iStack_40 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSpirvCode *)(*pcVar2)();
    return pFVar9;
  }
  (__return_storage_ptr__->CodeView).DataPtr = (uint *)local_48;
  *(ulonglong *)&(__return_storage_ptr__->CodeView).ArrayNum = CONCAT44(uStack_3c,iStack_40);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// NeedsSpirvInputAttachmentPatching @ 145bb1e90

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

bool __thiscall
FVulkanShader::NeedsSpirvInputAttachmentPatching(FVulkanShader *this,FGfxPipelineDesc *param_1)

{
  if ((1 < param_1->RasterizationSamples) && ((this->CodeHeader).InputAttachmentsMask != 0)) {
    return true;
  }
  return false;
}

// PatchSpirvInputAttachments @ 145bb1f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSpirvCode * __cdecl
FVulkanShader::PatchSpirvInputAttachments(FSpirvCode *__return_storage_ptr__,FSpirvCode *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FSpirvCode *pFVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_a8;
  int local_a0 [2];
  uint local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  uint *local_88;
  undefined8 uStack_80;
  FSpirvCode *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  ForElementType<unsigned_int> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88 = (param_1->CodeView).DataPtr;
  iVar8 = (param_1->CodeView).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->CodeView).field_0xc;
  uStack_80 = *(undefined8 *)&(param_1->CodeView).ArrayNum;
  uVar16 = 0;
  uVar14 = (uint)uStack_80;
  local_78 = __return_storage_ptr__;
  if (uVar14 < 5) {
    (__return_storage_ptr__->CodeView).DataPtr = local_88;
    (__return_storage_ptr__->CodeView).ArrayNum = iVar8;
    *(undefined4 *)&(__return_storage_ptr__->CodeView).field_0xc = uVar6;
    pTVar1 = &__return_storage_ptr__->UncompressedCode;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar8 = (param_1->UncompressedCode).ArrayNum;
    pFVar3 = (param_1->UncompressedCode).AllocatorInstance.Data;
    piVar2 = &(__return_storage_ptr__->UncompressedCode).ArrayMax;
    (__return_storage_ptr__->UncompressedCode).ArrayNum = iVar8;
    if (iVar8 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,pFVar3,(longlong)iVar8 << 2);
    }
  }
  else {
    uVar15 = uVar14 + 2;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (0 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&local_a8,0,local_a0 + 1);
    }
    if (((int)uVar14 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSpirvCode *)(*pcVar4)();
      return pFVar10;
    }
    if ((local_88 == (uint *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSpirvCode *)(*pcVar4)();
      return pFVar10;
    }
    uVar15 = 5;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,5,&local_a8,local_a0,local_a0 + 1);
    pFVar3 = local_a8.Data + (longlong)iVar8 * 4;
    uVar5 = *(undefined8 *)(local_88 + 2);
    *(undefined8 *)pFVar3 = *(undefined8 *)local_88;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
    *(uint *)(pFVar3 + 0x10) = local_88[4];
    local_98 = 0;
    local_68.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50 = 0;
    local_4c = 4;
    if (5 < (uint)uStack_80) {
      do {
        uVar9 = 0;
        if ((int)uVar15 < (int)uStack_80) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FSpirvCode *)(*pcVar4)();
          return pFVar10;
        }
        _Src = local_88 + (int)uVar15;
        uVar9 = local_88[(int)uVar15];
        uVar17 = uVar9 >> 0x10;
        uVar13 = uVar9 & 0xffff;
        if (uVar13 == 0x15) {
          if (_Src[3] == 1) {
            uVar16 = _Src[1];
          }
        }
        else if (uVar13 == 0x2b) {
          if ((_Src[1] == uVar16) && (_Src[3] == 0)) {
            local_98 = _Src[2];
          }
        }
        else if (uVar13 == 0x19) {
          if (_Src[3] == 6) {
            _Src[6] = 1;
            FVar11 = (ForElementType<unsigned_int>)(_Src + 1);
            FVar12 = (ForElementType<unsigned_int>)&local_68;
            if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_68.SecondaryData;
            }
            if ((ulonglong)FVar12 <= (ulonglong)FVar11) {
              FVar12 = (ForElementType<unsigned_int>)&local_68;
              if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_68.SecondaryData;
              }
              if (((ulonglong)FVar11 < (ulonglong)((longlong)FVar12 + (longlong)local_4c * 4)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar10 = (FSpirvCode *)(*pcVar4)();
                return pFVar10;
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                   (0x404,&local_68,&local_4c);
            }
            FVar12 = (ForElementType<unsigned_int>)&local_68;
            iVar8 = local_50;
            if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_68.SecondaryData;
            }
LAB_145bb226b:
            local_50 = iVar8 + 1;
            *(uint *)((longlong)FVar12 + (longlong)iVar8 * 4) = *(uint *)FVar11;
          }
        }
        else if (uVar13 == 0x3d) {
          FVar11 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_68.SecondaryData;
          }
          FVar12 = (ForElementType<unsigned_int>)((longlong)FVar11 + (longlong)local_50 * 4);
          if (FVar11 != FVar12) {
            do {
              if (*(uint *)FVar11 == _Src[1]) {
                FVar11 = (ForElementType<unsigned_int>)(_Src + 2);
                FVar12 = (ForElementType<unsigned_int>)&local_68;
                if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar12 = local_68.SecondaryData;
                }
                if ((ulonglong)FVar12 <= (ulonglong)FVar11) {
                  FVar12 = (ForElementType<unsigned_int>)&local_68;
                  if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar12 = local_68.SecondaryData;
                  }
                  if (((ulonglong)FVar11 < (ulonglong)((longlong)FVar12 + (longlong)local_4c * 4))
                     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    pFVar10 = (FSpirvCode *)(*pcVar4)();
                    return pFVar10;
                  }
                }
                if (local_50 == local_4c) {
                  local_50 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                       (0x404,&local_68,&local_4c);
                }
                FVar12 = (ForElementType<unsigned_int>)&local_68;
                iVar8 = local_50;
                if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar12 = local_68.SecondaryData;
                }
                goto LAB_145bb226b;
              }
              FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
            } while (FVar11 != FVar12);
          }
        }
        else if (uVar13 == 0x62) {
          FVar11 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_68.SecondaryData;
          }
          FVar12 = (ForElementType<unsigned_int>)((longlong)FVar11 + (longlong)local_50 * 4);
          if (FVar11 != FVar12) {
            do {
              if (*(uint *)FVar11 == _Src[3]) {
                if ((local_98 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Constant0 != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                                       ,0x243,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FSpirvCode *)(*pcVar4)();
                  return pFVar10;
                }
                local_94 = 0x70062;
                if (((local_a8.Data <= (FScriptContainerElement *)&local_94) &&
                    ((FScriptContainerElement *)&local_94 <
                     local_a8.Data + (longlong)local_a0[1] * 4)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FSpirvCode *)(*pcVar4)();
                  return pFVar10;
                }
                iVar8 = local_a0[0];
                if (local_a0[0] == local_a0[1]) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_a8,local_a0 + 1);
                }
                *(undefined4 *)(local_a8.Data + (longlong)iVar8 * 4) = local_94;
                local_a0[0] = iVar8 + 1;
                if ((_Src + 1 == (uint *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Ptr != nullptr || Count == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x9c1,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FSpirvCode *)(*pcVar4)();
                  return pFVar10;
                }
                iVar8 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,4,&local_a8,local_a0,local_a0 + 1);
                uVar5 = *(undefined8 *)(_Src + 3);
                local_90[0] = 0x40;
                *(undefined8 *)(local_a8.Data + (longlong)iVar8 * 4) = *(undefined8 *)(_Src + 1);
                *(undefined8 *)(local_a8.Data + (longlong)iVar8 * 4 + 8) = uVar5;
                if (((local_a8.Data <= (FScriptContainerElement *)local_90) &&
                    ((FScriptContainerElement *)local_90 < local_a8.Data + (longlong)local_a0[1] * 4
                    )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FSpirvCode *)(*pcVar4)();
                  return pFVar10;
                }
                if (local_a0[0] == local_a0[1]) {
                  local_a0[0] = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&local_a8,local_a0 + 1);
                }
                iVar8 = local_a0[0] + 1;
                *(undefined4 *)(local_a8.Data + (longlong)local_a0[0] * 4) = local_90[0];
                local_a0[0] = iVar8;
                if (((local_a8.Data <= (FScriptContainerElement *)&local_98) &&
                    ((FScriptContainerElement *)&local_98 <
                     local_a8.Data + (longlong)local_a0[1] * 4)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FSpirvCode *)(*pcVar4)();
                  return pFVar10;
                }
                iVar8 = local_a0[0];
                if (local_a0[0] == local_a0[1]) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_a8,local_a0 + 1);
                }
                local_a0[0] = iVar8 + 1;
                *(uint *)(local_a8.Data + (longlong)iVar8 * 4) = local_98;
                goto LAB_145bb22b4;
              }
              FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
            } while (FVar11 != FVar12);
          }
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar17,&local_a8,local_a0,local_a0 + 1);
        if (uVar9 >> 0x10 != 0) {
          memcpy(local_a8.Data + (longlong)iVar8 * 4,_Src,(ulonglong)uVar17 << 2);
        }
LAB_145bb22b4:
        uVar15 = uVar15 + uVar17;
        __return_storage_ptr__ = local_78;
      } while (uVar15 < uVar14);
    }
    iVar8 = local_a0[0];
    (__return_storage_ptr__->UncompressedCode).AllocatorInstance.Data = local_a8.Data;
    (__return_storage_ptr__->CodeView).DataPtr = (uint *)0x0;
    (__return_storage_ptr__->CodeView).ArrayNum = 0;
    (__return_storage_ptr__->UncompressedCode).ArrayMax = local_a0[1];
    (__return_storage_ptr__->UncompressedCode).ArrayNum = local_a0[0];
    local_78 = (FSpirvCode *)(__return_storage_ptr__->UncompressedCode).AllocatorInstance.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSpirvCode *)(*pcVar4)();
      return pFVar10;
    }
    iStack_70 = iVar8;
    (__return_storage_ptr__->CodeView).DataPtr = (uint *)local_78;
    *(ulonglong *)&(__return_storage_ptr__->CodeView).ArrayNum = CONCAT44(uStack_6c,iVar8);
    if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return __return_storage_ptr__;
}

// PurgeShaderModules @ 145bb39b0

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

void __thiscall FVulkanShader::PurgeShaderModules(FVulkanShader *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<unsigned_int,TRefCountPtr<FVulkanShaderModule>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>_>
  *this_00;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  this_00 = &this->ShaderModules;
  bVar3 = 1 < *(int *)&(this->ShaderModules).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ShaderModules).field_0x8);
  puVar1 = &(this->ShaderModules).field_0xc;
  *(undefined4 *)&(this->ShaderModules).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ShaderModules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShaderModules).field_0x34 = 0;
  iVar2 = *(int *)&(this->ShaderModules).field_0x2c;
  *(undefined4 *)&(this->ShaderModules).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ShaderModules).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderModules).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ShaderModules).field_0x48 = 1;
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bb3a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&VulkanShaderModulesMapCS);
  return;
}

