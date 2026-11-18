// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FRWBuffersAllocation @ 147c2c790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRWBuffersAllocation * __thiscall
FGPUSkinCache::FRWBuffersAllocation::FRWBuffersAllocation
          (FRWBuffersAllocation *this,FRHICommandList *param_1,
          FRWBuffersAllocationInitializer *param_2,FName *param_3)

{
  uint *puVar1;
  uint *puVar2;
  EGPUSkinCacheBufferBits EVar3;
  uint uVar4;
  uint uVar5;
  FRHIResource *pFVar6;
  undefined8 uVar7;
  FRHIUnorderedAccessView *pFVar8;
  undefined3 uVar9;
  EPixelFormat EVar10;
  undefined3 uVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  TRefCountPtr<FRHIShaderResourceView> TVar13;
  FName *pFVar14;
  longlong lVar15;
  FName local_res8;
  FName local_res20;
  TIntVector4<unsigned_int>_u_0 local_e8;
  FRHIResource *local_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  FNameEntryId local_a8;
  uint uStack_a4;
  FNameEntryId FStack_a0;
  uint uStack_9c;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FName local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  wchar_t *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  FName local_40;
  
  lVar15 = 0;
  this->PositionBuffers[0].Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar14 = &this->PositionBuffers[0].Buffer.ClassName;
  this->PositionBuffers[0].Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  this->PositionBuffers[0].Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  this->PositionBuffers[0].Buffer.NumBytes = 0;
  *(undefined8 *)&this->PositionBuffers[0].Buffer.ClassName.Number = 0;
  (pFVar14->ComparisonIndex).Value = 0;
  this->PositionBuffers[0].Buffer.OwnerName.Number = 0;
  this->PositionBuffers[0].AccessState = None;
  this->PositionBuffers[0].LastTransitionFence = 0;
  this->PositionBuffers[1].Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
  this->PositionBuffers[1].Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  this->PositionBuffers[1].Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  this->PositionBuffers[1].Buffer.NumBytes = 0;
  this->PositionBuffers[1].Buffer.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&this->PositionBuffers[1].Buffer.ClassName.Number = 0;
  this->PositionBuffers[1].Buffer.OwnerName.Number = 0;
  this->PositionBuffers[1].AccessState = None;
  this->PositionBuffers[1].LastTransitionFence = 0;
  (this->Tangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->Tangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Tangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Tangents).Buffer.NumBytes = 0;
  (this->Tangents).Buffer.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangents).Buffer.ClassName.Number = 0;
  (this->Tangents).Buffer.OwnerName.Number = 0;
  (this->Tangents).AccessState = None;
  (this->Tangents).LastTransitionFence = 0;
  (this->IntermediateTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IntermediateTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IntermediateTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IntermediateTangents).Buffer.NumBytes = 0;
  (this->IntermediateTangents).Buffer.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IntermediateTangents).Buffer.ClassName.Number = 0;
  (this->IntermediateTangents).Buffer.OwnerName.Number = 0;
  (this->IntermediateTangents).AccessState = None;
  (this->IntermediateTangents).LastTransitionFence = 0;
  (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IntermediateAccumulatedTangents).Buffer.NumBytes = 0;
  (this->IntermediateAccumulatedTangents).Buffer.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IntermediateAccumulatedTangents).Buffer.ClassName.Number = 0;
  (this->IntermediateAccumulatedTangents).Buffer.OwnerName.Number = 0;
  (this->IntermediateAccumulatedTangents).AccessState = None;
  (this->IntermediateAccumulatedTangents).LastTransitionFence = 0;
  uVar9 = *(undefined3 *)&param_2->field_0x1;
  uVar4 = param_2->NumVertices;
  uVar5 = param_2->IntermediateAccumulatedTangentsSize;
  EVar10 = param_2->TangentFormat;
  uVar11 = *(undefined3 *)&param_2->field_0xd;
  (this->Initializer).BufferBits = param_2->BufferBits;
  *(undefined3 *)&(this->Initializer).field_0x1 = uVar9;
  (this->Initializer).NumVertices = uVar4;
  (this->Initializer).IntermediateAccumulatedTangentsSize = uVar5;
  (this->Initializer).TangentFormat = EVar10;
  *(undefined3 *)&(this->Initializer).field_0xd = uVar11;
  uVar4 = GPixelFormats[param_2->TangentFormat].BlockBytes;
  local_b0 = (ulonglong)(((this->Initializer).BufferBits & PositionPrevious) != None) + 1;
  local_d0._8_8_ =
       *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c;
  do {
    FLazyName::Resolve(&`public:___cdecl_FGPUSkinCache::FRWBuffersAllocation::FRWBuffersAllocation(FRHICommandList&___ptr64,FGPUSkinCache::FRWBuffersAllocationInitializer_const&___ptr64,FName_const&___ptr64)___ptr64'
                        ::__l2::PositionsName);
    *pFVar14 = local_res20;
    local_78 = *param_3;
    pFVar14[1] = local_78;
    uStack_a4 = 0;
    FStack_a0.Value = 0x4109;
    local_a8.Value = (this->Initializer).NumVertices * 0xc;
    pFVar14[-1].Number = local_a8.Value;
    uStack_9c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_98 = L"SkinCachePositions";
    local_70 = (ulonglong)local_a8.Value;
    uStack_68 = CONCAT44(uStack_9c,0x4109);
    uStack_90 = 0;
    local_88 = 0x70;
    local_60 = L"SkinCachePositions";
    uStack_58 = 0;
    local_50 = 0x70;
    local_40 = local_78;
    TVar12 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_d0);
    puVar1 = &pFVar14[-4].Number;
    if ((FRHIBuffer *)puVar1 != TVar12.Reference) {
      pFVar6 = *(FRHIResource **)puVar1;
      *(longlong *)puVar1 = (TVar12.Reference)->_padding_;
      (TVar12.Reference)->_padding_ = 0;
      if (pFVar6 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar6);
      }
    }
    if ((FRHIResource *)local_d0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d0._0_8_);
    }
    uVar7 = *(undefined8 *)puVar1;
    local_e8._8_8_ = 0;
    local_e8._0_8_ = 0x10d01;
    if (*(int *)local_d0._8_8_ <
        `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              ((FMemScope *)(local_d0 + 0x10),
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_d8,param_1,uVar7,&local_e8);
    FMemScope::~FMemScope((FMemScope *)(local_d0 + 0x10));
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    puVar2 = &pFVar14[-3].Number;
    if ((FRHIResource **)puVar2 == &local_d8) {
LAB_147c2ca4e:
      if (local_d8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_d8);
      }
    }
    else {
      pFVar6 = *(FRHIResource **)puVar2;
      *(FRHIResource **)puVar2 = local_d8;
      local_d8 = (FRHIResource *)0x0;
      if (pFVar6 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar6);
        goto LAB_147c2ca4e;
      }
    }
    local_e8._8_8_ = 0;
    local_e8._0_8_ = 0x10d00;
    TVar13 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_d0 + 0x18),
                        *(FInitializer **)puVar1);
    puVar2 = &pFVar14[-2].Number;
    if ((FRHIShaderResourceView *)puVar2 != TVar13.Reference) {
      pFVar6 = *(FRHIResource **)puVar2;
      *(undefined8 *)puVar2 = *(undefined8 *)TVar13.Reference;
      *(undefined8 *)TVar13.Reference = 0;
      if (pFVar6 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar6);
      }
    }
    if ((FRHIResource *)local_d0._24_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d0._24_8_);
    }
    lVar15 = lVar15 + 1;
    *(FName *)(*(longlong *)puVar1 + 0x10) = *param_3;
    pFVar14[2].Number = 0;
    pFVar14 = pFVar14 + 7;
    if (local_b0 <= lVar15) {
      FLazyName::Resolve(&`public:___cdecl_FGPUSkinCache::FRWBuffersAllocation::FRWBuffersAllocation(FRHICommandList&___ptr64,FGPUSkinCache::FRWBuffersAllocationInitializer_const&___ptr64,FName_const&___ptr64)___ptr64'
                          ::__l2::TangentsName);
      uVar5 = (this->Initializer).NumVertices;
      (this->Tangents).Buffer.ClassName = local_res8;
      (this->Tangents).Buffer.OwnerName = *param_3;
      FRWBuffer::Initialize
                (&(this->Tangents).Buffer,(FRHICommandListBase *)param_1,L"SkinCacheTangents",uVar4,
                 uVar5 * 2,(this->Initializer).TangentFormat,UAVCompute,Static,
                 (FResourceArrayUploadInterface *)0x0);
      ((this->Tangents).Buffer.Buffer.Reference)->_padding_ = (longlong)*param_3;
      EVar3 = (this->Initializer).BufferBits;
      (this->Tangents).AccessState = None;
      if ((EVar3 & IntermediateTangents) != None) {
        FLazyName::Resolve(&`public:___cdecl_FGPUSkinCache::FRWBuffersAllocation::FRWBuffersAllocation(FRHICommandList&___ptr64,FGPUSkinCache::FRWBuffersAllocationInitializer_const&___ptr64,FName_const&___ptr64)___ptr64'
                            ::__l2::IntermediateTangentsName);
        uVar5 = (this->Initializer).NumVertices;
        (this->IntermediateTangents).Buffer.ClassName = local_res8;
        (this->IntermediateTangents).Buffer.OwnerName = *param_3;
        FRWBuffer::Initialize
                  (&(this->IntermediateTangents).Buffer,(FRHICommandListBase *)param_1,
                   L"SkinCacheIntermediateTangents",uVar4,uVar5 * 2,
                   (this->Initializer).TangentFormat,UAVCompute,Static,
                   (FResourceArrayUploadInterface *)0x0);
        ((this->IntermediateTangents).Buffer.Buffer.Reference)->_padding_ = (longlong)*param_3;
        (this->IntermediateTangents).AccessState = None;
      }
      if ((this->Initializer).IntermediateAccumulatedTangentsSize != 0) {
        FLazyName::Resolve(&`public:___cdecl_FGPUSkinCache::FRWBuffersAllocation::FRWBuffersAllocation(FRHICommandList&___ptr64,FGPUSkinCache::FRWBuffersAllocationInitializer_const&___ptr64,FName_const&___ptr64)___ptr64'
                            ::__l2::IntermediateAccumulatedTangentsName);
        (this->IntermediateAccumulatedTangents).Buffer.ClassName = local_res8;
        (this->IntermediateAccumulatedTangents).Buffer.OwnerName = *param_3;
        FRWBuffer::Initialize
                  (&(this->IntermediateAccumulatedTangents).Buffer,(FRHICommandListBase *)param_1,
                   L"SkinCacheIntermediateAccumulatedTangents",4,
                   (this->Initializer).IntermediateAccumulatedTangentsSize << 3,PF_R32_SINT,
                   UAVCompute,UnorderedAccess,(FResourceArrayUploadInterface *)0x0);
        local_e8._0_8_ = 0;
        local_e8._8_8_ = 0;
        ((this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference)->_padding_ =
             (longlong)*param_3;
        pFVar8 = (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference;
        (this->IntermediateAccumulatedTangents).AccessState = None;
        FRHIComputeCommandList::ClearUAVUint
                  ((FRHIComputeCommandList *)param_1,pFVar8,
                   (TIntVector4<unsigned_int> *)&local_e8._s_0);
      }
      return this;
    }
  } while( true );
}

// ~FRWBuffersAllocation @ 147c31130

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FGPUSkinCache::FRWBuffersAllocation::~FRWBuffersAllocation(FRWBuffersAllocation *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  this->PositionBuffers[0].Buffer.NumBytes = 0;
  pFVar1 = this->PositionBuffers[0].Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    this->PositionBuffers[0].Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = this->PositionBuffers[0].Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    this->PositionBuffers[0].Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = this->PositionBuffers[0].Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    this->PositionBuffers[0].Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  this->PositionBuffers[0].AccessState = None;
  this->PositionBuffers[1].Buffer.NumBytes = 0;
  pFVar1 = this->PositionBuffers[1].Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    this->PositionBuffers[1].Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = this->PositionBuffers[1].Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    this->PositionBuffers[1].Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = this->PositionBuffers[1].Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    this->PositionBuffers[1].Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  this->PositionBuffers[1].AccessState = None;
  (this->Tangents).Buffer.NumBytes = 0;
  pFVar1 = (this->Tangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Tangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->Tangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->Tangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->Tangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->Tangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->Tangents).AccessState = None;
  (this->IntermediateTangents).Buffer.NumBytes = 0;
  pFVar1 = (this->IntermediateTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IntermediateTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->IntermediateTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->IntermediateTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->IntermediateTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->IntermediateTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->IntermediateTangents).AccessState = None;
  (this->IntermediateAccumulatedTangents).Buffer.NumBytes = 0;
  pFVar1 = (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->IntermediateAccumulatedTangents).AccessState = None;
  (this->IntermediateAccumulatedTangents).Buffer.NumBytes = 0;
  pFVar1 = (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->IntermediateAccumulatedTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->IntermediateAccumulatedTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->IntermediateAccumulatedTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  (this->IntermediateTangents).Buffer.NumBytes = 0;
  pFVar1 = (this->IntermediateTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IntermediateTangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->IntermediateTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->IntermediateTangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->IntermediateTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->IntermediateTangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->IntermediateTangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->IntermediateTangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->IntermediateTangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  (this->Tangents).Buffer.NumBytes = 0;
  pFVar1 = (this->Tangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Tangents).Buffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->Tangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->Tangents).Buffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->Tangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->Tangents).Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->Tangents).Buffer.SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->Tangents).Buffer.UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Tangents).Buffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRWBuffer::~FRWBuffer(&this->PositionBuffers[1].Buffer);
  FRWBuffer::~FRWBuffer((FRWBuffer *)this);
  return;
}

