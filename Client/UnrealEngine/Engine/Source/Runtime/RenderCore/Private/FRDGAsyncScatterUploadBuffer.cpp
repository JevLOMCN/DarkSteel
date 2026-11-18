// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// operator() @ 145e87890

TIntVector3<int> * __thiscall
`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TIntVector3<int> *pTVar6;
  TIntVector3<int> local_18;
  
  lVar3 = *(longlong *)((longlong)this + 0x10);
  if ((*(char *)(lVar3 + 0x40) == '\0') && (*(char *)(lVar3 + 0x41) != '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bNumScattersPreSized || State == EState::Unlocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UnifiedBuffer.h"
                       ,0x14b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  iVar1 = *(int *)(lVar3 + 0x10);
  pTVar6 = FComputeShaderUtils::GetGroupCountWrapped
                     (&local_18,iVar1 * *(int *)((longlong)this + 0xc),0x40);
  iVar2 = (pTVar6->field0_0x0)._s_0.Z;
  lVar3 = *(longlong *)this;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar2;
  *(int *)(lVar3 + 0x40) = iVar1;
  return __return_storage_ptr__;
}

// Begin @ 145e8e310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGScatterUploader * __thiscall
FRDGAsyncScatterUploadBuffer::Begin
          (FRDGAsyncScatterUploadBuffer *this,FRDGBuilder *param_1,FRDGViewableResource *param_2,
          uint param_3,uint param_4,wchar_t *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  FRDGPooledBuffer *pFVar5;
  FRHIBuffer *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  EResourceType EVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FRDGScatterUploader *pFVar17;
  undefined8 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined8 *local_a8;
  uint local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  FRDGBufferDesc local_78;
  FRDGBufferDesc local_60;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId923,"FRDGAsyncScatterUploadBuffer::Upload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x39b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId923);
  }
  EVar11 = GetResourceType(param_2);
  uVar4 = param_3 * 4;
  uVar9 = 0;
  if (EVar11 == BYTEBUFFER) {
    uVar9 = 0x10;
  }
  uVar15 = 0x10;
  if (EVar11 == BYTEBUFFER) {
    uVar15 = 4;
  }
  uVar12 = 1;
  if (uVar4 != 0) {
    uVar12 = uVar4;
  }
  uVar3 = (ulonglong)(uVar12 - 1) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar13 = 1 << ((byte)lVar7 & 0x1f);
  local_80 = (undefined4)lVar7;
  uVar12 = 0x20000000;
  if (uVar13 < 0x20000000) {
    uVar12 = uVar13;
  }
  local_a0 = uVar15;
  if ((uVar12 < uVar4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScatterBufferSize >= ScatterBytes",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                          ,0x3a4,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar17 = (FRDGScatterUploader *)(*pcVar8)();
    return pFVar17;
  }
  uVar19 = param_3 * param_4;
  uVar13 = 1;
  if (uVar19 != 0) {
    uVar13 = uVar19;
  }
  uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar14 = 1 << ((byte)lVar7 & 0x1f);
  local_7c = (undefined4)lVar7;
  uVar13 = uVar15 << 0x1b;
  if (uVar14 < uVar15 << 0x1b) {
    uVar13 = uVar14;
  }
  if ((uVar13 < uVar19) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("UploadBufferSize >= UploadBytes",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                          ,0x3a9,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar17 = (FRDGScatterUploader *)(*pcVar8)();
    return pFVar17;
  }
  bVar10 = IsRegistered(param_1,&this->ScatterBuffer);
  if (bVar10) {
    pFVar5 = (this->ScatterBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->ScatterBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)();
      }
    }
    pFVar5 = (this->UploadBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->UploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)();
      }
    }
  }
  pFVar5 = (this->ScatterBuffer).Reference;
  if (((pFVar5 == (FRDGPooledBuffer *)0x0) ||
      (uVar15 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement, uVar15 < uVar4)) ||
     (uVar12 < uVar15 >> 1)) {
    local_88 = 0;
    uStack_94 = uVar12 >> 2;
    uStack_90 = 0x10100;
    local_98 = 4;
    local_78.NumElements = uStack_94;
    local_78.BytesPerElement = 4;
    local_78.Metadata = (FShaderParametersMetadata *)0x0;
    local_78._8_8_ = CONCAT44(uStack_8c,uVar9) | 0x10100;
    AllocatePooledBuffer(&local_78,&this->ScatterBuffer,param_5,None);
  }
  pFVar5 = (this->UploadBuffer).Reference;
  if (((pFVar5 == (FRDGPooledBuffer *)0x0) ||
      (uVar15 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement, uVar15 < uVar19)) ||
     (uVar13 < uVar15 >> 1)) {
    local_98 = local_a0;
    uStack_94 = uVar13 / local_a0;
    uStack_90 = 0x10100;
    local_60.NumElements = uStack_94;
    local_60.BytesPerElement = local_a0;
    local_88 = 0;
    local_60._8_8_ = CONCAT44(uStack_8c,uVar9) | 0x10100;
    local_60.Metadata = (FShaderParametersMetadata *)0x0;
    AllocatePooledBuffer(&local_60,&this->UploadBuffer,param_5,None);
  }
  puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar18 == (undefined8 *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar17 = (FRDGScatterUploader *)(*pcVar8)();
      return pFVar17;
    }
  }
  else {
    *puVar18 = &___7__TObject_VFRDGScatterUploader___FRDGAllocator__6B_;
    puVar18[4] = 0;
    *(undefined4 *)((longlong)puVar18 + 0x4a) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x4e) = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    puVar18[5] = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    *(undefined2 *)(puVar18 + 9) = 0;
  }
  local_a8 = puVar18;
  if ((((undefined8 **)param_1->_padding_ <= &local_a8) &&
      (&local_a8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar17 = (FRDGScatterUploader *)(*pcVar8)();
    return pFVar17;
  }
  iVar16 = (int)param_1->_padding_;
  piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
  }
  *(int *)&param_1->_padding_ = iVar16 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar16 * 8) = local_a8;
  *(uint *)((longlong)puVar18 + 0x1c) = param_3;
  *(uint *)(puVar18 + 4) = param_4;
  puVar18[5] = param_2;
  puVar18[6] = (((this->ScatterBuffer).Reference)->Buffer).Reference;
  pFVar6 = (((this->UploadBuffer).Reference)->Buffer).Reference;
  *(uint *)(puVar18 + 8) = uVar4;
  *(uint *)((longlong)puVar18 + 0x44) = uVar19;
  puVar18[7] = pFVar6;
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FRDGScatterUploader *)(puVar18 + 1);
}

// BeginPreSized @ 145e8ed70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGScatterUploader * __thiscall
FRDGAsyncScatterUploadBuffer::BeginPreSized
          (FRDGAsyncScatterUploadBuffer *this,FRDGBuilder *param_1,FRDGViewableResource *param_2,
          uint param_3,uint param_4,wchar_t *param_5)

{
  FRDGScatterUploader *pFVar1;
  
  pFVar1 = Begin(this,param_1,param_2,param_3,param_4,param_5);
  *(uint *)&pFVar1->_padding_ = param_3;
  pFVar1->bNumScattersPreSized = true;
  return pFVar1;
}

// End @ 145e96230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FRDGAsyncScatterUploadBuffer::End
          (FRDGAsyncScatterUploadBuffer *this,FRDGBuilder *param_1,FRDGScatterUploader *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FRDGViewableResource *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  FScatterUploadConfig FVar10;
  FRDGScatterCopyCS *pFVar11;
  FShaderMapBase *pFVar12;
  bool bVar13;
  longlong lVar14;
  TIntVector3<int> *pTVar15;
  FRDGBufferSRV *pFVar16;
  FRDGBufferSRV *pFVar17;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar18;
  FName this_01;
  FParameters *pFVar19;
  FRDGEventName *pFVar20;
  FShaderParametersMetadata *pFVar21;
  uint uVar22;
  longlong *plVar23;
  undefined1 auStackY_2a8 [32];
  TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
  local_260;
  FScatterUploadConfig local_250;
  TIntVector3<int>_u_0 local_248;
  FRDGBufferSRVDesc local_238;
  FRDGBufferSRVDesc local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1f8;
  TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> local_1e8;
  undefined1 local_1d8 [8];
  FString local_1d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  initializer_list<FRDGResource_*> local_1a8;
  TIntVector3<int> local_198;
  FRDGEventName local_188;
  FRDGEventName local_170;
  FParameters local_158;
  code *local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  <lambda_1> local_a8;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((param_2 == (FRDGScatterUploader *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Uploader",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                          ,0x3d7,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar13 = FRDGBuilder::IsImmediateMode();
  if (((bVar13) && (param_2->State != (atomic<FRDGScatterUploader::EState>)0x2)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!FRDGBuilder::IsImmediateMode() || Uploader->State == FRDGScatterUploader::EState::Unlocked"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                          ,0x3d8,
                          L"In immediate mode, you must fill the uploader prior to calling End."),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar14 = 0x10;
  if (param_2->bNumScattersPreSized == false) {
    lVar14 = 0x14;
  }
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + lVar14);
  uVar3 = (uint)param_2->_padding_;
  uVar22 = 4;
  if ((uVar3 & 0xf) == 0) {
    uVar22 = 0x10;
  }
  uVar6 = (ulonglong)uVar3 / (ulonglong)uVar22;
  local_250 = (FScatterUploadConfig)(uVar6 << 0x20 | (ulonglong)uVar22);
  pTVar15 = FComputeShaderUtils::GetGroupCountWrapped(&local_198,(int)uVar6 * uVar2,0x40);
  pFVar5 = param_2->DstResource;
  uVar1 = *(undefined8 *)&pTVar15->field0_0x0;
  iVar4 = (pTVar15->field0_0x0)._s_0.Z;
  local_238.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->ScatterBuffer,None);
  local_238._padding_._4_4_ = 0;
  local_238._padding_._0_4_ = 0xffffffff;
  local_238._padding_ = 0;
  local_238._padding_._0_1_ = 0;
  if ((((local_238.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_238._padding_._0_1_ = 0x1c;
  }
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_238);
  local_218.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->UploadBuffer,None);
  local_218._padding_._0_4_ = 0xffffffff;
  local_218._padding_._4_4_ = 0;
  local_218._padding_ = 0;
  local_218._padding_._0_1_ = 0;
  if ((((local_218.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_218._padding_._0_1_ = 0x1c;
  }
  pFVar17 = FRDGBuilder::CreateSRV(param_1,&local_218);
  local_158.UploadByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_158.Common.DstBuffer = (FRDGBufferUAV *)0x0;
  local_158.Common.DstStructuredBuffer8x = (FRDGBufferUAV *)0x0;
  local_158.Common.DstStructuredBuffer4x = (FRDGBufferUAV *)0x0;
  local_158.Common.DstStructuredBuffer2x = (FRDGBufferUAV *)0x0;
  local_158.Common.DstStructuredBuffer1x = (FRDGBufferUAV *)0x0;
  local_158.Common.DstByteAddressBuffer = (FRDGBufferUAV *)0x0;
  local_158.UploadStructuredBuffer8x = (FRDGBufferSRV *)0x0;
  local_158.UploadStructuredBuffer4x = (FRDGBufferSRV *)0x0;
  local_158.UploadStructuredBuffer2x = (FRDGBufferSRV *)0x0;
  local_158.UploadStructuredBuffer1x = (FRDGBufferSRV *)0x0;
  local_158.ScatterByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_158.ScatterStructuredBuffer = (FRDGBufferSRV *)0x0;
  local_260.DimensionValue = 0;
  local_260.Tail.DimensionValue = 0;
  GetScatterCopyParamsAndPermutation
            (param_1,pFVar5,pFVar16,pFVar17,&local_250,uVar2,&local_158,&local_260);
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  iVar8 = local_260.DimensionValue;
  if (((3 < local_260.DimensionValue) || (local_260.DimensionValue < 0)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = local_260.Tail.DimensionValue;
  if (((3 < local_260.Tail.DimensionValue) || ((longlong)local_260._0_8_ < 0)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar18 = (FShaderType *)FRDGScatterCopyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_1f8,pFVar18,iVar8 + iVar9 * 4);
  if (local_1f8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1d8);
    ::FName::ToString((FName *)this_01,&local_1d0);
    FRDGScatterCopyCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FRDGScatterCopyCS::GetStaticType();
  local_1e8.ShaderContent = (FRDGScatterCopyCS *)local_1f8.ShaderContent;
  local_1e8.ShaderMap = local_1f8.ShaderMap;
  pFVar19 = FRDGBuilder::AllocParameters<FRDGScatterCopyCS::FParameters>(param_1,&local_158);
  FVar10 = local_250;
  if (param_2->bNumScattersPreSized == false) {
    local_d8 = (code *)0x0;
    local_b0 = FMemory::Malloc(0x20,8);
    *local_b0 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::`24'::<lambda_1>,0,1>::
                 _vftable_;
    local_b0[1] = (longlong)pFVar19;
    *(FScatterUploadConfig *)(local_b0 + 2) = FVar10;
    local_b0[3] = (longlong)param_2;
    if (local_b0 + 1 != (longlong *)0x0) {
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,UE::Math::TIntVector3<int>_>
                 ::Call;
    }
    pFVar20 = FRDGEventName::FRDGEventName(&local_170,L"ScatterUpload (Resource: %s)");
    pFVar21 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
    pFVar12 = local_1e8.ShaderMap;
    pFVar11 = local_1e8.ShaderContent;
    local_1b8.ShaderContent = (FShader *)local_1e8.ShaderContent;
    local_1b8.ShaderMap = local_1e8.ShaderMap;
    ValidateShaderParameters(&local_1b8,pFVar21,pFVar19);
    local_1a8._First = (FRDGResource **)0x0;
    local_1a8._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl((FShaderParameterBindings *)pFVar11,pFVar21,pFVar19,&local_1a8);
    local_a8.GroupCount.field0_0x0._0_8_ = local_d8;
    local_60 = local_b0;
    local_a8.ComputeShader.ShaderContent = (FSphericalDistortionCS *)pFVar11;
    local_a8.ComputeShader.ShaderMap = pFVar12;
    local_b0 = (longlong *)0x0;
    local_78 = local_c8;
    uStack_70 = uStack_c0;
    local_68 = local_b8;
    local_d8 = (code *)0x0;
    local_a8.ParametersMetadata = pFVar21;
    local_a8.Parameters = (FParameters *)pFVar19;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
              (param_1,pFVar20,pFVar21,pFVar19,Compute,&local_a8);
    if ((code *)local_a8.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      plVar23 = &local_78;
      if (local_60 != (longlong *)0x0) {
        plVar23 = local_60;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (local_170.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_170.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_d8 != (code *)0x0) {
      plVar23 = &local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar23 = local_b0;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  else {
    pFVar20 = FRDGEventName::FRDGEventName(&local_188,L"ScatterUpload (Resource: %s)");
    pFVar21 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
    local_248._0_8_ = uVar1;
    local_248._s_0.Z = iVar4;
    FComputeShaderUtils::AddPass<FRDGScatterCopyCS>
              (param_1,pFVar20,Compute,&local_1e8,pFVar21,pFVar19,
               (TIntVector3<int> *)&local_248._s_0);
    if (local_188.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_188.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNumBytes @ 145e9dfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FRDGAsyncScatterUploadBuffer::GetNumBytes(FRDGAsyncScatterUploadBuffer *this)

{
  FRDGPooledBuffer *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->ScatterBuffer).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->UploadBuffer).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    return (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement + uVar2;
  }
  return uVar2;
}

// Release @ 145eae330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGAsyncScatterUploadBuffer::Release(FRDGAsyncScatterUploadBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->ScatterBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->ScatterBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->UploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->UploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

