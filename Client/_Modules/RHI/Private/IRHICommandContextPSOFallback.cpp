// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// SetGraphicsPipelineStateFromInitializer @ 145cbf220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
IRHICommandContextPSOFallback::SetGraphicsPipelineStateFromInitializer
          (IRHICommandContextPSOFallback *this,FGraphicsPipelineStateInitializer *param_1,
          uint param_2,bool param_3)

{
  FRHIGeometryShader *pFVar1;
  FRHIPixelShader *pFVar2;
  FRHIVertexShader *pFVar3;
  FRHIVertexDeclaration *pFVar4;
  code *pcVar5;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_48;
  undefined8 uStack_40;
  
  pFVar1 = (param_1->BoundShaderState).GeometryShaderRHI;
  pFVar2 = (param_1->BoundShaderState).PixelShaderRHI;
  pFVar3 = (param_1->BoundShaderState).VertexShaderRHI;
  pFVar4 = (param_1->BoundShaderState).VertexDeclarationRHI;
  pcVar5 = *(code **)(*(longlong *)this + 0x288);
  FLLMScope::FLLMScope(local_res8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_48,Shaders,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x108))
            (GDynamicRHI,&local_res10,pFVar4,pFVar3,pFVar2,pFVar1);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  (*pcVar5)(this,local_res10);
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  (**(code **)(*(longlong *)this + 0x290))(this,param_1->DepthStencilState,param_2);
  (**(code **)(*(longlong *)this + 0x298))(this,param_1->RasterizerState);
  local_48 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_40 = _UNK_15076b1f8;
  (**(code **)(*(longlong *)this + 0x2a0))(this,param_1->BlendState,&local_48);
  if (GRHIGlobals.SupportsDepthBoundsTest != false) {
    (**(code **)(*(longlong *)this + 0x2a8))(this,param_1->bDepthBounds);
  }
  return;
}

