// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// ResourceUploadTo<FRWBuffer> @ 145e7e840

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FScatterUploadBuffer::ResourceUploadTo<FRWBuffer>
          (FScatterUploadBuffer *this,FRHICommandList *param_1,FRWBuffer *param_2,bool param_3)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FByteAddressBuffer *pFVar2;
  int iVar3;
  FRHIBuffer *pFVar4;
  FRHIShaderResourceView *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  TIntVector3<int> *pTVar9;
  FGlobalShaderMap *this_00;
  FRHIComputeShader *pFVar10;
  EBufferUsageFlags EVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_228 [16];
  undefined8 local_218;
  EBufferUsageFlags local_208;
  FRHIGPUMask FStack_204;
  FNameEntryId FStack_200;
  uint uStack_1fc;
  FName local_1f8;
  undefined ***pppuStack_1f0;
  ERHIAccess local_1e8;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  EBufferUsageFlags EStack_1c8;
  int iStack_1c4;
  wchar_t *local_1c0;
  undefined ***pppuStack_1b8;
  ERHIAccess local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [24];
  int local_180;
  TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> local_178;
  undefined **local_168;
  uint *local_160;
  EBufferUsageFlags local_158;
  undefined **local_150;
  uchar *local_148;
  uint local_140;
  FInitializer local_138;
  FInitializer local_128;
  FParameters local_118;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FName local_a8;
  undefined ***pppuStack_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  bool bStack_84;
  bool bStack_83;
  undefined2 uStack_82;
  undefined8 local_80;
  undefined8 uStack_78;
  wchar_t *local_70;
  undefined ***pppuStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TIntVector3<int> local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWBuffer>(FRHICommandList&___ptr64,FRWBuffer_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1580,"FScatterUploadBuffer::ResourceUploadTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x62c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWBuffer>(FRHICommandList&___ptr64,FRWBuffer_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1580);
  }
  if (this->bUploadViaCreate == false) {
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->ScatterBuffer).Buffer.Reference);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->UploadBuffer).Buffer.Reference);
    this->ScatterData = (uint *)0x0;
    this->UploadData = (uchar *)0x0;
    goto LAB_145e7ec1b;
  }
  (this->ScatterBuffer).NumBytes = 0;
  pFVar4 = (this->ScatterBuffer).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->ScatterBuffer).SRV.Reference;
  pTVar1 = &(this->ScatterBuffer).SRV;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar2 = &this->UploadBuffer;
  (this->UploadBuffer).NumBytes = 0;
  pFVar4 = (pFVar2->Buffer).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (pFVar2->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->UploadBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    (this->UploadBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  local_208 = this->ScatterDataSize;
  (this->UploadBuffer).NumBytes = this->UploadDataSize;
  bVar14 = this->bFloat4Buffer != false;
  (this->ScatterBuffer).NumBytes = local_208;
  local_168 = &___7FResourceArrayUploadArrayView__6B_;
  local_res8 = 4;
  if (bVar14) {
    local_res8 = 0x10;
  }
  local_160 = this->ScatterData;
  EVar11 = ByteAddressBuffer;
  if (bVar14) {
    EVar11 = None;
  }
  EVar11 = EVar11 | (StructuredBuffer|ShaderResource|Volatile);
  uStack_1fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  FStack_204.GPUMask = 4;
  local_1f8 = (FName)0x1511715a8;
  uStack_1e0._0_4_ = 0;
  uStack_1e0._4_4_ = 0;
  local_1d8._0_4_ = 0;
  local_1d8._4_1_ = false;
  local_1d8._5_1_ = false;
  local_1d8._6_2_ = 0;
  FStack_200.Value = EVar11;
  local_158 = local_208;
  local_1e8 = RHIGetDefaultResourceState(EVar11,false);
  local_b8._4_4_ = FStack_204.GPUMask;
  local_b8._0_4_ = local_208;
  uStack_b0 = CONCAT44(uStack_1fc,FStack_200.Value);
  pppuStack_1f0 = &local_168;
  uStack_1e4 = 2;
  local_98 = CONCAT44(2,local_1e8);
  local_a8 = local_1f8;
  local_88 = (uint)local_1d8;
  bStack_84 = local_1d8._4_1_;
  bStack_83 = local_1d8._5_1_;
  uStack_82 = local_1d8._6_2_;
  uStack_90 = (uint)uStack_1e0;
  uStack_8c = uStack_1e0._4_4_;
  pppuStack_a0 = pppuStack_1f0;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_228);
  local_168 = &___7FResourceArrayUploadInterface__6B_;
  if (this == (FScatterUploadBuffer *)local_228) {
LAB_145e7ea48:
    if ((FRHIBuffer *)local_228._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_228._0_8_);
    }
  }
  else {
    pFVar4 = (this->ScatterBuffer).Buffer.Reference;
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)local_228._0_8_;
    local_228._0_8_ = (FRHIBuffer *)0x0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
      goto LAB_145e7ea48;
    }
  }
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
            (&local_138,(this->ScatterBuffer).Buffer.Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_198,
                     (FInitializer *)(this->ScatterBuffer).Buffer.Reference);
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar5 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_198._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198._0_8_);
  }
  local_1d0 = this->UploadDataSize;
  local_150 = &___7FResourceArrayUploadArrayView__6B_;
  local_148 = this->UploadData;
  uStack_1cc = local_res8;
  iStack_1c4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c0 = L"ScatterUploadBuffer";
  uStack_1a8 = 0;
  local_1a0 = 0;
  EStack_1c8 = EVar11;
  local_140 = local_1d0;
  local_1b0 = RHIGetDefaultResourceState(EVar11,false);
  local_80 = CONCAT44(uStack_1cc,local_1d0);
  uStack_78 = CONCAT44(iStack_1c4,EStack_1c8);
  pppuStack_1b8 = &local_150;
  uStack_1ac = 2;
  local_60 = CONCAT44(2,local_1b0);
  local_70 = local_1c0;
  local_50 = local_1a0;
  uStack_58 = uStack_1a8;
  pppuStack_68 = pppuStack_1b8;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_228 + 8));
  local_150 = &___7FResourceArrayUploadInterface__6B_;
  if (pFVar2 == (FByteAddressBuffer *)(local_228 + 8)) {
LAB_145e7eb83:
    if ((FRHIBuffer *)local_228._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_228._8_8_);
    }
  }
  else {
    pFVar4 = (pFVar2->Buffer).Reference;
    (pFVar2->Buffer).Reference = (FRHIBuffer *)local_228._8_8_;
    local_228._8_8_ = (FRHIBuffer *)0x0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
      goto LAB_145e7eb83;
    }
  }
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_128,(pFVar2->Buffer).Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res8,
                     (FInitializer *)(pFVar2->Buffer).Reference);
  pTVar1 = &(this->UploadBuffer).SRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar5 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)CONCAT44(uStackX_c,local_res8) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_c,local_res8));
  }
LAB_145e7ec1b:
  if (this->NumScatters != 0) {
    uVar12 = 4;
    if ((this->NumBytesPerElement & 0xf) == 0) {
      uVar12 = 0x10;
    }
    uVar6 = (ulonglong)this->NumBytesPerElement / (ulonglong)uVar12;
    local_218 = (wchar_t *)(uVar6 << 0x20 | (ulonglong)uVar12);
    pTVar9 = FComputeShaderUtils::GetGroupCountWrapped
                       (&local_48,(int)uVar6 * this->NumScatters,0x40);
    local_198._8_8_ = *(undefined8 *)&pTVar9->field0_0x0;
    iVar3 = (pTVar9->field0_0x0)._s_0.Z;
    local_118.Common.Size = local_218._4_4_;
    local_118.NumScatters = this->NumScatters;
    local_118.Common.DstStructuredBuffer4x = (FRHIUnorderedAccessView *)0x0;
    local_118.Common.DstByteAddressBuffer = (FRHIUnorderedAccessView *)0x0;
    local_118.UploadByteAddressBuffer = (FRHIShaderResourceView *)0x0;
    local_118.ScatterByteAddressBuffer = (FRHIShaderResourceView *)0x0;
    local_118.Common.SrcOffset = 0;
    local_118.Common.DstOffset = 0;
    if ((this->bFloat4Buffer == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("bFloat4Buffer || ResourceTypeTraits<ResourceType>::Type == EResourceType::BYTEBUFFER"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                            ,0x65b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_118.UploadStructuredBuffer4x = (this->UploadBuffer).SRV.Reference;
    local_118.ScatterStructuredBuffer = (this->ScatterBuffer).SRV.Reference;
    local_118.Common.DstBuffer = (param_2->UAV).Reference;
    local_218 = (wchar_t *)&DAT_200000000;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    FGlobalShaderMap::GetShader<FScatterCopyCS>
              (this_00,&local_178,
               (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)&local_218);
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    local_198._16_8_ = local_198._8_8_;
    local_180 = iVar3;
    FComputeShaderUtils::Dispatch<FScatterCopyCS>
              ((FRHIComputeCommandList *)param_1,&local_178,&local_118,
               (TIntVector3<int> *)(local_198 + 0x10));
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    pFVar10 = TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(&local_178);
    UnsetShaderSRVs<FRHICommandList,FScatterCopyCS>(param_1,&local_178,pFVar10);
    if (param_3) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,DispatchToRHIThread,None);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResourceUploadTo<FRWBufferStructured> @ 145e7ede0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FScatterUploadBuffer::ResourceUploadTo<FRWBufferStructured>
          (FScatterUploadBuffer *this,FRHICommandList *param_1,FRWBufferStructured *param_2,
          bool param_3)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FByteAddressBuffer *pFVar2;
  int iVar3;
  FRHIBuffer *pFVar4;
  FRHIShaderResourceView *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  TIntVector3<int> *pTVar9;
  FGlobalShaderMap *this_00;
  FRHIComputeShader *pFVar10;
  EBufferUsageFlags EVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_228 [16];
  undefined8 local_218;
  EBufferUsageFlags local_208;
  FRHIGPUMask FStack_204;
  FNameEntryId FStack_200;
  uint uStack_1fc;
  FName local_1f8;
  undefined ***pppuStack_1f0;
  ERHIAccess local_1e8;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  EBufferUsageFlags EStack_1c8;
  int iStack_1c4;
  wchar_t *local_1c0;
  undefined ***pppuStack_1b8;
  ERHIAccess local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [24];
  int local_180;
  TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> local_178;
  undefined **local_168;
  uint *local_160;
  EBufferUsageFlags local_158;
  undefined **local_150;
  uchar *local_148;
  uint local_140;
  FInitializer local_138;
  FInitializer local_128;
  FParameters local_118;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FName local_a8;
  undefined ***pppuStack_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  bool bStack_84;
  bool bStack_83;
  undefined2 uStack_82;
  undefined8 local_80;
  undefined8 uStack_78;
  wchar_t *local_70;
  undefined ***pppuStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TIntVector3<int> local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWBufferStructured>(FRHICommandList&___ptr64,FRWBufferStructured_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1580,"FScatterUploadBuffer::ResourceUploadTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x62c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWBufferStructured>(FRHICommandList&___ptr64,FRWBufferStructured_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1580);
  }
  if (this->bUploadViaCreate == false) {
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->ScatterBuffer).Buffer.Reference);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->UploadBuffer).Buffer.Reference);
    this->ScatterData = (uint *)0x0;
    this->UploadData = (uchar *)0x0;
    goto LAB_145e7f1bb;
  }
  (this->ScatterBuffer).NumBytes = 0;
  pFVar4 = (this->ScatterBuffer).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->ScatterBuffer).SRV.Reference;
  pTVar1 = &(this->ScatterBuffer).SRV;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar2 = &this->UploadBuffer;
  (this->UploadBuffer).NumBytes = 0;
  pFVar4 = (pFVar2->Buffer).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (pFVar2->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->UploadBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    (this->UploadBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  local_208 = this->ScatterDataSize;
  (this->UploadBuffer).NumBytes = this->UploadDataSize;
  bVar14 = this->bFloat4Buffer != false;
  (this->ScatterBuffer).NumBytes = local_208;
  local_168 = &___7FResourceArrayUploadArrayView__6B_;
  local_res8 = 4;
  if (bVar14) {
    local_res8 = 0x10;
  }
  local_160 = this->ScatterData;
  EVar11 = ByteAddressBuffer;
  if (bVar14) {
    EVar11 = None;
  }
  EVar11 = EVar11 | (StructuredBuffer|ShaderResource|Volatile);
  uStack_1fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  FStack_204.GPUMask = 4;
  local_1f8 = (FName)0x1511715a8;
  uStack_1e0._0_4_ = 0;
  uStack_1e0._4_4_ = 0;
  local_1d8._0_4_ = 0;
  local_1d8._4_1_ = false;
  local_1d8._5_1_ = false;
  local_1d8._6_2_ = 0;
  FStack_200.Value = EVar11;
  local_158 = local_208;
  local_1e8 = RHIGetDefaultResourceState(EVar11,false);
  local_b8._4_4_ = FStack_204.GPUMask;
  local_b8._0_4_ = local_208;
  uStack_b0 = CONCAT44(uStack_1fc,FStack_200.Value);
  pppuStack_1f0 = &local_168;
  uStack_1e4 = 2;
  local_98 = CONCAT44(2,local_1e8);
  local_a8 = local_1f8;
  local_88 = (uint)local_1d8;
  bStack_84 = local_1d8._4_1_;
  bStack_83 = local_1d8._5_1_;
  uStack_82 = local_1d8._6_2_;
  uStack_90 = (uint)uStack_1e0;
  uStack_8c = uStack_1e0._4_4_;
  pppuStack_a0 = pppuStack_1f0;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_228);
  local_168 = &___7FResourceArrayUploadInterface__6B_;
  if (this == (FScatterUploadBuffer *)local_228) {
LAB_145e7efe8:
    if ((FRHIBuffer *)local_228._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_228._0_8_);
    }
  }
  else {
    pFVar4 = (this->ScatterBuffer).Buffer.Reference;
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)local_228._0_8_;
    local_228._0_8_ = (FRHIBuffer *)0x0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
      goto LAB_145e7efe8;
    }
  }
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
            (&local_138,(this->ScatterBuffer).Buffer.Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_198,
                     (FInitializer *)(this->ScatterBuffer).Buffer.Reference);
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar5 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_198._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_198._0_8_);
  }
  local_1d0 = this->UploadDataSize;
  local_150 = &___7FResourceArrayUploadArrayView__6B_;
  local_148 = this->UploadData;
  uStack_1cc = local_res8;
  iStack_1c4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c0 = L"ScatterUploadBuffer";
  uStack_1a8 = 0;
  local_1a0 = 0;
  EStack_1c8 = EVar11;
  local_140 = local_1d0;
  local_1b0 = RHIGetDefaultResourceState(EVar11,false);
  local_80 = CONCAT44(uStack_1cc,local_1d0);
  uStack_78 = CONCAT44(iStack_1c4,EStack_1c8);
  pppuStack_1b8 = &local_150;
  uStack_1ac = 2;
  local_60 = CONCAT44(2,local_1b0);
  local_70 = local_1c0;
  local_50 = local_1a0;
  uStack_58 = uStack_1a8;
  pppuStack_68 = pppuStack_1b8;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_228 + 8));
  local_150 = &___7FResourceArrayUploadInterface__6B_;
  if (pFVar2 == (FByteAddressBuffer *)(local_228 + 8)) {
LAB_145e7f123:
    if ((FRHIBuffer *)local_228._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_228._8_8_);
    }
  }
  else {
    pFVar4 = (pFVar2->Buffer).Reference;
    (pFVar2->Buffer).Reference = (FRHIBuffer *)local_228._8_8_;
    local_228._8_8_ = (FRHIBuffer *)0x0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
      goto LAB_145e7f123;
    }
  }
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_128,(pFVar2->Buffer).Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res8,
                     (FInitializer *)(pFVar2->Buffer).Reference);
  pTVar1 = &(this->UploadBuffer).SRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar5 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)CONCAT44(uStackX_c,local_res8) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_c,local_res8));
  }
LAB_145e7f1bb:
  if (this->NumScatters != 0) {
    uVar12 = 4;
    if ((this->NumBytesPerElement & 0xf) == 0) {
      uVar12 = 0x10;
    }
    uVar6 = (ulonglong)this->NumBytesPerElement / (ulonglong)uVar12;
    local_218 = (wchar_t *)(uVar6 << 0x20 | (ulonglong)uVar12);
    pTVar9 = FComputeShaderUtils::GetGroupCountWrapped
                       (&local_48,(int)uVar6 * this->NumScatters,0x40);
    local_198._8_8_ = *(undefined8 *)&pTVar9->field0_0x0;
    iVar3 = (pTVar9->field0_0x0)._s_0.Z;
    local_118.Common.Size = local_218._4_4_;
    local_118.NumScatters = this->NumScatters;
    local_118.Common.DstBuffer = (FRHIUnorderedAccessView *)0x0;
    local_118.Common.DstByteAddressBuffer = (FRHIUnorderedAccessView *)0x0;
    local_118.UploadByteAddressBuffer = (FRHIShaderResourceView *)0x0;
    local_118.ScatterByteAddressBuffer = (FRHIShaderResourceView *)0x0;
    local_118.Common.SrcOffset = 0;
    local_118.Common.DstOffset = 0;
    if ((this->bFloat4Buffer == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("bFloat4Buffer || ResourceTypeTraits<ResourceType>::Type == EResourceType::BYTEBUFFER"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                            ,0x65b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_118.UploadStructuredBuffer4x = (this->UploadBuffer).SRV.Reference;
    local_118.ScatterStructuredBuffer = (this->ScatterBuffer).SRV.Reference;
    local_118.Common.DstStructuredBuffer4x = (param_2->UAV).Reference;
    local_218 = (wchar_t *)&DAT_200000001;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    FGlobalShaderMap::GetShader<FScatterCopyCS>
              (this_00,&local_178,
               (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)&local_218);
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    local_198._16_8_ = local_198._8_8_;
    local_180 = iVar3;
    FComputeShaderUtils::Dispatch<FScatterCopyCS>
              ((FRHIComputeCommandList *)param_1,&local_178,&local_118,
               (TIntVector3<int> *)(local_198 + 0x10));
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    pFVar10 = TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(&local_178);
    UnsetShaderSRVs<FRHICommandList,FScatterCopyCS>(param_1,&local_178,pFVar10);
    if (param_3) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,DispatchToRHIThread,None);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResourceUploadTo<FRWByteAddressBuffer> @ 145e7f380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FScatterUploadBuffer::ResourceUploadTo<FRWByteAddressBuffer>
          (FScatterUploadBuffer *this,FRHICommandList *param_1,FRWByteAddressBuffer *param_2,
          bool param_3)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FByteAddressBuffer *pFVar2;
  FRHIResource *pFVar3;
  int iVar4;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *pFVar6;
  ulonglong uVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  TIntVector3<int> *pTVar9;
  FGlobalShaderMap *this_00;
  FRHIComputeShader *pFVar10;
  undefined4 uVar11;
  EBufferUsageFlags EVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 local_res8;
  TIntVector3<int>_u_0 local_158;
  TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> local_148;
  uint local_138;
  undefined1 local_130 [16];
  uint local_120;
  uint uStack_11c;
  EBufferUsageFlags EStack_118;
  int iStack_114;
  TRefCountPtr<FRHIShaderResourceView> local_110;
  FName FStack_108;
  FNameEntryId local_100;
  uint uStack_fc;
  uchar *puStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FRHIShaderResourceView *local_d8;
  FName FStack_d0;
  undefined8 local_c8;
  uchar *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  FParameters local_a8;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWByteAddressBuffer>(FRHICommandList&___ptr64,FRWByteAddressBuffer_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1580,"FScatterUploadBuffer::ResourceUploadTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x62c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FScatterUploadBuffer::ResourceUploadTo<FRWByteAddressBuffer>(FRHICommandList&___ptr64,FRWByteAddressBuffer_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1580);
  }
  if (this->bUploadViaCreate == false) {
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->ScatterBuffer).Buffer.Reference);
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->UploadBuffer).Buffer.Reference);
    this->ScatterData = (uint *)0x0;
    this->UploadData = (uchar *)0x0;
    goto LAB_145e7f733;
  }
  (this->ScatterBuffer).NumBytes = 0;
  pFVar5 = (this->ScatterBuffer).Buffer.Reference;
  if (pFVar5 != (FRHIBuffer *)0x0) {
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->ScatterBuffer).SRV.Reference;
  pTVar1 = &(this->ScatterBuffer).SRV;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar2 = &this->UploadBuffer;
  (this->UploadBuffer).NumBytes = 0;
  pFVar5 = (pFVar2->Buffer).Reference;
  if (pFVar5 != (FRHIBuffer *)0x0) {
    (pFVar2->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->UploadBuffer).SRV.Reference;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    (this->UploadBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  local_138 = this->ScatterDataSize;
  uVar11 = 4;
  (this->UploadBuffer).NumBytes = this->UploadDataSize;
  bVar16 = this->bFloat4Buffer != false;
  (this->ScatterBuffer).NumBytes = local_138;
  if (bVar16) {
    uVar11 = 0x10;
  }
  local_148.ShaderContent = (FScatterCopyCS *)&___7FResourceArrayUploadArrayView__6B_;
  local_148.ShaderMap = (FShaderMapBase *)this->ScatterData;
  EVar12 = ByteAddressBuffer;
  if (bVar16) {
    EVar12 = None;
  }
  EVar12 = EVar12 | (StructuredBuffer|ShaderResource|Volatile);
  iStack_114 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_res8 = (FRHIResource *)CONCAT44(local_res8._4_4_,uVar11);
  uStack_11c = 4;
  local_110.Reference = (FRHIShaderResourceView *)0x1511715a8;
  puStack_f8 = (uchar *)0x0;
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0;
  local_120 = local_138;
  EStack_118 = EVar12;
  local_100.Value = RHIGetDefaultResourceState(EVar12,false);
  local_e8._4_4_ = uStack_11c;
  local_e8._0_4_ = local_120;
  uStack_e0._4_1_ = (bool)(undefined1)iStack_114;
  uStack_e0._5_1_ = (bool)iStack_114._1_1_;
  uStack_e0._6_2_ = iStack_114._2_2_;
  uStack_e0._0_4_ = EStack_118;
  FStack_108 = (FName)&local_148;
  uStack_fc = 2;
  local_c8 = CONCAT44(2,local_100.Value);
  local_d8 = local_110.Reference;
  local_b8 = (uint)local_f0;
  uStack_b4 = local_f0._4_4_;
  puStack_c0 = puStack_f8;
  FStack_d0 = FStack_108;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_130);
  if (this == (FScatterUploadBuffer *)local_130) {
LAB_145e7f56b:
    if ((FRHIBuffer *)local_130._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_130._0_8_);
    }
  }
  else {
    pFVar5 = (this->ScatterBuffer).Buffer.Reference;
    (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)local_130._0_8_;
    local_130._0_8_ = (FRHIBuffer *)0x0;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
      goto LAB_145e7f56b;
    }
  }
  local_148.ShaderContent = (FScatterCopyCS *)0x0;
  local_148.ShaderMap = (FShaderMapBase *)0x0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
            ((FInitializer *)&local_148,(this->ScatterBuffer).Buffer.Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_158._s_0,
                     (FInitializer *)(this->ScatterBuffer).Buffer.Reference);
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar6 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  if ((FRHIResource *)local_158._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_158._0_8_);
  }
  local_138 = this->UploadDataSize;
  local_148.ShaderContent = (FScatterCopyCS *)&___7FResourceArrayUploadArrayView__6B_;
  local_148.ShaderMap = (FShaderMapBase *)this->UploadData;
  uStack_11c = (uint)local_res8;
  iStack_114 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_110.Reference = (FRHIShaderResourceView *)0x1511715d8;
  puStack_f8 = (uchar *)0x0;
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0;
  local_120 = local_138;
  EStack_118 = EVar12;
  local_100.Value = RHIGetDefaultResourceState(EVar12,false);
  local_e8._4_4_ = uStack_11c;
  local_e8._0_4_ = local_120;
  uStack_e0._4_1_ = (bool)(undefined1)iStack_114;
  uStack_e0._5_1_ = (bool)iStack_114._1_1_;
  uStack_e0._6_2_ = iStack_114._2_2_;
  uStack_e0._0_4_ = EStack_118;
  FStack_108 = (FName)&local_148;
  uStack_fc = 2;
  local_c8 = CONCAT44(2,local_100.Value);
  local_d8 = local_110.Reference;
  local_b8 = (uint)local_f0;
  uStack_b4 = local_f0._4_4_;
  puStack_c0 = puStack_f8;
  FStack_d0 = FStack_108;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_130 + 8));
  if (pFVar2 == (FByteAddressBuffer *)(local_130 + 8)) {
LAB_145e7f69d:
    if ((FRHIBuffer *)local_130._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_130._8_8_);
    }
  }
  else {
    pFVar5 = (pFVar2->Buffer).Reference;
    (pFVar2->Buffer).Reference = (FRHIBuffer *)local_130._8_8_;
    local_130._8_8_ = (FRHIBuffer *)0x0;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
      goto LAB_145e7f69d;
    }
  }
  local_148.ShaderContent = (FScatterCopyCS *)0x0;
  local_148.ShaderMap = (FShaderMapBase *)0x0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
            ((FInitializer *)&local_148,(pFVar2->Buffer).Reference);
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res8,
                     (FInitializer *)(pFVar2->Buffer).Reference);
  pTVar1 = &(this->UploadBuffer).SRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    pFVar6 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
LAB_145e7f733:
  if (this->NumScatters != 0) {
    uVar13 = this->NumBytesPerElement & 0xf;
    uVar14 = 4;
    if (uVar13 == 0) {
      uVar14 = 0x10;
    }
    uVar7 = (ulonglong)this->NumBytesPerElement / (ulonglong)uVar14;
    local_res8 = (FRHIResource *)(uVar7 << 0x20 | (ulonglong)uVar14);
    pTVar9 = FComputeShaderUtils::GetGroupCountWrapped
                       ((TIntVector3<int> *)&local_158._s_0,(int)uVar7 * this->NumScatters,0x40);
    pFVar3 = *(FRHIResource **)&pTVar9->field0_0x0;
    iVar4 = (pTVar9->field0_0x0)._s_0.Z;
    local_a8.Common.Size = local_res8._4_4_;
    local_a8.NumScatters = this->NumScatters;
    local_a8.UploadByteAddressBuffer = (this->UploadBuffer).SRV.Reference;
    local_a8.ScatterByteAddressBuffer = (this->ScatterBuffer).SRV.Reference;
    local_a8.Common.DstByteAddressBuffer = (param_2->UAV).Reference;
    local_a8.Common.DstBuffer = (FRHIUnorderedAccessView *)0x0;
    local_a8.Common.DstStructuredBuffer4x = (FRHIUnorderedAccessView *)0x0;
    local_a8.UploadStructuredBuffer4x = (FRHIShaderResourceView *)0x0;
    local_a8.ScatterStructuredBuffer = (FRHIShaderResourceView *)0x0;
    local_a8.Common.SrcOffset = 0;
    local_a8.Common.DstOffset = 0;
    local_158._s_0.Y = 2;
    local_158._s_0.X = 3 - (uint)(uVar13 != 0);
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    FGlobalShaderMap::GetShader<FScatterCopyCS>
              (this_00,&local_148,
               (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)&local_158._s_0);
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    local_158._0_8_ = pFVar3;
    local_158._s_0.Z = iVar4;
    FComputeShaderUtils::Dispatch<FScatterCopyCS>
              ((FRHIComputeCommandList *)param_1,&local_148,&local_a8,
               (TIntVector3<int> *)&local_158._s_0);
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
    pFVar10 = TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable>::GetComputeShader(&local_148);
    UnsetShaderSRVs<FRHICommandList,FScatterCopyCS>(param_1,&local_148,pFVar10);
    if (param_3) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,DispatchToRHIThread,None);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Init @ 145ea3060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FScatterUploadBuffer::Init
          (FScatterUploadBuffer *this,uint param_1,uint param_2,bool param_3,wchar_t *param_4)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FByteAddressBuffer *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint *puVar11;
  uchar *puVar12;
  TRefCountPtr<FRHIBuffer> TVar13;
  TRefCountPtr<FRHIShaderResourceView> TVar14;
  FNameEntryId FVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FRHIResource *local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  FRHIResource *local_f8;
  undefined1 local_f0 [24];
  FResourceArrayUploadInterface *pFStack_d8;
  undefined1 local_d0 [16];
  FName local_c0;
  ulonglong uStack_b8;
  wchar_t *local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  wchar_t *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  bVar10 = IsInRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x1594,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this->bFloat4Buffer = param_3;
  this->MaxScatters = param_1;
  iVar16 = (param_3 ^ 1) << 4;
  uVar4 = param_1 * 4;
  this->NumScatters = 0;
  this->NumBytesPerElement = param_2;
  local_res20 = 4;
  if (param_3) {
    local_res20 = 0x10;
  }
  uVar17 = 1;
  if (uVar4 != 0) {
    uVar17 = uVar4;
  }
  uVar18 = param_1 * param_2;
  uVar3 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  FVar15.Value = 1 << ((byte)lVar8 & 0x1f);
  local_res10 = (undefined4)lVar8;
  uVar17 = 1;
  if (uVar18 != 0) {
    uVar17 = uVar18;
  }
  uVar3 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar17 = 1 << ((byte)lVar8 & 0x1f);
  local_res18 = (undefined4)lVar8;
  if (this->bUploadViaCreate == false) {
    if ((this->ScatterData != (uint *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScatterData == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                            ,0x5f8,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->UploadData != (uchar *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UploadData == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                            ,0x5f9,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = (this->ScatterBuffer).NumBytes;
    if ((uVar5 <= uVar4 && uVar4 - uVar5 != 0) || (FVar15.Value < uVar5 >> 1)) {
      (this->ScatterBuffer).NumBytes = 0;
      pFVar6 = (this->ScatterBuffer).Buffer.Reference;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
      pFVar7 = (this->ScatterBuffer).SRV.Reference;
      pTVar1 = &(this->ScatterBuffer).SRV;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        pTVar1->Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
      (this->ScatterBuffer).NumBytes = FVar15.Value;
      local_c0.Number = 4;
      local_c0.ComparisonIndex.Value = FVar15.Value;
      uStack_b8 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,iVar16) | 0x10104
      ;
      local_b0 = param_4;
      lStack_a8 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      local_90 = 0;
      TVar13 = FRHICommandListBase::CreateBuffer
                         ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                          (FRHIBufferCreateDesc *)&local_res8);
      if ((FRHIBuffer *)this != TVar13.Reference) {
        pFVar6 = (this->ScatterBuffer).Buffer.Reference;
        (this->ScatterBuffer).Buffer.Reference = (FRHIBuffer *)(TVar13.Reference)->_padding_;
        (TVar13.Reference)->_padding_ = 0;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
      local_f0._16_8_ = (wchar_t *)0x0;
      pFStack_d8 = (FResourceArrayUploadInterface *)0x0;
      FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
                ((FInitializer *)(local_f0 + 0x10),(this->ScatterBuffer).Buffer.Reference);
      TVar14 = FRHICommandListBase::CreateShaderResourceView
                         ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                          (FRHIBuffer *)&local_f8,
                          (FInitializer *)(this->ScatterBuffer).Buffer.Reference);
      if ((FRHIShaderResourceView *)pTVar1 != TVar14.Reference) {
        pFVar7 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar1->Reference = *TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if (pFVar7 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
        }
      }
      if (local_f8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_f8);
      }
    }
    uVar5 = (this->UploadBuffer).NumBytes;
    if ((uVar5 < uVar18) || (uVar17 < uVar5 >> 1)) {
      pFVar2 = &this->UploadBuffer;
      (this->UploadBuffer).NumBytes = 0;
      pFVar6 = (pFVar2->Buffer).Reference;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        (pFVar2->Buffer).Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
      pFVar7 = (this->UploadBuffer).SRV.Reference;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        (this->UploadBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
      (this->UploadBuffer).NumBytes = uVar17;
      local_88 = CONCAT44(local_res20,uVar17);
      uStack_80 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,iVar16) | 0x10104
      ;
      local_78 = param_4;
      lStack_70 = 0;
      local_58 = 0;
      local_68 = 0;
      lStack_60 = 0;
      TVar13 = FRHICommandListBase::CreateBuffer
                         ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                          (FRHIBufferCreateDesc *)local_f0);
      if ((FRHIBuffer *)pFVar2 != TVar13.Reference) {
        pFVar6 = (pFVar2->Buffer).Reference;
        (pFVar2->Buffer).Reference = (FRHIBuffer *)(TVar13.Reference)->_padding_;
        (TVar13.Reference)->_padding_ = 0;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      if ((FRHIResource *)local_f0._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_f0._0_8_);
      }
      local_d0._0_8_ = 0;
      local_d0._8_4_ = 0;
      local_d0._12_4_ = 0;
      FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer
                ((FInitializer *)local_d0,(pFVar2->Buffer).Reference);
      TVar14 = FRHICommandListBase::CreateShaderResourceView
                         ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                          (FRHIBuffer *)(local_f0 + 8),(FInitializer *)(pFVar2->Buffer).Reference);
      pTVar1 = &(this->UploadBuffer).SRV;
      if ((FRHIShaderResourceView *)pTVar1 != TVar14.Reference) {
        pFVar7 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar1->Reference = *TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if (pFVar7 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
        }
      }
      if ((FRHIResource *)local_f0._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_f0._8_8_);
      }
    }
    puVar11 = FRHICommandListBase::LockBuffer
                        ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                         (this->ScatterBuffer).Buffer.Reference,0,uVar4,RLM_WriteOnly);
    pFVar6 = (this->UploadBuffer).Buffer.Reference;
    this->ScatterData = puVar11;
    puVar12 = FRHICommandListBase::LockBuffer
                        ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar6,0,
                         uVar18,RLM_WriteOnly);
  }
  else {
    if ((this->ScatterDataSize < uVar4) || (FVar15.Value < this->ScatterDataSize >> 1)) {
      FMemory::Free(this->ScatterData);
      puVar11 = FMemory::Malloc((ulonglong)FVar15.Value,0);
      this->ScatterData = puVar11;
      this->ScatterDataSize = FVar15.Value;
    }
    if ((uVar18 <= this->UploadDataSize) && (this->UploadDataSize >> 1 <= uVar17)) {
      return;
    }
    FMemory::Free(this->UploadData);
    puVar12 = FMemory::Malloc((ulonglong)uVar17,0);
    this->UploadDataSize = uVar17;
  }
  this->UploadData = puVar12;
  return;
}

// Init @ 145ea34f0

void __thiscall
FScatterUploadBuffer::Init
          (FScatterUploadBuffer *this,TArrayView<unsigned_int_const_,int> *param_1,uint param_2,
          bool param_3,wchar_t *param_4)

{
  uint uVar1;
  
  uVar1 = param_1->ArrayNum;
  Init(this,uVar1,param_2,param_3,param_4);
  memcpy(this->ScatterData,param_1->DataPtr,(longlong)(int)uVar1 << 2);
  this->NumScatters = uVar1;
  return;
}

// InitPreSized @ 145ea3590

void __thiscall
FScatterUploadBuffer::InitPreSized
          (FScatterUploadBuffer *this,uint param_1,uint param_2,bool param_3,wchar_t *param_4)

{
  Init(this,param_1,param_2,param_3,param_4);
  this->NumScatters = param_1;
  return;
}

