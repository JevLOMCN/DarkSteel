// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// RHICreateComputePipelineState @ 1446c6d10

TRefCountPtr<FRHIComputePipelineState> __thiscall
FDynamicRHIPSOFallback::RHICreateComputePipelineState
          (FDynamicRHIPSOFallback *this,FComputePipelineStateInitializer *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FRHIComputeShader *this_01;
  TRefCountPtr<FRHIComputePipelineState> TVar3;
  undefined8 *in_R8;
  
  this_01 = ::operator_new(0x28);
  if (this_01 == (FRHIComputeShader *)0x0) {
    param_1->ComputeShader = (FRHIComputeShader *)0x0;
    return (TRefCountPtr<FRHIComputePipelineState>)(FRHIComputePipelineState *)param_1;
  }
  this_00 = (FRHIResource *)*in_R8;
  FRHIResource::FRHIResource((FRHIResource *)this_01,RRT_ComputePipelineState);
  this_01->_padding_ = (longlong)&___7FRHIComputePipelineState__6B_;
  this_01->_padding_ = (longlong)this_00;
  if (this_00 == (FRHIResource *)0x0) {
    *(undefined2 *)&this_01->_padding_ = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x43c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIComputePipelineState *)(*pcVar1)();
      return (TRefCountPtr<FRHIComputePipelineState>)TVar3.Reference;
    }
  }
  else {
    FRHIResource::AddRef(this_00);
    *(undefined2 *)&this_01->_padding_ = 1;
  }
  param_1->ComputeShader = this_01;
  this_01->_padding_ = (longlong)&___7FRHIComputePipelineStateFallback__6B_;
  FRHIResource::AddRef((FRHIResource *)this_01);
  return (TRefCountPtr<FRHIComputePipelineState>)(FRHIComputePipelineState *)param_1;
}

// RHICreateGraphicsPipelineState @ 1446c6fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TRefCountPtr<FRHIGraphicsPipelineState> __thiscall
FDynamicRHIPSOFallback::RHICreateGraphicsPipelineState
          (FDynamicRHIPSOFallback *this,FGraphicsPipelineStateInitializer *param_1)

{
  FName FVar1;
  FRHIResource *this_00;
  FName *in_R8;
  
  this_00 = ::operator_new(0x108);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_GraphicsPipelineState);
    (param_1->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)this_00;
    this_00[1].AtomicFlags.Packed = (atomic<unsigned_int>)0x0;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FRHIGraphicsPipelineStateFallBack__6B_;
    FVar1 = in_R8[1];
    this_00[1].OwnerName = *in_R8;
    this_00[2]._padding_ = (longlong)FVar1;
    FVar1 = in_R8[3];
    *(FName *)&this_00[2].AtomicFlags = in_R8[2];
    this_00[2].OwnerName = FVar1;
    FVar1 = in_R8[5];
    this_00[3]._padding_ = (longlong)in_R8[4];
    *(FName *)&this_00[3].AtomicFlags = FVar1;
    FVar1 = in_R8[7];
    this_00[3].OwnerName = in_R8[6];
    this_00[4]._padding_ = (longlong)FVar1;
    FVar1 = in_R8[9];
    *(FName *)&this_00[4].AtomicFlags = in_R8[8];
    this_00[4].OwnerName = FVar1;
    FVar1 = in_R8[0xb];
    this_00[5]._padding_ = (longlong)in_R8[10];
    *(FName *)&this_00[5].AtomicFlags = FVar1;
    FVar1 = in_R8[0xd];
    this_00[5].OwnerName = in_R8[0xc];
    this_00[6]._padding_ = (longlong)FVar1;
    FVar1 = in_R8[0xf];
    *(FName *)&this_00[6].AtomicFlags = in_R8[0xe];
    this_00[6].OwnerName = FVar1;
    FVar1 = in_R8[0x11];
    this_00[7]._padding_ = (longlong)in_R8[0x10];
    *(FName *)&this_00[7].AtomicFlags = FVar1;
    FVar1 = in_R8[0x13];
    this_00[7].OwnerName = in_R8[0x12];
    this_00[8]._padding_ = (longlong)FVar1;
    FVar1 = in_R8[0x15];
    *(FName *)&this_00[8].AtomicFlags = in_R8[0x14];
    this_00[8].OwnerName = FVar1;
    FVar1 = in_R8[0x17];
    this_00[9]._padding_ = (longlong)in_R8[0x16];
    *(FName *)&this_00[9].AtomicFlags = FVar1;
    FVar1 = in_R8[0x19];
    this_00[9].OwnerName = in_R8[0x18];
    this_00[10]._padding_ = (longlong)FVar1;
    FVar1 = in_R8[0x1b];
    *(FName *)&this_00[10].AtomicFlags = in_R8[0x1a];
    this_00[10].OwnerName = FVar1;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
  }
  (param_1->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
}

