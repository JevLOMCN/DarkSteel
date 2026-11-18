// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 12

// FD3D12PipelineStateCache @ 145a8f4b0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PipelineStateCache * __thiscall
FD3D12PipelineStateCache::FD3D12PipelineStateCache
          (FD3D12PipelineStateCache *this,FD3D12Adapter *param_1)

{
  FD3D12PipelineStateCacheBase::FD3D12PipelineStateCacheBase
            ((FD3D12PipelineStateCacheBase *)this,param_1);
  this->bUseAPILibaries = true;
  this->_padding_ = (longlong)&___7FD3D12PipelineStateCache__6B_;
  (this->DiskBinaryCache).mFileName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiskBinaryCache).mFileName.Data.ArrayNum = 0;
  (this->DiskBinaryCache).mFileName.Data.ArrayMax = 0;
  (this->DiskBinaryCache).mBackedMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiskBinaryCache).mBackedMemory.ArrayNum = 0;
  (this->DiskBinaryCache).mBackedMemory.ArrayMax = 0;
  (this->PipelineLibrary).Reference = (ID3D12PipelineLibrary *)0x0;
  return this;
}

// ~FD3D12PipelineStateCache @ 145a94a80

void __thiscall FD3D12PipelineStateCache::~FD3D12PipelineStateCache(FD3D12PipelineStateCache *this)

{
  ID3D12PipelineLibrary *pIVar1;
  
  this->_padding_ = (longlong)&___7FD3D12PipelineStateCache__6B_;
  pIVar1 = (this->PipelineLibrary).Reference;
  if (pIVar1 != (ID3D12PipelineLibrary *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FDiskCacheInterface::~FDiskCacheInterface(&this->DiskBinaryCache);
  FD3D12PipelineStateCacheBase::~FD3D12PipelineStateCacheBase((FD3D12PipelineStateCacheBase *)this);
  return;
}

// operator() @ 145a985f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>::operator()
          (void *this,FD3D12PipelineState **param_1,FD3D12LowLevelGraphicsPipelineStateDesc *param_2
          )

{
  ID3D12RootSignature *pIVar1;
  void *pvVar2;
  ulong64 uVar3;
  void *pvVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  D3D12_BLEND *pDVar10;
  longlong lVar11;
  undefined1 auStack_348 [32];
  GraphicsPipelineCreationArgs local_328;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_348;
  lVar11 = 6;
  pDVar10 = (D3D12_BLEND *)&local_328;
  do {
    pIVar1 = (param_2->Desc).pRootSignature;
    pvVar2 = (param_2->Desc).VS.pShaderBytecode;
    uVar3 = (param_2->Desc).VS.BytecodeLength;
    *(FD3D12RootSignature **)pDVar10 = param_2->pRootSignature;
    *(ID3D12RootSignature **)(pDVar10 + 2) = pIVar1;
    pvVar4 = (param_2->Desc).MS.pShaderBytecode;
    uVar5 = (param_2->Desc).MS.BytecodeLength;
    *(void **)(pDVar10 + 4) = pvVar2;
    *(ulong64 *)(pDVar10 + 6) = uVar3;
    pvVar2 = (param_2->Desc).AS.pShaderBytecode;
    uVar3 = (param_2->Desc).AS.BytecodeLength;
    *(void **)(pDVar10 + 8) = pvVar4;
    *(ulong64 *)(pDVar10 + 10) = uVar5;
    pvVar4 = (param_2->Desc).PS.pShaderBytecode;
    uVar5 = (param_2->Desc).PS.BytecodeLength;
    *(void **)(pDVar10 + 0xc) = pvVar2;
    *(ulong64 *)(pDVar10 + 0xe) = uVar3;
    pvVar2 = (param_2->Desc).GS.pShaderBytecode;
    uVar3 = (param_2->Desc).GS.BytecodeLength;
    *(void **)(pDVar10 + 0x10) = pvVar4;
    *(ulong64 *)(pDVar10 + 0x12) = uVar5;
    uVar6 = *(undefined8 *)&(param_2->Desc).BlendState;
    uVar7 = *(undefined8 *)(param_2->Desc).BlendState.RenderTarget;
    *(void **)(pDVar10 + 0x14) = pvVar2;
    *(ulong64 *)(pDVar10 + 0x16) = uVar3;
    uVar8 = *(undefined8 *)&(param_2->Desc).BlendState.RenderTarget[0].SrcBlend;
    uVar9 = *(undefined8 *)&(param_2->Desc).BlendState.RenderTarget[0].BlendOp;
    *(undefined8 *)(pDVar10 + 0x18) = uVar6;
    *(undefined8 *)(pDVar10 + 0x1a) = uVar7;
    *(undefined8 *)(pDVar10 + 0x1c) = uVar8;
    *(undefined8 *)(pDVar10 + 0x1e) = uVar9;
    lVar11 = lVar11 + -1;
    pDVar10 = pDVar10 + 0x20;
    param_2 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
              &(param_2->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
  } while (lVar11 != 0);
  local_328.Args.Library = *(ID3D12PipelineLibrary **)(*(longlong *)this + 0x200);
  FD3D12PipelineState::Create(*param_1,&local_328);
  return;
}

// AddToDiskCache @ 145a9bc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FD3D12PipelineStateCache::AddToDiskCache
          (FD3D12PipelineStateCache *this,FD3D12ComputePipelineStateDesc *param_1,
          FD3D12PipelineState *param_2)

{
  longlong *this_00;
  undefined4 *puVar1;
  ulong64 *puVar2;
  ID3D10Blob *pIVar3;
  ForAnyElementType FVar4;
  ulong64 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  longlong lVar12;
  ID3D12PipelineState *pIVar13;
  undefined8 *puVar14;
  FRHIUniformBufferShaderBindingLayout *pFVar15;
  longlong lVar16;
  undefined1 auStack_148 [32];
  FD3D12QuantizedBoundShaderState local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  this_00 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,0x60,false);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      uVar9 = *(undefined8 *)&param_1->Desc;
      lVar12 = this->_padding_;
      lVar16 = this->_padding_;
      *(undefined8 *)(lVar16 + lVar12) = param_1->pRootSignature;
      ((undefined8 *)(lVar16 + lVar12))[1] = uVar9;
      uVar9 = *(undefined8 *)&(param_1->Desc).field_0x10;
      puVar14 = (undefined8 *)(lVar16 + 0x10 + lVar12);
      *puVar14 = *(undefined8 *)&(param_1->Desc).field_0x8;
      puVar14[1] = uVar9;
      uVar9 = *(undefined8 *)&(param_1->Desc).field_0x20;
      puVar14 = (undefined8 *)(lVar16 + 0x20 + lVar12);
      *puVar14 = *(undefined8 *)&(param_1->Desc).field_0x18;
      puVar14[1] = uVar9;
      uVar9 = *(undefined8 *)&(param_1->Desc).field_0x30;
      puVar14 = (undefined8 *)(lVar16 + 0x30 + lVar12);
      *puVar14 = *(undefined8 *)&(param_1->Desc).field_0x28;
      puVar14[1] = uVar9;
      uVar7 = *(undefined4 *)((longlong)(param_1->CSHash).Hash + 4);
      uVar5 = (param_1->CSHash).Hash[1];
      uVar8 = *(undefined4 *)((longlong)(param_1->CSHash).Hash + 0xc);
      puVar1 = (undefined4 *)(lVar16 + 0x40 + lVar12);
      *puVar1 = (int)(param_1->CSHash).Hash[0];
      puVar1[1] = uVar7;
      puVar1[2] = (int)uVar5;
      puVar1[3] = uVar8;
      pTVar10 = param_1->Extensions;
      puVar2 = (ulong64 *)(lVar16 + 0x50 + lVar12);
      *puVar2 = param_1->CombinedHash;
      puVar2[1] = (ulong64)pTVar10;
      this->_padding_ = this->_padding_ + 0x60;
    }
    if ((param_1->pRootSignature == (FD3D12RootSignature *)0x0) ||
       (pIVar3 = (param_1->pRootSignature->RootSignatureBlob).Reference, pIVar3 == (ID3D10Blob *)0x0
       )) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)((longlong)*pIVar3 + 0x20))();
    }
    lVar16 = 8;
    FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,8,false);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      *(longlong *)(this->_padding_ + this->_padding_) = lVar12;
      this->_padding_ = this->_padding_ + 8;
    }
    if (lVar12 != 0) {
      if ((param_1->pRootSignature->RootSignature).Reference !=
          *(ID3D12RootSignature **)&param_1->Desc) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Desc.pRootSignature->GetRootSignature() == PsoDesc.pRootSignature",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                            ,0x1a0,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (this->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FD3D12RootSignatureManager::GetQuantizedBoundShaderState
                ((FD3D12RootSignatureManager *)(this->_padding_ + 0x238),&local_128,
                 param_1->pRootSignature);
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,0xf0,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        puVar14 = (undefined8 *)(this->_padding_ + this->_padding_);
        *puVar14 = local_128.ShaderBindingLayout._0_8_;
        puVar14[1] = local_128.ShaderBindingLayout._8_8_;
        puVar14[2] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar14[3] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.
                     _8_8_;
        puVar14[4] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[0]._16_8_;
        puVar14[5] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar14[6] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.
                     _8_8_;
        puVar14[7] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[1]._16_8_;
        puVar14[8] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar14[9] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.
                     _8_8_;
        puVar14[10] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[2]._16_8_;
        puVar14[0xb] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.
                       Data.AllocatorInstance.Data;
        puVar14[0xc] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.
                       Data._8_8_;
        puVar14[0xd] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[3]._16_8_;
        puVar14[0xe] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.
                       Data.AllocatorInstance.Data;
        puVar14[0xf] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.
                       Data._8_8_;
        puVar14[0x10] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[4]._16_8_;
        puVar14[0x11] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.
             AllocatorInstance.Data;
        puVar14[0x12] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data._8_8_;
        puVar14[0x13] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[5]._16_8_;
        puVar14[0x14] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.
             AllocatorInstance.Data;
        puVar14[0x15] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data._8_8_;
        puVar14[0x16] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[6]._16_8_;
        puVar14[0x17] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.
             AllocatorInstance.Data;
        puVar14[0x18] =
             local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data._8_8_;
        puVar14[0x19] = local_128.ShaderBindingLayout.UniformBufferEntries.Elements[7]._16_8_;
        *(undefined8 *)(puVar14 + 0x1a) = local_128.RegisterCounts.Elements._0_8_;
        *(undefined8 *)(puVar14 + 0x1b) = local_128.RegisterCounts.Elements._8_8_;
        *(undefined8 *)(puVar14 + 0x1c) = local_128.RegisterCounts.Elements._16_8_;
        puVar14[0x1d] = local_128._232_8_;
        this->_padding_ = this->_padding_ + 0xf0;
      }
      pFVar15 = (FRHIUniformBufferShaderBindingLayout *)&local_128.RegisterCounts;
      do {
        FVar4.Data = pFVar15[-1].LayoutName.Data.AllocatorInstance.Data;
        pFVar15 = pFVar15 + -1;
        lVar16 = lVar16 + -1;
        if (FVar4.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar4.Data);
        }
      } while (lVar16 != 0);
    }
    uVar5 = *(ulong64 *)&(param_1->Desc).field_0x10;
    if (uVar5 != 0) {
      FDiskCacheInterface::AppendData
                ((FDiskCacheInterface *)this_00,*(void **)&(param_1->Desc).field_0x8,uVar5);
    }
    if (param_2->InitState == Initialized) {
      pIVar13 = (param_2->PipelineState).Reference;
    }
    else {
      pIVar13 = FD3D12PipelineState::InternalGetPipelineState(param_2);
    }
    WriteOutShaderBlob(this,PSO_CACHE_COMPUTE,pIVar13);
    FDiskCacheInterface::Flush
              ((FDiskCacheInterface *)this_00,*(int *)((longlong)&this->_padding_ + 4) + 1);
  }
  return;
}

// AddToDiskCache @ 145a9bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FD3D12PipelineStateCache::AddToDiskCache
          (FD3D12PipelineStateCache *this,FD3D12LowLevelGraphicsPipelineStateDesc *param_1,
          FD3D12PipelineState *param_2)

{
  longlong *this_00;
  ID3D10Blob *pIVar1;
  ForAnyElementType FVar2;
  char *pcVar3;
  ulong64 uVar4;
  void *pvVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ID3D12RootSignature *pIVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar13;
  size_t sVar14;
  ID3D12PipelineState *pIVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong _Size;
  uint uVar18;
  longlong lVar19;
  FRHIUniformBufferShaderBindingLayout *pFVar20;
  undefined1 auStack_158 [32];
  FD3D12QuantizedBoundShaderState local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,0x300,false);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      lVar16 = 6;
      pFVar13 = param_1;
      puVar17 = (undefined8 *)(this->_padding_ + this->_padding_);
      do {
        pIVar9 = (pFVar13->Desc).pRootSignature;
        *puVar17 = pFVar13->pRootSignature;
        puVar17[1] = pIVar9;
        uVar4 = (pFVar13->Desc).VS.BytecodeLength;
        puVar17[2] = (pFVar13->Desc).VS.pShaderBytecode;
        puVar17[3] = uVar4;
        uVar4 = (pFVar13->Desc).MS.BytecodeLength;
        puVar17[4] = (pFVar13->Desc).MS.pShaderBytecode;
        puVar17[5] = uVar4;
        uVar4 = (pFVar13->Desc).AS.BytecodeLength;
        puVar17[6] = (pFVar13->Desc).AS.pShaderBytecode;
        puVar17[7] = uVar4;
        uVar4 = (pFVar13->Desc).PS.BytecodeLength;
        puVar17[8] = (pFVar13->Desc).PS.pShaderBytecode;
        puVar17[9] = uVar4;
        uVar4 = (pFVar13->Desc).GS.BytecodeLength;
        puVar17[10] = (pFVar13->Desc).GS.pShaderBytecode;
        puVar17[0xb] = uVar4;
        iVar12 = (pFVar13->Desc).BlendState.IndependentBlendEnable;
        iVar7 = (pFVar13->Desc).BlendState.RenderTarget[0].BlendEnable;
        iVar8 = (pFVar13->Desc).BlendState.RenderTarget[0].LogicOpEnable;
        *(int *)(puVar17 + 0xc) = (pFVar13->Desc).BlendState.AlphaToCoverageEnable;
        *(int *)((longlong)puVar17 + 100) = iVar12;
        *(int *)(puVar17 + 0xd) = iVar7;
        *(int *)((longlong)puVar17 + 0x6c) = iVar8;
        uVar10 = *(undefined8 *)&(pFVar13->Desc).BlendState.RenderTarget[0].BlendOp;
        puVar17[0xe] = *(undefined8 *)&(pFVar13->Desc).BlendState.RenderTarget[0].SrcBlend;
        puVar17[0xf] = uVar10;
        lVar16 = lVar16 + -1;
        pFVar13 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                  &(pFVar13->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
        puVar17 = puVar17 + 0x10;
      } while (lVar16 != 0);
      this->_padding_ = this->_padding_ + 0x300;
    }
    if ((param_1->pRootSignature == (FD3D12RootSignature *)0x0) ||
       (pIVar1 = (param_1->pRootSignature->RootSignatureBlob).Reference, pIVar1 == (ID3D10Blob *)0x0
       )) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)((longlong)*pIVar1 + 0x20))();
    }
    lVar19 = 8;
    FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,8,false);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      *(longlong *)(this->_padding_ + this->_padding_) = lVar16;
      this->_padding_ = this->_padding_ + 8;
    }
    if (lVar16 != 0) {
      if ((param_1->pRootSignature->RootSignature).Reference != (param_1->Desc).pRootSignature) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Desc.pRootSignature->GetRootSignature() == PsoDesc.pRootSignature",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                            ,0x163,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (this->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FD3D12RootSignatureManager::GetQuantizedBoundShaderState
                ((FD3D12RootSignatureManager *)(this->_padding_ + 0x238),&local_138,
                 param_1->pRootSignature);
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,0xf0,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        puVar17 = (undefined8 *)(this->_padding_ + this->_padding_);
        *puVar17 = local_138.ShaderBindingLayout._0_8_;
        puVar17[1] = local_138.ShaderBindingLayout._8_8_;
        puVar17[2] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar17[3] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0].LayoutName.Data.
                     _8_8_;
        puVar17[4] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[0]._16_8_;
        puVar17[5] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar17[6] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1].LayoutName.Data.
                     _8_8_;
        puVar17[7] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[1]._16_8_;
        puVar17[8] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.
                     AllocatorInstance.Data;
        puVar17[9] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2].LayoutName.Data.
                     _8_8_;
        puVar17[10] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[2]._16_8_;
        puVar17[0xb] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.
                       Data.AllocatorInstance.Data;
        puVar17[0xc] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3].LayoutName.
                       Data._8_8_;
        puVar17[0xd] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[3]._16_8_;
        puVar17[0xe] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.
                       Data.AllocatorInstance.Data;
        puVar17[0xf] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4].LayoutName.
                       Data._8_8_;
        puVar17[0x10] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[4]._16_8_;
        puVar17[0x11] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data.
             AllocatorInstance.Data;
        puVar17[0x12] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5].LayoutName.Data._8_8_;
        puVar17[0x13] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[5]._16_8_;
        puVar17[0x14] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data.
             AllocatorInstance.Data;
        puVar17[0x15] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6].LayoutName.Data._8_8_;
        puVar17[0x16] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[6]._16_8_;
        puVar17[0x17] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.
             AllocatorInstance.Data;
        puVar17[0x18] =
             local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data._8_8_;
        puVar17[0x19] = local_138.ShaderBindingLayout.UniformBufferEntries.Elements[7]._16_8_;
        *(undefined8 *)(puVar17 + 0x1a) = local_138.RegisterCounts.Elements._0_8_;
        *(undefined8 *)(puVar17 + 0x1b) = local_138.RegisterCounts.Elements._8_8_;
        *(undefined8 *)(puVar17 + 0x1c) = local_138.RegisterCounts.Elements._16_8_;
        puVar17[0x1d] = local_138._232_8_;
        this->_padding_ = this->_padding_ + 0xf0;
      }
      pFVar20 = (FRHIUniformBufferShaderBindingLayout *)&local_138.RegisterCounts;
      do {
        FVar2.Data = pFVar20[-1].LayoutName.Data.AllocatorInstance.Data;
        pFVar20 = pFVar20 + -1;
        lVar19 = lVar19 + -1;
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
      } while (lVar19 != 0);
    }
    uVar18 = (param_1->Desc).InputLayout.NumElements;
    if (uVar18 != 0) {
      FDiskCacheInterface::AppendData
                ((FDiskCacheInterface *)this_00,(param_1->Desc).InputLayout.pInputElementDescs,
                 (ulonglong)uVar18 << 5);
      uVar18 = 0;
      if ((param_1->Desc).InputLayout.NumElements != 0) {
        do {
          pcVar3 = (param_1->Desc).InputLayout.pInputElementDescs[uVar18].SemanticName;
          if (pcVar3 == (char *)0x0) {
            iVar12 = 0;
          }
          else {
            sVar14 = strnlen(pcVar3,0xff);
            iVar12 = (int)sVar14;
          }
          _Size = (ulonglong)(iVar12 + 1U);
          FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,4,false);
          if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
            *(uint *)(this->_padding_ + this->_padding_) = iVar12 + 1U;
            this->_padding_ = this->_padding_ + 4;
          }
          pcVar3 = (param_1->Desc).InputLayout.pInputElementDescs[uVar18].SemanticName;
          FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,_Size,false);
          if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
            memcpy((void *)(this->_padding_ + this->_padding_),pcVar3,_Size);
            this->_padding_ = this->_padding_ + _Size;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < (param_1->Desc).InputLayout.NumElements);
      }
    }
    uVar4 = (param_1->Desc).VS.BytecodeLength;
    if (uVar4 != 0) {
      pvVar5 = (param_1->Desc).VS.pShaderBytecode;
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,uVar4,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        memcpy((void *)(this->_padding_ + this->_padding_),pvVar5,uVar4);
        this->_padding_ = this->_padding_ + uVar4;
      }
    }
    uVar4 = (param_1->Desc).MS.BytecodeLength;
    if (uVar4 != 0) {
      pvVar5 = (param_1->Desc).MS.pShaderBytecode;
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,uVar4,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        memcpy((void *)(this->_padding_ + this->_padding_),pvVar5,uVar4);
        this->_padding_ = this->_padding_ + uVar4;
      }
    }
    uVar4 = (param_1->Desc).AS.BytecodeLength;
    if (uVar4 != 0) {
      pvVar5 = (param_1->Desc).AS.pShaderBytecode;
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,uVar4,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        memcpy((void *)(this->_padding_ + this->_padding_),pvVar5,uVar4);
        this->_padding_ = this->_padding_ + uVar4;
      }
    }
    uVar4 = (param_1->Desc).PS.BytecodeLength;
    if (uVar4 != 0) {
      pvVar5 = (param_1->Desc).PS.pShaderBytecode;
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,uVar4,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        memcpy((void *)(this->_padding_ + this->_padding_),pvVar5,uVar4);
        this->_padding_ = this->_padding_ + uVar4;
      }
    }
    uVar4 = (param_1->Desc).GS.BytecodeLength;
    if (uVar4 != 0) {
      pvVar5 = (param_1->Desc).GS.pShaderBytecode;
      FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)this_00,uVar4,false);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        memcpy((void *)(this->_padding_ + this->_padding_),pvVar5,uVar4);
        this->_padding_ = this->_padding_ + uVar4;
      }
    }
    if (param_2->InitState == Initialized) {
      pIVar15 = (param_2->PipelineState).Reference;
    }
    else {
      pIVar15 = FD3D12PipelineState::InternalGetPipelineState(param_2);
    }
    WriteOutShaderBlob(this,PSO_CACHE_GRAPHICS,pIVar15);
    FDiskCacheInterface::Flush
              ((FDiskCacheInterface *)this_00,*(int *)((longlong)&this->_padding_ + 4) + 1);
  }
  return;
}

// Close @ 145a9dbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12PipelineStateCache::Close(FD3D12PipelineStateCache *this)

{
  ID3D12PipelineLibrary *pIVar1;
  ulonglong uVar2;
  uint *puVar3;
  HANDLE pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong64 uVar10;
  ForAnyElementType local_28;
  int local_20 [2];
  FString local_18;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  if (((this->bUseAPILibaries != false) &&
      (pIVar1 = (this->PipelineLibrary).Reference, pIVar1 != (ID3D12PipelineLibrary *)0x0)) &&
     (uVar10 = (**(code **)((longlong)*pIVar1 + 0x58))(), uVar10 != 0)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)uVar10,&local_28,local_20,local_20 + 1);
    if (((longlong)local_20[0] != uVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("LibraryData.Num() == LibrarySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                           ,0x1e4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pIVar1 = (this->PipelineLibrary).Reference;
    iVar9 = (**(code **)((longlong)*pIVar1 + 0x60))(pIVar1,local_28.Data,uVar10);
    if (iVar9 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar9,"PipelineLibrary->Serialize(LibraryData.GetData(), LibrarySize)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                 ,0x1e7,(ID3D12Device *)0x0,&local_18);
    }
    (this->DiskBinaryCache).mCurrentOffset = 0x10;
    bVar8 = FDiskCacheInterface::AppendData(&this->DiskBinaryCache,local_28.Data,uVar10);
    if ((2 < (byte)LogD3D12RHI._0_1_) && (!bVar8)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  uVar2 = (this->DiskBinaryCache).mCurrentOffset;
  (this->DiskBinaryCache).mHeader.mNumPsos = 0;
  if ((uVar2 < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("mCurrentOffset >= sizeof(FDiskCacheHeader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                         ,0xd8,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->DiskBinaryCache).mHeader.mSizeInBytes = (this->DiskBinaryCache).mCurrentOffset - 0x10;
  if ((this->DiskBinaryCache).mInErrorState == false) {
    if ((this->DiskBinaryCache).mMapAddress != (void *)0x0) {
      puVar3 = (uint *)(this->DiskBinaryCache).mFileStart;
      uVar6 = (this->DiskBinaryCache).mHeader.mNumPsos;
      uVar10 = (this->DiskBinaryCache).mHeader.mSizeInBytes;
      uVar7 = *(uint *)((longlong)&(this->DiskBinaryCache).mHeader.mSizeInBytes + 4);
      *puVar3 = (this->DiskBinaryCache).mHeader.mHeaderVersion;
      puVar3[1] = uVar6;
      puVar3[2] = (uint)uVar10;
      puVar3[3] = uVar7;
      FlushViewOfFile((this->DiskBinaryCache).mMapAddress,(this->DiskBinaryCache).mCurrentOffset);
      UnmapViewOfFile((this->DiskBinaryCache).mMapAddress);
    }
    pvVar4 = (this->DiskBinaryCache).mMemoryMap;
    if (pvVar4 != (HANDLE)0x0) {
      CloseHandle(pvVar4);
    }
    pvVar4 = (this->DiskBinaryCache).mFile;
    if (pvVar4 != (HANDLE)0x0) {
      CloseHandle(pvVar4);
    }
  }
  FD3D12PipelineStateCacheBase::CleanupPipelineStateCaches((FD3D12PipelineStateCacheBase *)this);
  pIVar1 = (this->PipelineLibrary).Reference;
  if (pIVar1 != (ID3D12PipelineLibrary *)0x0) {
    (this->PipelineLibrary).Reference = (ID3D12PipelineLibrary *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// Init @ 145aadbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12PipelineStateCache::Init
          (FD3D12PipelineStateCache *this,FString *param_1,FString *param_2,FString *param_3)

{
  TRefCountPtr<ID3D12PipelineLibrary> *pTVar1;
  int iVar2;
  longlong *plVar3;
  uchar *puVar4;
  ID3D12PipelineLibrary *pIVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uchar *puVar12;
  FString local_48;
  FString local_38;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  pTVar7 = CVarPipelineStateDiskCache.Ref;
  bVar8 = IsInParallelGameThread();
  lVar11 = 4;
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 4;
  }
  iVar9 = *(int *)((longlong)pTVar7->ShadowedValue + lVar10);
  if ((3 < (byte)LogD3D12RHI._0_1_) && (iVar9 == 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  pTVar7 = CVarDriverOptimizedPipelineStateDiskCache.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar11 = 0;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar11);
  if ((3 < (byte)LogD3D12RHI._0_1_) && (iVar2 == 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  this->bUseAPILibaries = iVar2 != 0;
  FDiskCacheInterface::Init((FDiskCacheInterface *)&this->_padding_,param_1,iVar9 != 0);
  FDiskCacheInterface::Init((FDiskCacheInterface *)&this->_padding_,param_2,iVar9 != 0);
  FDiskCacheInterface::Init(&this->DiskBinaryCache,param_3,iVar2 != 0);
  this->_padding_ = 0x10;
  this->_padding_ = 0x10;
  bVar8 = this->bUseAPILibaries;
  (this->DiskBinaryCache).mCurrentOffset = (this->DiskBinaryCache).mHeader.mSizeInBytes + 0x10;
  if (bVar8 == false) goto LAB_145aade94;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = *(longlong **)(this->_padding_ + 0x10);
  if (plVar3 == (longlong *)0x0) goto LAB_145aade94;
  iVar9 = (int)(this->DiskBinaryCache).mHeader.mSizeInBytes;
  if (iVar9 == 0) {
    puVar12 = (uchar *)0x0;
LAB_145aaddbc:
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    puVar4 = (this->DiskBinaryCache).mFileStart;
    puVar12 = puVar4 + 0x10;
    if ((puVar4 + (this->DiskBinaryCache).mCurrentFileMapSize < puVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("data <= (mFileStart + mCurrentFileMapSize)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12DiskCache.cpp"
                           ,0x120,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (puVar12 == (uchar *)0x0) goto LAB_145aaddbc;
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  pTVar1 = &this->PipelineLibrary;
  pIVar5 = pTVar1->Reference;
  pcVar6 = *(code **)(*plVar3 + 0x160);
  if (pIVar5 != (ID3D12PipelineLibrary *)0x0) {
    pTVar1->Reference = (ID3D12PipelineLibrary *)0x0;
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  iVar9 = (*pcVar6)(plVar3,puVar12,iVar9,&_GUID_c64226a8_9201_46af_b4cc_53fb9ff7414f,pTVar1);
  if (iVar9 == -0x7785fffc) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else if (iVar9 < 0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    FDiskCacheInterface::ClearAndReinitialize(&this->DiskBinaryCache);
    if (((int)(this->DiskBinaryCache).mHeader.mSizeInBytes != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DiskBinaryCache.GetSizeInBytes() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                           ,0x22a,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = &this->PipelineLibrary;
    pIVar5 = pTVar1->Reference;
    pcVar6 = *(code **)(*plVar3 + 0x160);
    if (pIVar5 != (ID3D12PipelineLibrary *)0x0) {
      pTVar1->Reference = (ID3D12PipelineLibrary *)0x0;
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    iVar9 = (*pcVar6)(plVar3,0,0,&_GUID_c64226a8_9201_46af_b4cc_53fb9ff7414f,pTVar1);
    if (iVar9 < 0) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar9,
                 "pDevice1->CreatePipelineLibrary(nullptr, 0, IID_PPV_ARGS(PipelineLibrary.GetInitReference()))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                 ,0x22c,(ID3D12Device *)0x0,&local_48);
    }
  }
  pIVar5 = (this->PipelineLibrary).Reference;
  if ((pIVar5 != (ID3D12PipelineLibrary *)0x0) &&
     (iVar9 = (**(code **)((longlong)*pIVar5 + 0x30))(pIVar5,L"Pipeline Library"), iVar9 < 0)) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar9,"Object->SetName(Name)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
               ,0x3e,(ID3D12Device *)0x0,&local_38);
  }
LAB_145aade94:
                    /* WARNING: Could not recover jumptable at 0x000145aadeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  return;
}

// IsInErrorState @ 145aaeb90

bool __thiscall FD3D12PipelineStateCache::IsInErrorState(FD3D12PipelineStateCache *this)

{
  if (((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     ((this->bUseAPILibaries == false || ((this->DiskBinaryCache).mInErrorState == false)))) {
    return false;
  }
  return true;
}

// OnPSOCreated @ 145ab0260

void __thiscall
FD3D12PipelineStateCache::OnPSOCreated
          (FD3D12PipelineStateCache *this,FD3D12PipelineState *param_1,
          FD3D12ComputePipelineStateDesc *param_2)

{
  ComputePipelineCreationArgs local_88;
  
  local_88.Args.Desc.pRootSignature = param_2->pRootSignature;
  local_88.Args.Desc.Desc._0_8_ = *(undefined8 *)&param_2->Desc;
  local_88.Args.Library = (this->PipelineLibrary).Reference;
  local_88.Args.Desc.Desc._8_8_ = *(undefined8 *)&(param_2->Desc).field_0x8;
  local_88.Args.Desc.Desc._16_8_ = *(undefined8 *)&(param_2->Desc).field_0x10;
  local_88.Args.Desc.Desc._24_8_ = *(undefined8 *)&(param_2->Desc).field_0x18;
  local_88.Args.Desc.Desc._32_8_ = *(undefined8 *)&(param_2->Desc).field_0x20;
  local_88.Args.Desc.Desc._40_8_ = *(undefined8 *)&(param_2->Desc).field_0x28;
  local_88.Args.Desc.Desc._48_8_ = *(undefined8 *)&(param_2->Desc).field_0x30;
  local_88.Args.Desc.CSHash.Hash[0] = (param_2->CSHash).Hash[0];
  local_88.Args.Desc.CSHash.Hash[1] = (param_2->CSHash).Hash[1];
  local_88.Args.Desc.CombinedHash = param_2->CombinedHash;
  local_88.Args.Desc.Extensions = param_2->Extensions;
  FD3D12PipelineState::Create(param_1,&local_88);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
    AddToDiskCache(this,param_2,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  }
  return;
}

// OnPSOCreated @ 145ab0320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FD3D12PipelineStateCache::OnPSOCreated
          (FD3D12PipelineStateCache *this,FD3D12PipelineState *param_1,
          FD3D12LowLevelGraphicsPipelineStateDesc *param_2)

{
  ID3D12RootSignature *pIVar1;
  void *pvVar2;
  ulong64 uVar3;
  void *pvVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  D3D12_BLEND *pDVar10;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar11;
  longlong lVar12;
  undefined1 auStack_358 [32];
  GraphicsPipelineCreationArgs local_338;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_358;
  lVar12 = 6;
  pDVar10 = (D3D12_BLEND *)&local_338;
  pFVar11 = param_2;
  do {
    pIVar1 = (pFVar11->Desc).pRootSignature;
    pvVar2 = (pFVar11->Desc).VS.pShaderBytecode;
    uVar3 = (pFVar11->Desc).VS.BytecodeLength;
    *(FD3D12RootSignature **)pDVar10 = pFVar11->pRootSignature;
    *(ID3D12RootSignature **)(pDVar10 + 2) = pIVar1;
    pvVar4 = (pFVar11->Desc).MS.pShaderBytecode;
    uVar5 = (pFVar11->Desc).MS.BytecodeLength;
    *(void **)(pDVar10 + 4) = pvVar2;
    *(ulong64 *)(pDVar10 + 6) = uVar3;
    pvVar2 = (pFVar11->Desc).AS.pShaderBytecode;
    uVar3 = (pFVar11->Desc).AS.BytecodeLength;
    *(void **)(pDVar10 + 8) = pvVar4;
    *(ulong64 *)(pDVar10 + 10) = uVar5;
    pvVar4 = (pFVar11->Desc).PS.pShaderBytecode;
    uVar5 = (pFVar11->Desc).PS.BytecodeLength;
    *(void **)(pDVar10 + 0xc) = pvVar2;
    *(ulong64 *)(pDVar10 + 0xe) = uVar3;
    pvVar2 = (pFVar11->Desc).GS.pShaderBytecode;
    uVar3 = (pFVar11->Desc).GS.BytecodeLength;
    *(void **)(pDVar10 + 0x10) = pvVar4;
    *(ulong64 *)(pDVar10 + 0x12) = uVar5;
    uVar6 = *(undefined8 *)&(pFVar11->Desc).BlendState;
    uVar7 = *(undefined8 *)(pFVar11->Desc).BlendState.RenderTarget;
    *(void **)(pDVar10 + 0x14) = pvVar2;
    *(ulong64 *)(pDVar10 + 0x16) = uVar3;
    uVar8 = *(undefined8 *)&(pFVar11->Desc).BlendState.RenderTarget[0].SrcBlend;
    uVar9 = *(undefined8 *)&(pFVar11->Desc).BlendState.RenderTarget[0].BlendOp;
    *(undefined8 *)(pDVar10 + 0x18) = uVar6;
    *(undefined8 *)(pDVar10 + 0x1a) = uVar7;
    *(undefined8 *)(pDVar10 + 0x1c) = uVar8;
    *(undefined8 *)(pDVar10 + 0x1e) = uVar9;
    lVar12 = lVar12 + -1;
    pDVar10 = pDVar10 + 0x20;
    pFVar11 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
              &(pFVar11->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
  } while (lVar12 != 0);
  local_338.Args.Library = (this->PipelineLibrary).Reference;
  FD3D12PipelineState::Create(param_1,&local_338);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
    AddToDiskCache(this,param_2,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
  }
  return;
}

// RebuildFromDiskCache @ 145ab4230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12PipelineStateCache::RebuildFromDiskCache(FD3D12PipelineStateCache *this)

{
  longlong *plVar1;
  uint uVar2;
  ID3D12RootSignature *pIVar3;
  code *pcVar4;
  FRHIUniformBufferShaderBindingLayout *pFVar5;
  bool bVar6;
  FD3D12RootSignature *pFVar7;
  ulong64 uVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar13;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar14;
  uint *puVar15;
  longlong lVar16;
  FD3D12QuantizedBoundShaderState *pFVar17;
  FD3D12QuantizedBoundShaderState *pFVar18;
  uint uVar19;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar20;
  undefined1 auStack_d8 [32];
  FD3D12PipelineState *local_b8;
  FD3D12PipelineState *local_b0;
  longlong *local_a8;
  code *local_98 [2];
  undefined **local_88;
  FD3D12PipelineStateCache *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FD3D12PipelineStateCache *local_50;
  undefined ***local_40;
  ulonglong local_38;
  ulonglong uVar12;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = &this->_padding_;
  AcquireSRWLockExclusive((PSRWLOCK)local_a8);
  if (((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
      (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
     ((this->bUseAPILibaries == false || ((this->DiskBinaryCache).mInErrorState == false)))) {
    this->_padding_ = 0x10;
    this->_padding_ = 0x10;
    (this->DiskBinaryCache).mCurrentOffset = (this->DiskBinaryCache).mHeader.mSizeInBytes + 0x10;
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    uVar19 = 0;
    if (uVar2 != 0) {
      plVar1 = &this->_padding_;
      do {
        pFVar14 = (FD3D12LowLevelGraphicsPipelineStateDesc *)0x0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,0x300,false);
        pFVar20 = pFVar14;
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          pFVar20 = (FD3D12LowLevelGraphicsPipelineStateDesc *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + 0x300;
        }
        pFVar20->pRootSignature = (FD3D12RootSignature *)0x0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar16 = this->_padding_;
          this->_padding_ = lVar16 + 8;
          plVar10 = (longlong *)(this->_padding_ + lVar16);
          if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
            FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,0xf0,false);
            if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
              pFVar14 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                        (this->_padding_ + this->_padding_);
              this->_padding_ = this->_padding_ + 0xf0;
            }
            if ((this->_padding_ == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ParentAdapter != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                   ,0x41,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar7 = FD3D12RootSignatureManager::GetRootSignature
                               ((FD3D12RootSignatureManager *)(this->_padding_ + 0x238),
                                (FD3D12QuantizedBoundShaderState *)pFVar14);
            pIVar3 = (pFVar7->RootSignature).Reference;
            (pFVar20->Desc).pRootSignature = pIVar3;
            if ((pIVar3 == (ID3D12RootSignature *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PSODesc->pRootSignature",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                                   ,0xdc,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        uVar12 = 0;
        uVar11 = (pFVar20->Desc).InputLayout.NumElements;
        if ((uVar11 != 0) &&
           (FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      ((FDiskCacheInterface *)plVar1,&(pFVar20->Desc).InputLayout.pInputElementDescs
                       ,(ulonglong)uVar11 << 5,true), (pFVar20->Desc).InputLayout.NumElements != 0))
        {
          do {
            puVar15 = (uint *)0x0;
            FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,4,false);
            if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
              puVar15 = (uint *)(this->_padding_ + this->_padding_);
              this->_padding_ = this->_padding_ + 4;
            }
            FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      ((FDiskCacheInterface *)plVar1,
                       &(pFVar20->Desc).InputLayout.pInputElementDescs[uVar12].SemanticName,
                       (ulonglong)*puVar15,true);
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < (pFVar20->Desc).InputLayout.NumElements);
        }
        uVar8 = (pFVar20->Desc).VS.BytecodeLength;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar20->Desc).VS.pShaderBytecode = (void *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        uVar8 = (pFVar20->Desc).MS.BytecodeLength;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar20->Desc).MS.pShaderBytecode = (void *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        uVar8 = (pFVar20->Desc).AS.BytecodeLength;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar20->Desc).AS.pShaderBytecode = (void *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        uVar8 = (pFVar20->Desc).PS.BytecodeLength;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar20->Desc).PS.pShaderBytecode = (void *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        uVar8 = (pFVar20->Desc).GS.BytecodeLength;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar20->Desc).GS.pShaderBytecode = (void *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        lVar16 = 0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar16 = this->_padding_ + this->_padding_;
          this->_padding_ = this->_padding_ + 8;
        }
        lVar13 = 0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar13 = this->_padding_ + this->_padding_;
          this->_padding_ = this->_padding_ + 8;
        }
        if ((lVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("cachedBlobOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.h"
                               ,0xaa,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((lVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("cachedBlobSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.h"
                               ,0xab,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pFVar20->Desc).CachedPSO.CachedBlobSizeInBytes = 0;
        (pFVar20->Desc).CachedPSO.pCachedBlob = (void *)0x0;
        if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
          if (2 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          break;
        }
        uVar11 = 1;
        if (GVirtualMGPU == 0) {
          uVar11 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        }
        if (uVar11 == (pFVar20->Desc).NodeMask) {
          local_b8 = (FD3D12PipelineState *)0x0;
          local_88 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`61'::<lambda_1>,0,0>
                      ::_vftable_;
          local_70 = (undefined ***)0x0;
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,void,FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&>
                        ::Call;
          local_80 = this;
          FD3D12PipelineStateCacheBase::AddToLowLevelCache
                    ((FD3D12PipelineStateCacheBase *)this,pFVar20,&local_b8,
                     (TFunction<void___cdecl(FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&)>
                      *)local_98);
          if (local_98[0] != (code *)0x0) {
            pppuVar9 = &local_88;
            if (local_70 != (undefined ***)0x0) {
              pppuVar9 = local_70;
            }
            (*(code *)(*pppuVar9)[2])();
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar2);
    }
    uVar19 = 0;
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (uVar2 != 0) {
      plVar1 = &this->_padding_;
      do {
        pFVar17 = (FD3D12QuantizedBoundShaderState *)0x0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,0x60,false);
        pFVar18 = pFVar17;
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          pFVar18 = (FD3D12QuantizedBoundShaderState *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + 0x60;
        }
        (pFVar18->ShaderBindingLayout).Hash = 0;
        (pFVar18->ShaderBindingLayout).Flags = None;
        *(undefined3 *)&(pFVar18->ShaderBindingLayout).field_0x5 = 0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar16 = this->_padding_;
          this->_padding_ = lVar16 + 8;
          plVar10 = (longlong *)(this->_padding_ + lVar16);
          if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
            FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,0xf0,false);
            if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
              pFVar17 = (FD3D12QuantizedBoundShaderState *)(this->_padding_ + this->_padding_);
              this->_padding_ = this->_padding_ + 0xf0;
            }
            if ((this->_padding_ == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ParentAdapter != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                   ,0x41,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar7 = FD3D12RootSignatureManager::GetRootSignature
                               ((FD3D12RootSignatureManager *)(this->_padding_ + 0x238),pFVar17);
            pIVar3 = (pFVar7->RootSignature).Reference;
            *(ID3D12RootSignature **)&(pFVar18->ShaderBindingLayout).NumUniformBufferEntries =
                 pIVar3;
            if ((pIVar3 == (ID3D12RootSignature *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PSODesc->pRootSignature",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                                   ,0x12d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        uVar8 = *(ulong64 *)
                 &(pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.
                  ArrayNum;
        if ((uVar8 != 0) &&
           (FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,uVar8,false),
           *(char *)((longlong)&this->_padding_ + 1) == '\0')) {
          (pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.
          AllocatorInstance.Data = (FScriptContainerElement *)(this->_padding_ + this->_padding_);
          this->_padding_ = this->_padding_ + uVar8;
        }
        lVar16 = 0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar16 = this->_padding_ + this->_padding_;
          this->_padding_ = this->_padding_ + 8;
        }
        lVar13 = 0;
        FDiskCacheInterface::GrowMapping((FDiskCacheInterface *)plVar1,8,false);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          lVar13 = this->_padding_ + this->_padding_;
          this->_padding_ = this->_padding_ + 8;
        }
        if ((lVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("cachedBlobOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.h"
                               ,0xaa,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((lVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("cachedBlobSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.h"
                               ,0xab,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = (pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements;
        pFVar5[1].LayoutName.Data.ArrayNum = 0;
        pFVar5[1].LayoutName.Data.ArrayMax = 0;
        (pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements[1].LayoutName.Data.
        AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
          if (2 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          break;
        }
        uVar11 = 1;
        if (GVirtualMGPU == 0) {
          uVar11 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        }
        if (uVar11 == (pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements[0].field1_0x10.
                      Flags) {
          uVar8 = FD3D12PipelineStateCacheBase::HashPSODesc
                            ((FD3D12ComputePipelineStateDesc *)pFVar18);
          *(ulong64 *)&(pFVar18->ShaderBindingLayout).UniformBufferEntries.Elements[2].field1_0x10 =
               uVar8;
          local_b0 = (FD3D12PipelineState *)0x0;
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,void,FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&>
                        ::Call;
          local_40 = (undefined ***)0x0;
          local_58 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`120'::<lambda_2>,0,0>
                      ::_vftable_;
          local_50 = this;
          FD3D12PipelineStateCacheBase::AddToLowLevelCache
                    ((FD3D12PipelineStateCacheBase *)this,(FD3D12ComputePipelineStateDesc *)pFVar18,
                     &local_b0,
                     (TFunction<void___cdecl(FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&)>
                      *)local_68);
          if (local_68[0] != (code *)0x0) {
            pppuVar9 = &local_58;
            if (local_40 != (undefined ***)0x0) {
              pppuVar9 = local_40;
            }
            (*(code *)(*pppuVar9)[2])();
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar2);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)local_a8);
  return;
}

// WriteOutShaderBlob @ 145abc770

void __thiscall
FD3D12PipelineStateCache::WriteOutShaderBlob
          (FD3D12PipelineStateCache *this,PSO_CACHE_TYPE param_1,ID3D12PipelineState *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  FDiskCacheInterface *this_00;
  
  if ((*(char *)((longlong)&this->_padding_ + (longlong)(int)param_1 * 0x68 + 1) == '\0') &&
     ((this->DiskBinaryCache).mInErrorState == false)) {
    this_00 = (FDiskCacheInterface *)(&this->_padding_ + (longlong)(int)param_1 * 0xd);
    FDiskCacheInterface::GrowMapping(this_00,8,false);
    puVar1 = &this_00->mCurrentOffset;
    if (this_00->mInErrorState == false) {
      puVar2 = this_00->mFileStart + *puVar1;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
      *puVar1 = *puVar1 + 8;
    }
    FDiskCacheInterface::GrowMapping(this_00,8,false);
    if (this_00->mInErrorState == false) {
      puVar2 = this_00->mFileStart + *puVar1;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
      *puVar1 = *puVar1 + 8;
    }
  }
  return;
}

