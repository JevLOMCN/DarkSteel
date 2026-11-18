// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FMorphVertexBuffer @ 148620720

FMorphVertexBuffer * __thiscall FMorphVertexBuffer::FMorphVertexBuffer(FMorphVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->bHasBeenUpdated = false;
  this->bNeedsInitialClear = true;
  this->_padding_ = (longlong)&___7FMorphVertexBuffer__6B_;
  (this->SectionIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionIds).ArrayNum = 0;
  (this->SectionIds).ArrayMax = 0;
  (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
  (this->UAVValue).Reference = (FRHIUnorderedAccessView *)0x0;
  this->bUsesComputeShader = false;
  this->SkelMeshRenderData = (FSkeletalMeshRenderData *)0x0;
  this->LODIdx = -1;
  return this;
}

// ~FMorphVertexBuffer @ 148625040

void __thiscall FMorphVertexBuffer::~FMorphVertexBuffer(FMorphVertexBuffer *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->UAVValue).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRVValue).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->SectionIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 148626790

FMorphVertexBuffer * __thiscall
FMorphVertexBuffer::operator=(FMorphVertexBuffer *this,FMorphVertexBuffer *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar5;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar6;
  FScriptContainerElement *pFVar7;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  
  FVertexBuffer::operator=((FVertexBuffer *)this,(FVertexBuffer *)param_1);
  pTVar1 = &param_1->SectionIds;
  this->bHasBeenUpdated = param_1->bHasBeenUpdated;
  pTVar2 = &this->SectionIds;
  this->bNeedsInitialClear = param_1->bNeedsInitialClear;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SectionIds).ArrayNum = (param_1->SectionIds).ArrayNum;
    (this->SectionIds).ArrayMax = (param_1->SectionIds).ArrayMax;
    (param_1->SectionIds).ArrayNum = 0;
    (param_1->SectionIds).ArrayMax = 0;
  }
  pTVar3 = &param_1->SRVValue;
  pTVar4 = &this->SRVValue;
  if (pTVar4 != pTVar3) {
    this_00 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar5 = &param_1->UAVValue;
  pTVar6 = &this->UAVValue;
  if (pTVar6 != pTVar5) {
    this_01 = pTVar6->Reference;
    pTVar6->Reference = pTVar5->Reference;
    pTVar5->Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this->bUsesComputeShader = param_1->bUsesComputeShader;
  this->LODIdx = param_1->LODIdx;
  this->FeatureLevel = param_1->FeatureLevel;
  this->SkelMeshRenderData = param_1->SkelMeshRenderData;
  return this;
}

// GetFriendlyName @ 14864b150

FString * __thiscall
FMorphVertexBuffer::GetFriendlyName(FMorphVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Morph target mesh vertices");
  return __return_storage_ptr__;
}

// GetNumVerticies @ 14864c500

ulong64 __thiscall FMorphVertexBuffer::GetNumVerticies(FMorphVertexBuffer *this)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  
  uVar1 = this->LODIdx;
  pFVar2 = this->SkelMeshRenderData;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  return (ulonglong)
         *(uint *)(*(longlong *)
                    ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8
                    ) + 300);
}

// GetResourceSize @ 14864d270

ulong64 __thiscall FMorphVertexBuffer::GetResourceSize(FMorphVertexBuffer *this)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  
  if (this->_padding_ == 0) {
    return 0x68;
  }
  uVar1 = this->LODIdx;
  pFVar2 = this->SkelMeshRenderData;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  return (ulonglong)
         *(uint *)(*(longlong *)
                    ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8
                    ) + 300) * 0x18 + 0x68;
}

// InitRHI @ 1486556e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMorphVertexBuffer::InitRHI(FMorphVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  uint uVar4;
  FSkeletalMeshRenderData *pFVar5;
  longlong lVar6;
  FRHIResource *pFVar7;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TRefCountPtr<FRHIBuffer> TVar11;
  TRefCountPtr<FRHIShaderResourceView> TVar12;
  FRHIResource *local_res18;
  FMemScope local_res20;
  FRHIBufferCreateDesc local_108;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined1 local_b0 [136];
  
  uVar4 = this->LODIdx;
  pFVar5 = this->SkelMeshRenderData;
  uVar10 = 0;
  if ((int)uVar4 < (pFVar5->LODRenderData).Array.ArrayNum) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *(longlong *)
           ((pFVar5->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  if ((GUseGPUMorphTargets == 0) || ((int)this->FeatureLevel < 3)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  this->bUsesComputeShader = bVar9;
  plVar1 = &this->_padding_;
  local_108.InitAction = Default;
  uStack_d0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_108.InitialState = *(int *)(lVar6 + 300) * 0x18;
  local_108.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_c8 = 0x400;
  local_b0._112_8_ = 0x400;
  local_b0._120_8_ = 0;
  local_108.OwnerName = (FName)0x151b27c10;
  local_108.ClassName.ComparisonIndex.Value = 0x4109;
  if (bVar9 == false) {
    local_108.ClassName.ComparisonIndex.Value = 0x4102;
  }
  local_b8 = this->_padding_;
  local_b0._80_8_ = ZEXT48(local_108.InitialState);
  local_b0._88_8_ = CONCAT44(local_108.ClassName.Number,local_108.ClassName.ComparisonIndex.Value);
  local_b0._96_8_ = L"MorphVertexBuffer";
  local_b0._104_8_ = 0;
  local_b0._128_8_ = local_b8;
  if (bVar9 != false) {
    TVar11 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
    if ((FRHIBuffer *)plVar1 != TVar11.Reference) {
      pFVar7 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar11.Reference)->_padding_;
      (TVar11.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
    lVar6 = *plVar1;
    local_108.InitialData = (FResourceArrayUploadInterface *)0x0;
    local_108.DebugName = (wchar_t *)0x11c01;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
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
              ((FLLMScope *)&stack0x00000008,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              (&local_res20,
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))
              (GDynamicRHI,&local_108._padding_,param_1,lVar6,&local_108.DebugName);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope((FLLMScope *)&stack0x00000008);
    pTVar2 = &this->UAVValue;
    if (pTVar2 == (TRefCountPtr<FRHIUnorderedAccessView> *)&local_108._padding_) {
LAB_14865596d:
      if ((FRHIUnorderedAccessView *)local_108._padding_ != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_108._padding_);
      }
    }
    else {
      this_00 = pTVar2->Reference;
      pTVar2->Reference = (FRHIUnorderedAccessView *)local_108._padding_;
      local_108._padding_ = 0;
      if (this_00 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        goto LAB_14865596d;
      }
    }
    bVar9 = true;
    goto LAB_14865597e;
  }
  local_b0._56_8_ = 0x100000400;
  local_b0._40_8_ = L"MorphVertexBuffer";
  local_b0._48_8_ = 0;
  local_b0._24_8_ = local_b0._80_8_;
  local_b0._32_8_ = local_b0._88_8_;
  local_b0._64_8_ = local_b0._120_8_;
  local_b0._72_8_ = local_b8;
  FRHICommandListBase::CreateBuffer(param_1,&local_108);
  if ((FRHIBufferCreateDesc *)plVar1 == &local_108) {
LAB_148655851:
    if ((FRHIResource *)local_108._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_108._padding_);
    }
  }
  else {
    pFVar7 = (FRHIResource *)*plVar1;
    *plVar1 = local_108._padding_;
    local_108._padding_ = 0;
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
      goto LAB_148655851;
    }
  }
  bVar9 = false;
LAB_14865597e:
  this->bNeedsInitialClear = bVar9;
  local_b0._16_8_ = 0;
  local_b0._8_8_ = 0x10d00;
  TVar12 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHIBuffer *)local_b0,(FInitializer *)*plVar1);
  pTVar3 = &this->SRVValue;
  if ((FRHIShaderResourceView *)pTVar3 != TVar12.Reference) {
    this_01 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar12.Reference;
    *(undefined8 *)TVar12.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if ((FRHIResource *)local_b0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b0._0_8_);
  }
  this->bHasBeenUpdated = false;
  return;
}

// ReleaseRHI @ 14865f2d0

void __thiscall FMorphVertexBuffer::ReleaseRHI(FMorphVertexBuffer *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIResource *this_01;
  FRHIShaderResourceView *this_02;
  
  this_00 = (this->UAVValue).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAVValue).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
  }
  this_02 = (this->SRVValue).Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
    return;
  }
  return;
}

