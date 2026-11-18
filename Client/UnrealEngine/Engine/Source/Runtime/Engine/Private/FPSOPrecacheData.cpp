// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPSOPrecacheData @ 1483e1ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheData * __thiscall
FPSOPrecacheData::FPSOPrecacheData(FPSOPrecacheData *this,FPSOPrecacheData *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FRHIVertexShader *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIGeometryShader *pFVar6;
  FRHIBlendState *pFVar7;
  FRHIDepthStencilState *pFVar8;
  FRHISamplerState *pFVar9;
  undefined8 uVar10;
  ETextureCreateFlags EVar11;
  ulong64 uVar12;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> _Dst;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> _Src;
  
  this->Type = param_1->Type;
  this->bRequired = param_1->bRequired;
  pFVar4 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI = pFVar4;
  pFVar5 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI = pFVar5;
  pFVar6 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI = pFVar6;
  pFVar7 = (param_1->field2_0x8).GraphicsPSOInitializer.BlendState;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BlendState = pFVar7;
  pFVar8 = (param_1->field2_0x8).GraphicsPSOInitializer.DepthStencilState;
  (this->field2_0x8).GraphicsPSOInitializer.RasterizerState =
       (param_1->field2_0x8).GraphicsPSOInitializer.RasterizerState;
  (this->field2_0x8).GraphicsPSOInitializer.DepthStencilState = pFVar8;
  pFVar9 = (param_1->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.
           Elements[1];
  (this->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_1->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
       [0];
  (this->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       pFVar9;
  uVar10 = *(undefined8 *)(param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFormats.Elements;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0x60) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0x60);
  *(undefined8 *)(this->field2_0x8).GraphicsPSOInitializer.RenderTargetFormats.Elements = uVar10;
  EVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[1];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[0];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[1] = EVar11;
  EVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[3];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[2];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[3] = EVar11;
  EVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[5];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[4];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[5] = EVar11;
  EVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[7];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[6];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[7] = EVar11;
  EVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.DepthStencilTargetFlag;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xb0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xb0);
  (this->field2_0x8).GraphicsPSOInitializer.DepthStencilTargetFlag = EVar11;
  uVar10 = *(undefined8 *)((longlong)&param_1->field2_0x8 + 200);
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xc0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xc0);
  *(undefined8 *)((longlong)&this->field2_0x8 + 200) = uVar10;
  uVar12 = (param_1->field2_0x8).GraphicsPSOInitializer.StatePrecachePSOHash;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xd0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xd0);
  (this->field2_0x8).GraphicsPSOInitializer.StatePrecachePSOHash = uVar12;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI;
  (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  _Src = (param_1->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ShaderPreloadData).Shaders.ArrayNum;
  (this->ShaderPreloadData).Shaders.ArrayNum = iVar2;
  if (_Src == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    _Src = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
           &param_1->ShaderPreloadData;
  }
  piVar1 = &(this->ShaderPreloadData).Shaders.ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 3;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
              (0x10,8,iVar2,0,
               (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
               &this->ShaderPreloadData,iVar2,piVar1);
    _Dst = (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      _Dst = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
             &this->ShaderPreloadData;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 4);
  }
  uVar3 = *(uint *)&param_1->field_0x128;
  *(uint *)&this->field_0x128 = (uVar3 ^ *(uint *)&this->field_0x128) & 0x80000000 ^ uVar3;
  *(uint *)&this->field_0x128 = (uVar3 ^ *(uint *)&param_1->field_0x128) & 0x80000000 ^ uVar3;
  this->VertexFactoryType = param_1->VertexFactoryType;
  return this;
}

