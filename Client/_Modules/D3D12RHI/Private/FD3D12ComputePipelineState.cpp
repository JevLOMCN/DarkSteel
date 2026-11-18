// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12ComputePipelineState @ 1459ed370

FD3D12ComputePipelineState * __thiscall
FD3D12ComputePipelineState::FD3D12ComputePipelineState
          (FD3D12ComputePipelineState *this,FComputePipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12PipelineState *param_3)

{
  FRHIComputeShader *this_00;
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  FD3D12ComputePipelineState *pFVar4;
  
  this_00 = param_1->ComputeShader;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ComputePipelineState);
  this->_padding_ = (longlong)&___7FRHIComputePipelineState__6B_;
  this->_padding_ = (longlong)this_00;
  if (this_00 == (FRHIComputeShader *)0x0) {
    *(undefined2 *)&this->_padding_ = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x43c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12ComputePipelineState *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_00);
    *(undefined2 *)&this->_padding_ = 1;
  }
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FD3D12ComputePipelineState__6B_;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0;
  if ((param_1->ComputeShader == (FRHIComputeShader *)0x0) ||
     ((param_1->ComputeShader[1]._padding_ & 1) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 2;
  }
  this->bShaderNeedsGlobalConstantBuffer = false;
  this->field_0x40 = this->field_0x40 | bVar3;
  this->field_0x40 = this->field_0x40 ^ ((param_1->field1_0x8).Flags >> 6 ^ this->bPSOPrecache) & 1;
  return this;
}

// ~FD3D12ComputePipelineState @ 1459f6e40

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

void __thiscall
FD3D12ComputePipelineState::~FD3D12ComputePipelineState(FD3D12ComputePipelineState *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FD3D12Adapter *pFVar8;
  
  this->_padding_ = (longlong)&___7FD3D12ComputePipelineState__6B_;
  bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
  if ((((!bVar7) || (GLowLevelCacheKeepPrecachedPSOs != false)) &&
      (GLowLevelCacheKeepUsedPSOs != false)) ||
     (puVar3 = (undefined8 *)this->_padding_, puVar3 == (undefined8 *)0x0)) goto LAB_1459f6f26;
  piVar1 = (int *)(puVar3 + 1);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
LAB_1459f6eb2:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                       ,0x1e6,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar2 == 1) goto LAB_1459f6eb2;
  bVar7 = this->bPSOPrecache;
  if ((bVar7 == false) || (GLowLevelCacheKeepPrecachedPSOs != false)) {
    bVar5 = false;
    bVar6 = false;
    if ((bVar7 != false) || (GLowLevelCacheKeepUsedPSOs != false)) goto LAB_1459f6eec;
    bVar7 = true;
  }
  else {
    bVar6 = true;
LAB_1459f6eec:
    bVar5 = bVar6;
    bVar7 = false;
  }
  if ((iVar2 == 2) && ((bVar7 || (bVar5)))) {
    pFVar8 = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
    FD3D12PipelineStateCacheBase::RemoveFromLowLevelCache
              ((FD3D12PipelineStateCacheBase *)&pFVar8->PipelineStateCache,
               (FD3D12PipelineState *)this->_padding_,(FD3D12ComputeShader *)this->_padding_,
               (FD3D12RootSignature *)this->_padding_);
  }
LAB_1459f6f26:
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

