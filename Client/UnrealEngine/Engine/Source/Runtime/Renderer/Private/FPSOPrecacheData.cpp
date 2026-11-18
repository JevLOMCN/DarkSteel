// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FPSOPrecacheData @ 14472df20

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
  uint uVar1;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar2;
  FRHIVertexShader *pFVar3;
  FRHIMeshShader *pFVar4;
  FRHIGeometryShader *pFVar5;
  FRHIBlendState *pFVar6;
  FRHIDepthStencilState *pFVar7;
  FRHISamplerState *pFVar8;
  undefined8 uVar9;
  ETextureCreateFlags EVar10;
  ulong64 uVar11;
  
  this->Type = param_1->Type;
  this->bRequired = param_1->bRequired;
  pFVar3 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI = pFVar3;
  pFVar4 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI = pFVar4;
  pFVar5 = (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI = pFVar5;
  pFVar6 = (param_1->field2_0x8).GraphicsPSOInitializer.BlendState;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI;
  (this->field2_0x8).GraphicsPSOInitializer.BlendState = pFVar6;
  pFVar7 = (param_1->field2_0x8).GraphicsPSOInitializer.DepthStencilState;
  (this->field2_0x8).GraphicsPSOInitializer.RasterizerState =
       (param_1->field2_0x8).GraphicsPSOInitializer.RasterizerState;
  (this->field2_0x8).GraphicsPSOInitializer.DepthStencilState = pFVar7;
  pFVar8 = (param_1->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.
           Elements[1];
  (this->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_1->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
       [0];
  (this->field2_0x8).GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       pFVar8;
  uVar9 = *(undefined8 *)(param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFormats.Elements;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0x60) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0x60);
  *(undefined8 *)(this->field2_0x8).GraphicsPSOInitializer.RenderTargetFormats.Elements = uVar9;
  EVar10 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[1];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[0];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[1] = EVar10;
  EVar10 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[3];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[2];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[3] = EVar10;
  EVar10 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[5];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[4];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[5] = EVar10;
  EVar10 = (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[7];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
       (param_1->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[6];
  (this->field2_0x8).GraphicsPSOInitializer.RenderTargetFlags.Elements[7] = EVar10;
  EVar10 = (param_1->field2_0x8).GraphicsPSOInitializer.DepthStencilTargetFlag;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xb0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xb0);
  (this->field2_0x8).GraphicsPSOInitializer.DepthStencilTargetFlag = EVar10;
  uVar9 = *(undefined8 *)((longlong)&param_1->field2_0x8 + 200);
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xc0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xc0);
  *(undefined8 *)((longlong)&this->field2_0x8 + 200) = uVar9;
  uVar11 = (param_1->field2_0x8).GraphicsPSOInitializer.StatePrecachePSOHash;
  *(undefined8 *)((longlong)&this->field2_0x8 + 0xd0) =
       *(undefined8 *)((longlong)&param_1->field2_0x8 + 0xd0);
  (this->field2_0x8).GraphicsPSOInitializer.StatePrecachePSOHash = uVar11;
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       (param_1->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI;
  (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  if ((param_1->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData ==
      (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    memmove(&this->ShaderPreloadData,&param_1->ShaderPreloadData,0x30);
  }
  FVar2 = (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData =
       (param_1->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
  (param_1->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  (this->ShaderPreloadData).Shaders.ArrayNum = (param_1->ShaderPreloadData).Shaders.ArrayNum;
  (this->ShaderPreloadData).Shaders.ArrayMax = (param_1->ShaderPreloadData).Shaders.ArrayMax;
  (param_1->ShaderPreloadData).Shaders.ArrayNum = 0;
  (param_1->ShaderPreloadData).Shaders.ArrayMax = 3;
  uVar1 = *(uint *)&param_1->field_0x128;
  *(uint *)&this->field_0x128 = (uVar1 ^ *(uint *)&this->field_0x128) & 0x80000000 ^ uVar1;
  *(uint *)&this->field_0x128 = (uVar1 ^ *(uint *)&param_1->field_0x128) & 0x80000000 ^ uVar1;
  this->VertexFactoryType = param_1->VertexFactoryType;
  return this;
}

// SetComputeShader @ 144fe3920

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

void __thiscall
FPSOPrecacheData::SetComputeShader
          (FPSOPrecacheData *this,TShaderRefBase<FShader,FShaderMapPointerTable> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar3;
  code *pcVar4;
  EPSOPrecacheMode EVar5;
  bool bVar6;
  int iVar7;
  atomic<FRHIShader_*> aVar8;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar9;
  atomic<FRHIShader_*> aVar10;
  
  EVar5 = GetPSOPrecacheMode();
  if (EVar5 == PreloadShader) {
    iVar7 = (this->ShaderPreloadData).Shaders.ArrayNum;
    piVar1 = &(this->ShaderPreloadData).Shaders.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,(ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
                               &this->ShaderPreloadData,piVar1);
    }
    (this->ShaderPreloadData).Shaders.ArrayNum = iVar7 + 1;
    FVar9 = (this->ShaderPreloadData).Shaders.AllocatorInstance.SecondaryData;
    pFVar3 = param_1->ShaderMap;
    if (FVar9 == (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar9 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
              &this->ShaderPreloadData;
    }
    puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)iVar7 * 0x10);
    *puVar2 = param_1->ShaderContent;
    puVar2[1] = pFVar3;
    return;
  }
  aVar10 = (atomic<FRHIShader_*>)0x0;
  aVar8 = aVar10;
  if (param_1->ShaderContent != (FShader *)0x0) {
    this_00 = (param_1->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_1->ShaderContent->ResourceIndex;
    aVar8 = (this_00->RHIShaders).Ptr[iVar7];
    if (((aVar8 == (atomic<FRHIShader_*>)0x0) &&
        (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar7,true),
        aVar8 == (atomic<FRHIShader_*>)0x0)) && (aVar8 = aVar10, 4 < (byte)LogShaders._0_1_)) {
      this_01 = param_1->ShaderContent;
      pFVar3 = param_1->ShaderMap;
      if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FShader::GetType(this_01,pFVar3->PointerTable);
      UE::Logging::Private::BasicLog<5>
                (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  (this->field2_0x8).GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)aVar8;
  return;
}

