// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 15

// FLensDistortionSceneViewExtension @ 14d6a7c00

FLensDistortionSceneViewExtension * __thiscall
FLensDistortionSceneViewExtension::FLensDistortionSceneViewExtension
          (FLensDistortionSceneViewExtension *this,FAutoRegister *param_1)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->_padding_ = (longlong)&___7FLensDistortionSceneViewExtension__6B_;
  *(undefined8 *)&this->DistortionStateMap = 0;
  *(undefined8 *)&(this->DistortionStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->DistortionStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->DistortionStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->DistortionStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DistortionStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DistortionStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->DistortionStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->DistortionStateMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->DistortionStateMapCriticalSection,4000);
  return this;
}

// operator() @ 14d6af430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  FShaderMapResource *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FGlobalShaderMap *pFVar7;
  FShaderType *pFVar8;
  FName FVar9;
  FRHIVertexShader *pFVar10;
  FShaderParametersMetadata *pFVar11;
  atomic<FRHIShader_*> aVar12;
  FRHIBatchedShaderParameters *pFVar13;
  int iVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  FRHIBuffer *local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_1a8;
  int local_1a0 [3];
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  wchar_t *local_188;
  undefined ***pppuStack_180;
  ERHIAccess local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FFillSTDisplacementMapVS,FShaderMapPointerTable> local_148;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_128;
  undefined **local_118;
  FScriptContainerElement *local_110;
  int local_108;
  FScreenPassPipelineState local_100;
  undefined1 local_c0 [8];
  FString local_b8;
  FString local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined ***pppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x18),(float)*(int *)((longlong)this + 0x1c),
             0.0,(float)*(int *)((longlong)this + 0x20),(float)*(int *)((longlong)this + 0x24),
             __real_3f800000);
  pFVar7 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)FFillSTDisplacementMapVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar7,&local_138,pFVar8,0);
  if (local_138.ShaderContent == (FShader *)0x0) {
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)FVar9,&local_b8);
    FFillSTDisplacementMapVS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FFillSTDisplacementMapVS::GetStaticType();
  local_148.ShaderContent = (FFillSTDisplacementMapVS *)local_138.ShaderContent;
  local_148.ShaderMap = local_138.ShaderMap;
  pFVar7 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)FFillSTDisplacementMapPS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar7,&local_158,pFVar8,0);
  if (local_158.ShaderContent == (FShader *)0x0) {
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c0);
    ::FName::ToString((FName *)FVar9,&local_a8);
    FFillSTDisplacementMapPS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FFillSTDisplacementMapPS::GetStaticType();
  local_100.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_100.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_100.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_100.VertexShader.ShaderContent = local_138.ShaderContent;
  local_100.VertexShader.ShaderMap = local_138.ShaderMap;
  local_100.PixelShader.ShaderContent = local_158.ShaderContent;
  local_100.PixelShader.ShaderMap = local_158.ShaderMap;
  local_100.StencilRef = '\0';
  SetScreenPassPipelineState(param_2,&local_100);
  pvVar3 = *(void **)this;
  pFVar10 = TShaderRefBase<FFillSTDisplacementMapVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_148,true);
  pFVar11 = FFillSTDisplacementMapParameters::FTypeInfo::GetStructMetadata();
  local_98.ShaderContent = local_138.ShaderContent;
  local_98.ShaderMap = local_138.ShaderMap;
  ValidateShaderParameters(&local_98,pFVar11,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar10,&(local_138.ShaderContent)->Bindings,pFVar11,
             pvVar3);
  pvVar3 = *(void **)this;
  aVar12 = (atomic<FRHIShader_*>)0x0;
  if (local_158.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_158.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar12 = (this_00->RHIShaders).Ptr[(local_158.ShaderContent)->ResourceIndex];
    if ((aVar12 == (atomic<FRHIShader_*>)0x0) &&
       (aVar12 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,(local_158.ShaderContent)->ResourceIndex,true),
       aVar12 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_158.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_158.ShaderContent,(local_158.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FFillSTDisplacementMapPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar12 = (atomic<FRHIShader_*>)0x0;
    }
  }
  pFVar11 = FFillSTDisplacementMapParameters::FTypeInfo::GetStructMetadata();
  local_128.ShaderContent = local_158.ShaderContent;
  local_128.ShaderMap = local_158.ShaderMap;
  ValidateShaderParameters(&local_128,pFVar11,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)aVar12,&(local_158.ShaderContent)->Bindings,pFVar11,
             pvVar3);
  pFVar13 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
  pFVar10 = TShaderRefBase<FFillSTDisplacementMapVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_148,true);
  FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar10,pFVar13);
  FRHICommandList::SetStreamSource(param_2,0,(FRHIBuffer *)0x0,0);
  uVar1 = *(uint *)((longlong)this + 8);
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  uVar2 = *(uint *)((longlong)this + 0xc);
  iVar16 = uVar1 + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar2 * uVar1 * 6,&local_1a8,local_1a0,local_1a0 + 1);
  FVar5.Data = local_1a8.Data;
  if (uVar2 != 0) {
    uVar19 = (ulonglong)uVar2;
    FVar15.Data = local_1a8.Data;
    iVar18 = iVar16;
    do {
      if (uVar1 != 0) {
        uVar17 = (ulonglong)uVar1;
        iVar14 = iVar18;
        do {
          *(uint *)FVar15.Data = iVar14 + ~uVar1;
          *(int *)(FVar15.Data + 4) = iVar14;
          *(int *)(FVar15.Data + 0x14) = iVar14;
          *(int *)(FVar15.Data + 0xc) = iVar14 + 1;
          *(uint *)(FVar15.Data + 8) = iVar14 - uVar1;
          *(uint *)(FVar15.Data + 0x10) = iVar14 - uVar1;
          FVar15.Data = FVar15.Data + 0x18;
          uVar17 = uVar17 - 1;
          iVar14 = iVar14 + 1;
        } while (uVar17 != 0);
      }
      iVar18 = iVar18 + iVar16;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  iVar18 = local_1a0[0];
  if ((local_1a0[0] < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_178 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_118 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_180 = &local_118;
  local_1a0[2] = iVar18 * 4;
  local_110 = FVar5.Data;
  iStack_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_188 = L"InvertDistortionMapIndexBuffer";
  uStack_194 = 4;
  uStack_190 = 0x8001;
  local_88 = CONCAT44(4,local_1a0[2]);
  uStack_80 = CONCAT44(iStack_18c,0x8001);
  uStack_170 = 0;
  local_78 = L"InvertDistortionMapIndexBuffer";
  uStack_174 = 2;
  local_168 = 0;
  local_68 = CONCAT44(2,local_178);
  uStack_60 = 0;
  local_58 = 0;
  local_108 = local_1a0[2];
  pppuStack_70 = pppuStack_180;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&local_res8);
  FRHICommandList::DrawIndexedPrimitive
            (param_2,local_res8,0,0,(uVar2 + 1) * iVar16,0,uVar2 * uVar1 * 2,1);
  if (local_res8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// operator() @ 14d6b0670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  FShaderMapResource *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FGlobalShaderMap *pFVar7;
  FShaderType *pFVar8;
  FName FVar9;
  FRHIVertexShader *pFVar10;
  FShaderParametersMetadata *pFVar11;
  atomic<FRHIShader_*> aVar12;
  FRHIBatchedShaderParameters *pFVar13;
  int iVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  FRHIBuffer *local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_1a8;
  int local_1a0 [3];
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  wchar_t *local_188;
  undefined ***pppuStack_180;
  ERHIAccess local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FInvertDisplacementVS,FShaderMapPointerTable> local_148;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_128;
  undefined **local_118;
  FScriptContainerElement *local_110;
  int local_108;
  FScreenPassPipelineState local_100;
  undefined1 local_c0 [8];
  FString local_b8;
  FString local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined ***pppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x18),(float)*(int *)((longlong)this + 0x1c),
             0.0,(float)*(int *)((longlong)this + 0x20),(float)*(int *)((longlong)this + 0x24),
             __real_3f800000);
  pFVar7 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)FInvertDisplacementVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar7,&local_138,pFVar8,0);
  if (local_138.ShaderContent == (FShader *)0x0) {
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)FVar9,&local_b8);
    FInvertDisplacementVS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FInvertDisplacementVS::GetStaticType();
  local_148.ShaderContent = (FInvertDisplacementVS *)local_138.ShaderContent;
  local_148.ShaderMap = local_138.ShaderMap;
  pFVar7 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)FInvertDisplacementPS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar7,&local_158,pFVar8,0);
  if (local_158.ShaderContent == (FShader *)0x0) {
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c0);
    ::FName::ToString((FName *)FVar9,&local_a8);
    FInvertDisplacementPS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FInvertDisplacementPS::GetStaticType();
  local_100.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_100.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_100.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_100.VertexShader.ShaderContent = local_138.ShaderContent;
  local_100.VertexShader.ShaderMap = local_138.ShaderMap;
  local_100.PixelShader.ShaderContent = local_158.ShaderContent;
  local_100.PixelShader.ShaderMap = local_158.ShaderMap;
  local_100.StencilRef = '\0';
  SetScreenPassPipelineState(param_2,&local_100);
  pvVar3 = *(void **)this;
  pFVar10 = TShaderRefBase<FInvertDisplacementVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_148,true);
  pFVar11 = FInvertDisplacementParameters::FTypeInfo::GetStructMetadata();
  local_98.ShaderContent = local_138.ShaderContent;
  local_98.ShaderMap = local_138.ShaderMap;
  ValidateShaderParameters(&local_98,pFVar11,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar10,&(local_138.ShaderContent)->Bindings,pFVar11,
             pvVar3);
  pvVar3 = *(void **)this;
  aVar12 = (atomic<FRHIShader_*>)0x0;
  if (local_158.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_158.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar12 = (this_00->RHIShaders).Ptr[(local_158.ShaderContent)->ResourceIndex];
    if ((aVar12 == (atomic<FRHIShader_*>)0x0) &&
       (aVar12 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,(local_158.ShaderContent)->ResourceIndex,true),
       aVar12 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_158.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_158.ShaderContent,(local_158.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FInvertDisplacementPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar12 = (atomic<FRHIShader_*>)0x0;
    }
  }
  pFVar11 = FInvertDisplacementParameters::FTypeInfo::GetStructMetadata();
  local_128.ShaderContent = local_158.ShaderContent;
  local_128.ShaderMap = local_158.ShaderMap;
  ValidateShaderParameters(&local_128,pFVar11,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)aVar12,&(local_158.ShaderContent)->Bindings,pFVar11,
             pvVar3);
  pFVar13 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
  pFVar10 = TShaderRefBase<FInvertDisplacementVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_148,true);
  FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar10,pFVar13);
  FRHICommandList::SetStreamSource(param_2,0,(FRHIBuffer *)0x0,0);
  uVar1 = *(uint *)((longlong)this + 8);
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  uVar2 = *(uint *)((longlong)this + 0xc);
  iVar16 = uVar1 + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar2 * uVar1 * 6,&local_1a8,local_1a0,local_1a0 + 1);
  FVar5.Data = local_1a8.Data;
  if (uVar2 != 0) {
    uVar19 = (ulonglong)uVar2;
    FVar15.Data = local_1a8.Data;
    iVar18 = iVar16;
    do {
      if (uVar1 != 0) {
        uVar17 = (ulonglong)uVar1;
        iVar14 = iVar18;
        do {
          *(uint *)FVar15.Data = iVar14 + ~uVar1;
          *(int *)(FVar15.Data + 4) = iVar14;
          *(int *)(FVar15.Data + 0x14) = iVar14;
          *(int *)(FVar15.Data + 0xc) = iVar14 + 1;
          *(uint *)(FVar15.Data + 8) = iVar14 - uVar1;
          *(uint *)(FVar15.Data + 0x10) = iVar14 - uVar1;
          FVar15.Data = FVar15.Data + 0x18;
          uVar17 = uVar17 - 1;
          iVar14 = iVar14 + 1;
        } while (uVar17 != 0);
      }
      iVar18 = iVar18 + iVar16;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  iVar18 = local_1a0[0];
  if ((local_1a0[0] < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_178 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_118 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_180 = &local_118;
  local_1a0[2] = iVar18 * 4;
  local_110 = FVar5.Data;
  iStack_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_188 = L"InvertDistortionMapIndexBuffer";
  uStack_194 = 4;
  uStack_190 = 0x8001;
  local_88 = CONCAT44(4,local_1a0[2]);
  uStack_80 = CONCAT44(iStack_18c,0x8001);
  uStack_170 = 0;
  local_78 = L"InvertDistortionMapIndexBuffer";
  uStack_174 = 2;
  local_168 = 0;
  local_68 = CONCAT44(2,local_178);
  uStack_60 = 0;
  local_58 = 0;
  local_108 = local_1a0[2];
  pppuStack_70 = pppuStack_180;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&local_res8);
  FRHICommandList::DrawIndexedPrimitive
            (param_2,local_res8,0,0,(uVar2 + 1) * iVar16,0,uVar2 * uVar1 * 2,1);
  if (local_res8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// operator() @ 14d6b0c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread'::__l2::<lambda_1>::
operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  Type TVar1;
  bool bVar2;
  undefined4 uStack_7c;
  FScreenPassViewInfo local_78;
  <lambda_1> local_68;
  FScreenPassPipelineState local_48;
  
  TVar1 = GMaxRHIFeatureLevel;
  local_48.VertexShader.ShaderContent = *(FShader **)this;
  local_48.VertexShader.ShaderMap = *(FShaderMapBase **)((longlong)this + 8);
  local_48.PixelShader.ShaderContent = *(FShader **)((longlong)this + 0x10);
  local_48.PixelShader.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  local_48.BlendState = *(FRHIBlendState **)((longlong)this + 0x40);
  local_48.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_48.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_48.StencilRef = '\0';
  bVar2 = IsHMDHiddenAreaMaskActive();
  uStack_7c = CONCAT31(uStack_7c._1_3_,bVar2);
  local_78.StereoViewIndex = -1;
  local_78.FeatureLevel = TVar1;
  local_78._12_4_ = uStack_7c;
  local_78.InstanceCount = 1;
  local_68.PassParameters = (FRecenterSTDisplacementMapParameters **)((longlong)this + 0x38);
  local_68.RHICmdList = param_2;
  local_68.DistortImageShader =
       (TShaderMapRef<FRecenterSTDisplacementMapPS> *)((longlong)this + 0x10);
  DrawScreenPass<__FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_78,(FScreenPassTextureViewport *)((longlong)this + 0x20),
             (FScreenPassTextureViewport *)((longlong)this + 0x20),&local_48,None,&local_68);
  return;
}

// BlendDisplacementMaps_RenderThread @ 14d6b6ce0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FLensDistortionSceneViewExtension::BlendDisplacementMaps_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,
          FDisplacementMapBlendingParams *param_2,ULensDistortionModelHandlerBase *param_3,
          float param_4,float param_5,TVector2<double> *param_6,FRDGTexture **param_7)

{
  int *piVar1;
  char cVar2;
  EDisplacementMapBlendType EVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  FRDGTextureSRV *pFVar10;
  FRDGTextureUAV *pFVar11;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar12;
  FName this_01;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  FRDGTexture *local_res10;
  FRDGTexture *local_res18 [2];
  undefined8 *local_158;
  FRDGTexture *local_150;
  FRDGTexture *local_148;
  FRDGTextureSRVDesc local_140;
  FRDGTextureSRVDesc local_128;
  FRDGTextureSRVDesc local_110;
  FRDGTextureSRVDesc local_f8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  TIntVector3<int>_u_0 local_c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  undefined1 local_a8 [8];
  FString local_a0;
  TShaderRefBase<FBlendDistortionDisplacementMapCS,FShaderMapPointerTable> local_88;
  FRDGEventName local_78 [2];
  
  puVar15 = (undefined8 *)0x0;
  iVar16 = 0;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xa0,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x2c) = 0x3f800000;
    *puVar9 = &___7__TObject_VFParameters_FBlendDistortionDisplacementMapCS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar9 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar9 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar9 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar9 + 0x5c) = 0x3f800000;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar15 = puVar9;
  }
  local_158 = puVar15;
  if ((((undefined8 **)param_1->_padding_ <= &local_158) &&
      (&local_158 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_158;
  local_res10 = FRDGBuilder::CreateTexture
                          (param_1,&(*param_7)->Desc,L"DistortingDisplacement1",None);
  if (param_2->States[0].DistortionInfo.Parameters.ArrayNum == 0) {
LAB_14d6b6ea3:
    local_res10 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
  }
  else {
    if (param_3 == (ULensDistortionModelHandlerBase *)0x0) {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      goto LAB_14d6b6ea3;
    }
    (**(code **)(param_3->_padding_ + 0x2b0))
              (param_3,param_1,param_2->States,param_4,param_5,param_6,&local_res10);
  }
  local_140._padding_._0_2_ = 0;
  local_140._padding_._3_1_ = 0;
  local_140._padding_._4_4_ = 0;
  local_140._padding_._0_1_ = 0;
  local_140._padding_._2_1_ = 0;
  local_140._padding_._2_1_ = (local_res10->Desc).field_0x30;
  cVar2 = (local_res10->Desc).field_0x32;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_140._padding_._4_4_ = (uint)*(ushort *)&(local_res10->Desc).field_0x2e << 0x10;
  }
  local_140.Texture = local_res10;
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_140);
  puVar15[0xd] = pFVar10;
  if (param_2->BlendType != OneFocusOneZoom) {
    local_res18[0] =
         FRDGBuilder::CreateTexture(param_1,&(*param_7)->Desc,L"DistortingDisplacement2",None);
    if (param_2->States[1].DistortionInfo.Parameters.ArrayNum == 0) {
LAB_14d6b6f9a:
      local_res18[0] = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
    }
    else {
      if (param_3 == (ULensDistortionModelHandlerBase *)0x0) {
        if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        goto LAB_14d6b6f9a;
      }
      (**(code **)(param_3->_padding_ + 0x2b0))
                (param_3,param_1,param_2->States + 1,param_4,param_5,param_6,local_res18);
    }
    local_128._padding_._0_2_ = 0;
    local_128._padding_._3_1_ = 0;
    local_128._padding_._4_4_ = 0;
    local_128._padding_._0_1_ = 0;
    local_128._padding_._2_1_ = 0;
    local_128._padding_._2_1_ = (local_res18[0]->Desc).field_0x30;
    cVar2 = (local_res18[0]->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_128._padding_._4_4_ = (uint)*(ushort *)&(local_res18[0]->Desc).field_0x2e << 0x10;
    }
    local_128.Texture = local_res18[0];
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_128);
    puVar15[0xe] = pFVar10;
  }
  if (param_2->BlendType == TwoFocusTwoZoom) {
    local_150 = FRDGBuilder::CreateTexture
                          (param_1,&(*param_7)->Desc,L"DistortingDisplacement3",None);
    local_148 = FRDGBuilder::CreateTexture
                          (param_1,&(*param_7)->Desc,L"DistortingDisplacement4",None);
    if (param_2->States[2].DistortionInfo.Parameters.ArrayNum == 0) {
LAB_14d6b70a9:
      local_150 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
    }
    else {
      if (param_3 == (ULensDistortionModelHandlerBase *)0x0) {
        if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        goto LAB_14d6b70a9;
      }
      (**(code **)(param_3->_padding_ + 0x2b0))
                (param_3,param_1,param_2->States + 2,param_4,param_5,param_6,&local_150);
    }
    if (param_2->States[3].DistortionInfo.Parameters.ArrayNum == 0) {
LAB_14d6b7116:
      local_148 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
    }
    else {
      if (param_3 == (ULensDistortionModelHandlerBase *)0x0) {
        if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        goto LAB_14d6b7116;
      }
      (**(code **)(param_3->_padding_ + 0x2b0))
                (param_3,param_1,param_2->States + 3,param_4,param_5,param_6,&local_148);
    }
    local_110._padding_._0_2_ = 0;
    local_110._padding_._3_1_ = 0;
    local_110._padding_._4_4_ = 0;
    local_110._padding_._0_1_ = 0;
    local_110._padding_._2_1_ = 0;
    local_110.Texture = local_150;
    local_110._padding_._2_1_ = (local_150->Desc).field_0x30;
    cVar2 = (local_150->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_110._padding_._4_4_ = (uint)*(ushort *)&(local_150->Desc).field_0x2e << 0x10;
    }
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_110);
    puVar15[0xf] = pFVar10;
    local_f8._padding_._0_2_ = 0;
    local_f8._padding_._3_1_ = 0;
    local_f8._padding_._4_4_ = 0;
    local_f8._padding_._0_1_ = 0;
    local_f8._padding_._2_1_ = 0;
    local_f8.Texture = local_148;
    local_f8._padding_._2_1_ = (local_148->Desc).field_0x30;
    cVar2 = (local_148->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_f8._padding_._4_4_ = (uint)*(ushort *)&(local_148->Desc).field_0x2e << 0x10;
    }
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_f8);
    puVar15[0x10] = pFVar10;
  }
  pFVar11 = FRDGBuilder::CreateUAV(param_1,*param_7,None,PF_Unknown);
  fStack_dc = __real_3f800000;
  puVar15[0x12] = pFVar11;
  puVar15[0x11] =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  uVar17 = *(undefined8 *)&((*param_7)->Desc).field_0x24;
  iVar7 = (int)uVar17;
  local_e0 = fStack_dc / (float)iVar7;
  iVar8 = (int)((ulonglong)uVar17 >> 0x20);
  fStack_dc = fStack_dc / (float)iVar8;
  TVar5._s_0.Y = fStack_dc;
  TVar5._s_0.X = local_e0;
  (((FParameters *)(puVar15 + 2))->ThreadIdToUV).field0_0x0 = TVar5;
  local_d8 = (float)(param_2->FxFyScale).field0_0x0._s_0.X;
  fStack_d4 = (float)(param_2->FxFyScale).field0_0x0._s_0.Y;
  puVar15[3] = CONCAT44(fStack_d4,local_d8);
  *(float *)(puVar15 + 0xc) = param_2->EvalFocus;
  *(float *)((longlong)puVar15 + 100) = param_2->EvalZoom;
  EVar3 = param_2->BlendType;
  if (EVar3 == OneFocusOneZoom) goto LAB_14d6b7360;
  if (EVar3 == TwoFocusOneZoom) {
    iVar16 = 1;
LAB_14d6b72de:
    uVar17 = *(undefined8 *)&param_2->PatchCorners[0].TangentX;
    puVar15[4] = *(undefined8 *)param_2->PatchCorners;
    puVar15[5] = uVar17;
    uVar17 = *(undefined8 *)&param_2->PatchCorners[1].TangentX;
    puVar15[6] = *(undefined8 *)(param_2->PatchCorners + 1);
    puVar15[7] = uVar17;
    puVar15[8] = 0;
    puVar15[9] = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    if (EVar3 == OneFocusTwoZoom) {
      iVar16 = 2;
      goto LAB_14d6b72de;
    }
    if (EVar3 != TwoFocusTwoZoom) goto LAB_14d6b7360;
    uVar17 = *(undefined8 *)&param_2->PatchCorners[0].TangentX;
    iVar16 = 3;
    puVar15[4] = *(undefined8 *)param_2->PatchCorners;
    puVar15[5] = uVar17;
    uVar17 = *(undefined8 *)&param_2->PatchCorners[1].TangentX;
    puVar15[6] = *(undefined8 *)(param_2->PatchCorners + 1);
    puVar15[7] = uVar17;
    uVar17 = *(undefined8 *)&param_2->PatchCorners[2].TangentX;
    puVar15[8] = *(undefined8 *)(param_2->PatchCorners + 2);
    puVar15[9] = uVar17;
    uVar17._0_4_ = param_2->PatchCorners[3].X;
    uVar17._4_4_ = param_2->PatchCorners[3].Y;
    uVar18._0_4_ = param_2->PatchCorners[3].TangentX;
    uVar18._4_4_ = param_2->PatchCorners[3].TangentY;
  }
  puVar15[10] = uVar17;
  puVar15[0xb] = uVar18;
LAB_14d6b7360:
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar12 = (FShaderType *)FBlendDistortionDisplacementMapCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_b8,pFVar12,iVar16);
  if (local_b8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a8);
    ::FName::ToString((FName *)this_01,&local_a0);
    FBlendDistortionDisplacementMapCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FBlendDistortionDisplacementMapCS::GetStaticType();
  local_88.ShaderContent = (FBlendDistortionDisplacementMapCS *)local_b8.ShaderContent;
  local_88.ShaderMap = local_b8.ShaderMap;
  pFVar13 = FRDGEventName::FRDGEventName(local_78,1,L"BlendDistortionDisplacementMap");
  pFVar14 = FBlendDistortionDisplacementMapCS::FParameters::FTypeInfo::GetStructMetadata();
  local_c8._s_0.Z = 1;
  iVar7 = iVar7 + 7;
  local_c8._s_0.X = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  iVar8 = iVar8 + 7;
  local_c8._s_0.Y = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FBlendDistortionDisplacementMapCS>
            (param_1,pFVar13,Compute,&local_88,pFVar14,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_c8._s_0);
  if (local_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearDistortionState_AnyThread @ 14d6baae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::ClearDistortionState_AnyThread
          (FLensDistortionSceneViewExtension *this,ACameraActor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint local_res8 [2];
  
  lpCriticalSection = &this->DistortionStateMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
    if (*(int *)&(this->DistortionStateMap).field_0x8 !=
        *(int *)&(this->DistortionStateMap).field_0x34) {
      TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
                  *)&this->DistortionStateMap,local_res8[0],local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d6bab36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CropDisplacementMap_RenderThread @ 14d6bfa50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FLensDistortionSceneViewExtension::CropDisplacementMap_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,FRDGTexture **param_2,
          FRDGTexture **param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  FRDGTextureSRV *pFVar10;
  FRDGTextureUAV *pFVar11;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar12;
  FName this_01;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  undefined8 *puVar15;
  undefined8 local_res10;
  int iStackX_1c;
  undefined8 *local_c8;
  FRDGTextureSRVDesc local_c0;
  TIntVector3<int>_u_0 local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FCropDistortionDisplacementMapCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  puVar15 = (undefined8 *)0x0;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7__TObject_VFParameters_FCropDistortionDisplacementMapCS___FRDGAllocator__6B_;
    puVar9[3] = 0;
    puVar15 = puVar9;
  }
  local_c8 = puVar15;
  if ((((undefined8 **)param_1->_padding_ <= &local_c8) &&
      (&local_c8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  local_c0._padding_._0_2_ = 0;
  local_c0._padding_._3_1_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_c8;
  local_c0.Texture = *param_2;
  local_c0._padding_._4_4_ = 0;
  local_c0._padding_._0_1_ = 0;
  local_c0._padding_._2_1_ = 0;
  local_c0._padding_._2_1_ = ((local_c0.Texture)->Desc).field_0x30;
  cVar2 = ((local_c0.Texture)->Desc).field_0x32;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_c0._padding_._4_4_ = (uint)*(ushort *)&((local_c0.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_c0);
  ((FParameters *)(puVar15 + 2))->InDistortionMapWithOverscan = pFVar10;
  pFVar11 = FRDGBuilder::CreateUAV(param_1,*param_3,None,PF_Unknown);
  puVar15[3] = pFVar11;
  uVar3 = *(undefined8 *)&((*param_2)->Desc).field_0x24;
  uVar4 = *(undefined8 *)&((*param_3)->Desc).field_0x24;
  iVar7 = (int)uVar4;
  iStackX_1c = (int)((ulonglong)uVar3 >> 0x20);
  iVar8 = (int)((ulonglong)uVar4 >> 0x20);
  local_res10 = CONCAT44((iStackX_1c - iVar8) / 2,((int)uVar3 - iVar7) / 2);
  puVar15[4] = local_res10;
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar12 = (FShaderType *)FCropDistortionDisplacementMapCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_98,pFVar12,0);
  if (local_98.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    ::FName::ToString((FName *)this_01,&local_80);
    FCropDistortionDisplacementMapCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FCropDistortionDisplacementMapCS::GetStaticType();
  local_68.ShaderContent = (FCropDistortionDisplacementMapCS *)local_98.ShaderContent;
  local_68.ShaderMap = local_98.ShaderMap;
  pFVar13 = FRDGEventName::FRDGEventName(&local_58,1,L"CropDistortionDisplacementMap");
  pFVar14 = FCropDistortionDisplacementMapCS::FParameters::FTypeInfo::GetStructMetadata();
  local_a8._s_0.Z = 1;
  iVar7 = iVar7 + 7;
  local_a8._s_0.X = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  iVar8 = iVar8 + 7;
  local_a8._s_0.Y = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FCropDistortionDisplacementMapCS>
            (param_1,pFVar13,Compute,&local_68,pFVar14,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_a8._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// DrawDisplacementMap_RenderThread @ 14d6c10f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::DrawDisplacementMap_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,
          FLensDistortionState *param_2,ULensDistortionModelHandlerBase *param_3,float param_4,
          float param_5,TVector2<double> *param_6,FRDGTexture **param_7)

{
  FRDGTexture *pFVar1;
  
  if ((param_2->DistortionInfo).Parameters.ArrayNum != 0) {
    if (param_3 != (ULensDistortionModelHandlerBase *)0x0) {
      (**(code **)(param_3->_padding_ + 0x2b0))
                (param_3,param_1,param_2,param_4,param_5,param_6,param_7);
      return;
    }
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  pFVar1 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
  *param_7 = pFVar1;
  return;
}

// FillSTDisplacementMap_RenderThread @ 14d6c9250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,FRDGTexture **param_2,
          float param_3,FRDGTexture **param_4)

{
  int *piVar1;
  uchar *puVar2;
  char cVar3;
  FRDGTexture *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  FRDGTexture **ppFVar10;
  bool bVar11;
  ERDGPassFlags EVar12;
  int iVar13;
  undefined8 *puVar14;
  FRDGTextureSRV *pFVar15;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar16;
  wchar_t *pwVar17;
  FRDGPass *this_01;
  int iVar18;
  undefined8 *puVar19;
  undefined8 local_res18;
  undefined8 *local_b8;
  FRDGTextureSRVDesc local_b0;
  FRenderTargetBinding local_98;
  FRDGParameterStruct local_80;
  FRDGEventName local_68 [2];
  
  ppFVar10 = param_4;
  puVar19 = (undefined8 *)0x0;
  puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x140,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    puVar14[6] = 0;
    *puVar14 = &___7__TObject_VFFillSTDisplacementMapParameters___FRDGAllocator__6B_;
    puVar14[7] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar14 + 8))
    ;
    puVar19 = puVar14;
  }
  local_b8 = puVar19;
  if (((undefined8 **)param_1->_padding_ <= &local_b8) &&
     (&local_b8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar13 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar13 + 1;
  puVar2 = (uchar *)(puVar19 + 2);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar13 * 8) = local_b8;
  pFVar4 = *param_4;
  pFVar5 = *(FScriptContainerElement **)&(pFVar4->Desc).field_0x24;
  if (pFVar4 != (FRDGTexture *)0x0) {
    iVar13 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar18 = (int)pFVar5;
    if ((int)pFVar5 < iVar13) {
      iVar18 = iVar13;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar18;
    iVar13 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y;
    iVar18 = (int)((ulonglong)pFVar5 >> 0x20);
    if (iVar18 < iVar13) {
      iVar18 = iVar13;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar18;
  }
  pTVar9 = CVarLensDistortionInvertGridDensity.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_98.LoadAction = EClear;
  local_98.MipIndex = '\0';
  local_98.ArraySlice = -1;
  iVar13 = 0xff;
  if (pTVar9->ShadowedValue[1] < 0xff) {
    iVar13 = pTVar9->ShadowedValue[1];
  }
  iVar18 = 0x40;
  if (0x40 < iVar13) {
    iVar18 = iVar13;
  }
  param_4 = (FRDGTexture **)CONCAT44(iVar18,iVar18);
  *(FRDGTexture ***)puVar2 = param_4;
  local_98.ResolveTexture = (FRDGTexture *)0x0;
  local_98.Texture = pFVar4;
  bVar11 = FRenderTargetBinding::Validate(&local_98);
  if (!bVar11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Validate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                        ,0x216,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar19[8] = local_98.Texture;
  puVar19[9] = local_98.ResolveTexture;
  local_b0._padding_._0_2_ = 0;
  puVar19[10] = CONCAT44(local_98._20_4_,local_98._16_4_);
  local_b0.Texture = *param_2;
  local_b0._padding_._3_1_ = 0;
  local_b0._padding_._4_4_ = 0;
  local_b0._padding_._0_1_ = 0;
  local_b0._padding_._2_1_ = 0;
  local_b0._padding_._2_1_ = ((local_b0.Texture)->Desc).field_0x30;
  cVar3 = ((local_b0.Texture)->Desc).field_0x32;
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    local_b0._padding_._4_4_ = (uint)*(ushort *)&((local_b0.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_b0);
  fVar8 = __real_3f800000;
  puVar19[6] = pFVar15;
  puVar19[7] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  *(float *)(puVar19 + 5) = param_3;
  uVar6 = *(undefined8 *)&((*param_2)->Desc).field_0x24;
  local_res18 = CONCAT44(fVar8 / (float)(int)((ulonglong)uVar6 >> 0x20),fVar8 / (float)(int)uVar6);
  puVar19[3] = local_res18;
  uVar6 = *(undefined8 *)&((*ppFVar10)->Desc).field_0x24;
  local_res18 = CONCAT44(fVar8 / (float)(int)((ulonglong)uVar6 >> 0x20),fVar8 / (float)(int)uVar6);
  puVar19[4] = local_res18;
  this_00 = FRDGEventName::FRDGEventName(local_68,1,L"FillSTDisplacementMap");
  pFVar16 = FFillSTDisplacementMapParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,puVar2,pFVar16,this_00,Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar17 = FRDGEventName::GetTCHAR(this_00);
  EVar12 = FRDGBuilder::OverridePassFlags(param_1,pwVar17,Raster);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_80.Contents = puVar2;
  if ((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsLayoutInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                        ,0x17c,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_80.Layout.Reference = (pFVar16->Layout).Reference;
  if (local_80.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_80.Layout.Reference);
  }
  local_80.Metadata = pFVar16;
  FRDGPass::FRDGPass(this_01,this_00,&local_80,EVar12,Async);
  this_01->_padding_ =
       (longlong)
       &TRDGLambdaPass<FFillSTDisplacementMapParameters,`FLensDistortionSceneViewExtension::FillSTDisplacementMap_RenderThread'::`2'::<lambda_1>_>
        ::_vftable_;
  this_01[1]._padding_ = (longlong)puVar2;
  this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  *(FRDGTexture **)&this_01[1].FullPathIfDebug.Data.ArrayNum = pFVar4;
  this_01[1].Name.EventFormat = (wchar_t *)0x0;
  this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  *(undefined1 *)&this_01[1].Name.FormattedEventName.Data.ArrayNum = 2;
  this_01[1].ParameterStruct.Contents = puVar2;
  FRDGBuilder::ClobberPassOutputs(param_1,this_01);
  iVar13 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar13 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar13] = this_01;
  (this_01->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_01);
  if (local_68[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_68[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// HasDistortionState_AnyThread @ 14d6dd140

bool __thiscall
FLensDistortionSceneViewExtension::HasDistortionState_AnyThread
          (FLensDistortionSceneViewExtension *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->DistortionStateMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = *(int *)&(this->DistortionStateMap).field_0x8;
    iVar2 = *(int *)&(this->DistortionStateMap).field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0 < iVar1 - iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InvertDistortionMap_RenderThread @ 14d6e1100

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,FRDGTexture **param_2,
          float param_3,FRDGTexture **param_4)

{
  int *piVar1;
  uchar *puVar2;
  char cVar3;
  FRDGTexture *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  ERDGPassFlags EVar11;
  int iVar12;
  undefined8 *puVar13;
  FRDGTextureSRV *pFVar14;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar15;
  wchar_t *pwVar16;
  FRDGPass *this_01;
  int iVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined8 local_res18;
  undefined8 *local_b8;
  FRDGTextureSRVDesc local_b0;
  FRenderTargetBinding local_98;
  FRDGParameterStruct local_80;
  FRDGEventName local_68 [2];
  
  puVar18 = (undefined8 *)0x0;
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x140,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    puVar13[6] = 0;
    *puVar13 = &___7__TObject_VFInvertDisplacementParameters___FRDGAllocator__6B_;
    puVar13[7] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar13 + 8))
    ;
    puVar18 = puVar13;
  }
  local_b8 = puVar18;
  if (((undefined8 **)param_1->_padding_ <= &local_b8) &&
     (&local_b8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar12 + 1;
  puVar2 = (uchar *)(puVar18 + 2);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar12 * 8) = local_b8;
  pFVar4 = *param_4;
  pFVar5 = *(FScriptContainerElement **)&(pFVar4->Desc).field_0x24;
  if (pFVar4 != (FRDGTexture *)0x0) {
    iVar12 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar17 = (int)pFVar5;
    if ((int)pFVar5 < iVar12) {
      iVar17 = iVar12;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar17;
    iVar12 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y;
    iVar17 = (int)((ulonglong)pFVar5 >> 0x20);
    if (iVar17 < iVar12) {
      iVar17 = iVar12;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar17;
  }
  pTVar9 = CVarLensDistortionInvertGridDensity.Ref;
  bVar10 = IsInParallelRenderingThread();
  if (!bVar10) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_98.LoadAction = EClear;
  local_98.MipIndex = '\0';
  local_98.ArraySlice = -1;
  iVar12 = 0xff;
  if (pTVar9->ShadowedValue[1] < 0xff) {
    iVar12 = pTVar9->ShadowedValue[1];
  }
  iVar17 = 0x40;
  if (0x40 < iVar12) {
    iVar17 = iVar12;
  }
  iVar12 = -((int)ROUND(__real_bf000000 - (float)iVar17 * (param_3 + param_3)) >> 1);
  pFVar19 = (FScriptContainerElement *)CONCAT44(iVar12,iVar12);
  local_98.ResolveTexture = (FRDGTexture *)0x0;
  *(FScriptContainerElement **)puVar2 = pFVar19;
  local_98.Texture = pFVar4;
  bVar10 = FRenderTargetBinding::Validate(&local_98);
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Validate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                        ,0x216,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar18[8] = local_98.Texture;
  puVar18[9] = local_98.ResolveTexture;
  local_b0._padding_._0_2_ = 0;
  puVar18[10] = CONCAT44(local_98._20_4_,local_98._16_4_);
  local_b0.Texture = *param_2;
  local_b0._padding_._3_1_ = 0;
  local_b0._padding_._4_4_ = 0;
  local_b0._padding_._0_1_ = 0;
  local_b0._padding_._2_1_ = 0;
  local_b0._padding_._2_1_ = ((local_b0.Texture)->Desc).field_0x30;
  cVar3 = ((local_b0.Texture)->Desc).field_0x32;
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    local_b0._padding_._4_4_ = (uint)*(ushort *)&((local_b0.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_b0);
  fVar8 = __real_3f800000;
  puVar18[6] = pFVar14;
  puVar18[7] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  *(float *)(puVar18 + 5) =
       (float)*(int *)&((*param_2)->Desc).field_0x24 / (float)*(int *)&((*param_4)->Desc).field_0x24
  ;
  uVar6 = *(undefined8 *)&((*param_4)->Desc).field_0x24;
  local_res18 = CONCAT44(fVar8 / (float)(int)((ulonglong)uVar6 >> 0x20),fVar8 / (float)(int)uVar6);
  puVar18[3] = local_res18;
  uVar6 = *(undefined8 *)&((*param_2)->Desc).field_0x24;
  local_res18 = CONCAT44(fVar8 / (float)(int)((ulonglong)uVar6 >> 0x20),fVar8 / (float)(int)uVar6);
  puVar18[4] = local_res18;
  this_00 = FRDGEventName::FRDGEventName(local_68,1,L"InvertDistortionDisplacementMap");
  pFVar15 = FInvertDisplacementParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,puVar2,pFVar15,this_00,Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar16 = FRDGEventName::GetTCHAR(this_00);
  EVar11 = FRDGBuilder::OverridePassFlags(param_1,pwVar16,Raster);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_80.Contents = puVar2;
  if ((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsLayoutInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                        ,0x17c,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_80.Layout.Reference = (pFVar15->Layout).Reference;
  if (local_80.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_80.Layout.Reference);
  }
  local_80.Metadata = pFVar15;
  FRDGPass::FRDGPass(this_01,this_00,&local_80,EVar11,Async);
  this_01->_padding_ =
       (longlong)
       &TRDGLambdaPass<FInvertDisplacementParameters,`FLensDistortionSceneViewExtension::InvertDistortionMap_RenderThread'::`2'::<lambda_1>_>
        ::_vftable_;
  this_01[1]._padding_ = (longlong)puVar2;
  this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar19;
  *(FRDGTexture **)&this_01[1].FullPathIfDebug.Data.ArrayNum = pFVar4;
  this_01[1].Name.EventFormat = (wchar_t *)0x0;
  this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  *(undefined1 *)&this_01[1].Name.FormattedEventName.Data.ArrayNum = 2;
  this_01[1].ParameterStruct.Contents = puVar2;
  FRDGBuilder::ClobberPassOutputs(param_1,this_01);
  iVar12 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar12 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar12] = this_01;
  (this_01->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_01);
  if (local_68[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_68[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// PreRenderView_RenderThread @ 14d6e5630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::PreRenderView_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  bool bVar1;
  FLensDistortionLUT local_28;
  
  local_28.ResolutionFraction = 1.0;
  local_28.DistortionOverscan = 1.0;
  local_28.DistortingDisplacementTexture = (FRDGTexture *)0x0;
  local_28.UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  local_28.DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  local_28.DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  bVar1 = RenderViewDistortionLUT(this,param_1,(param_2->ViewActor).ActorUniqueId,&local_28);
  if (bVar1) {
    LensDistortion::SetLUTUnsafe(param_2,&local_28);
  }
  return;
}

// RecenterSTDisplacementMap_RenderThread @ 14d6e6250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,FRDGTexture **param_2,
          float param_3,FRDGTexture **param_4)

{
  int *piVar1;
  FRHIUniformBufferLayout *pFVar2;
  char cVar3;
  FRDGTexture *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  TIntPoint<int> TVar9;
  TRefCountPtr<FRHIBlendState> TVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  FRDGTextureSRV *pFVar14;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar15;
  FName FVar16;
  FRDGEventName *this_01;
  FShaderParametersMetadata *pFVar17;
  wchar_t *pwVar18;
  FRDGPass *this_02;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined1 local_res18 [8];
  ERDGPassFlags local_res20;
  undefined8 *local_148;
  FRDGTextureSRVDesc local_140;
  FRenderTargetBinding local_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_110;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_100;
  FRDGParameterStruct local_f0;
  FShader *local_d8;
  FShaderMapBase *pFStack_d0;
  FShader *local_c8;
  FShaderMapBase *pFStack_c0;
  TIntPoint<int>_u_0 local_b0;
  FRHIBlendState *local_98;
  undefined1 local_90 [8];
  FString local_88;
  FString local_78;
  FRDGEventName local_68 [2];
  
  puVar20 = (undefined8 *)0x0;
  pFVar4 = *param_4;
  uVar5 = *(undefined8 *)&(pFVar4->Desc).field_0x24;
  if (pFVar4 != (FRDGTexture *)0x0) {
    iVar12 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar21 = (int)uVar5;
    if (iVar21 < iVar12) {
      iVar21 = iVar12;
    }
    iVar12 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y;
    iVar19 = (int)((ulonglong)uVar5 >> 0x20);
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar21;
    if (iVar19 < iVar12) {
      iVar19 = iVar12;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar19;
  }
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    puVar13[4] = 0;
    *puVar13 = &___7__TObject_VFRecenterSTDisplacementMapParameters___FRDGAllocator__6B_;
    puVar13[5] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar13 + 6))
    ;
    puVar20 = puVar13;
  }
  local_148 = puVar20;
  if ((((undefined8 **)param_1->_padding_ <= &local_148) &&
      (&local_148 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  fVar8 = __real_3f800000;
  *(int *)&param_1->_padding_ = iVar12 + 1;
  pFVar2 = (FRHIUniformBufferLayout *)(puVar20 + 2);
  local_140._padding_._0_2_ = 0;
  local_140._padding_._3_1_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar12 * 8) = local_148;
  local_140._padding_._4_4_ = 0;
  local_140._padding_._0_1_ = 0;
  local_140._padding_._2_1_ = 0;
  puVar20[3] = CONCAT44(fVar8 / (float)*(int *)&((*param_2)->Desc).field_0x28,
                        fVar8 / (float)*(int *)&((*param_2)->Desc).field_0x24);
  local_140.Texture = *param_2;
  local_140._padding_._2_1_ = ((local_140.Texture)->Desc).field_0x30;
  cVar3 = ((local_140.Texture)->Desc).field_0x32;
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    local_140._padding_._4_4_ = (uint)*(ushort *)&((local_140.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_140);
  puVar20[4] = pFVar14;
  puVar20[5] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  *(float *)&pFVar2->_padding_ = param_3;
  local_128.ResolveTexture = (FRDGTexture *)0x0;
  local_128.LoadAction = EClear;
  local_128.MipIndex = '\0';
  local_128.ArraySlice = -1;
  local_128.Texture = pFVar4;
  bVar11 = FRenderTargetBinding::Validate(&local_128);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar20[6] = local_128.Texture;
  puVar20[7] = local_128.ResolveTexture;
  puVar20[8] = CONCAT44(local_128._20_4_,local_128._16_4_);
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar15 = (FShaderType *)FScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_110,pFVar15,0);
  if (local_110.ShaderContent == (FShader *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)FVar16,&local_88);
    FScreenPassVS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FScreenPassVS::GetStaticType();
  pFVar15 = (FShaderType *)FRecenterSTDisplacementMapPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_100,pFVar15,0);
  if (local_100.ShaderContent == (FShader *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_90);
    ::FName::ToString((FName *)FVar16,&local_78);
    FRecenterSTDisplacementMapPS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FRecenterSTDisplacementMapPS::GetStaticType();
  TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
  TVar9 = UE::Math::TIntPoint<int>::ZeroValue;
  pFVar6 = *(FScriptContainerElement **)&((*param_4)->Desc).field_0x24;
  local_c8 = local_100.ShaderContent;
  pFStack_c0 = local_100.ShaderMap;
  local_d8 = local_110.ShaderContent;
  pFStack_d0 = local_110.ShaderMap;
  local_b0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_98 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
  this_01 = FRDGEventName::FRDGEventName(local_68,1,L"RecenterSTDisplacementMap");
  pFVar17 = FRecenterSTDisplacementMapParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,pFVar2,pFVar17,this_01,NeverCull|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar18 = FRDGEventName::GetTCHAR(this_01);
  local_res20 = FRDGBuilder::OverridePassFlags(param_1,pwVar18,NeverCull|Raster);
  this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
  local_f0.Contents = (uchar *)pFVar2;
  if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_f0.Layout.Reference = (pFVar17->Layout).Reference;
  if (local_f0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f0.Layout.Reference);
  }
  local_f0.Metadata = pFVar17;
  FRDGPass::FRDGPass(this_02,this_01,&local_f0,local_res20,Async);
  this_02->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRecenterSTDisplacementMapParameters,`FLensDistortionSceneViewExtension::RecenterSTDisplacementMap_RenderThread'::`2'::<lambda_1>_>
        ::_vftable_;
  this_02[1]._padding_ = (longlong)local_d8;
  this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_d0;
  *(FShader **)&this_02[1].FullPathIfDebug.Data.ArrayNum = local_c8;
  this_02[1].Name.EventFormat = (wchar_t *)pFStack_c0;
  this_02[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar6;
  *(TIntPoint<int>_u_0 *)&this_02[1].Name.FormattedEventName.Data.ArrayNum =
       (TIntPoint<int>_u_0_s_0)TVar9.field0_0x0;
  this_02[1].ParameterStruct.Contents = (uchar *)pFVar6;
  this_02[1].ParameterStruct.Layout.Reference = pFVar2;
  this_02[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)TVar10.Reference;
  *(FRHIUniformBufferLayout **)&this_02[1].Flags = pFVar2;
  FRDGBuilder::ClobberPassOutputs(param_1,this_02);
  iVar12 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar12 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar12] = this_02;
  (this_02->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_02);
  if (local_68[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_68[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderViewDistortionLUT @ 14d6e9740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FLensDistortionSceneViewExtension::RenderViewDistortionLUT
          (FLensDistortionSceneViewExtension *this,FRDGBuilder *param_1,uint param_2,
          FLensDistortionLUT *param_3)

{
  ULensDistortionModelHandlerBase *this_00;
  FDisplacementMapBlendingParams *pFVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  FRDGBuilder *pFVar4;
  uint uVar5;
  uint *puVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  FTextureResource *pFVar8;
  TRefCountPtr<IPooledRenderTarget> TVar9;
  FRDGTexture *pFVar10;
  TIntPoint<int>_u_0 TVar11;
  FDisplacementMapBlendingParams *pFVar12;
  undefined1 *puVar13;
  FRHITextureDesc *pFVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  FDisplacementMapBlendingParams *this_01;
  FLensDistortionState *pFVar15;
  FDisplacementMapBlendingParams *this_02;
  longlong lVar16;
  bool bVar17;
  FRDGTexture **ppFVar18;
  FDisplacementMapBlendingParams *pFVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_3c8 [32];
  char local_388;
  TIntPoint<int>_u_0 local_380;
  TIntPoint<int>_u_0 local_378;
  FRDGBuilder *local_370;
  TIntPoint<int>_u_0 local_368;
  TIntPoint<int>_u_0 local_360;
  TIntPoint<int>_u_0 local_358;
  TIntPoint<int>_u_0 local_350;
  TIntPoint<int>_u_0 local_348;
  TIntPoint<int>_u_0 local_340;
  double local_338;
  FRHITextureDesc local_328;
  FRHITextureDesc local_2d8;
  undefined1 local_288 [24];
  float local_270;
  int local_26c;
  undefined4 local_268;
  TIntPoint<int>_u_0 local_264;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 local_254;
  void *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FRHITextureDesc local_238;
  FRHITextureDesc local_1e8;
  FDisplacementMapBlendingParams local_198;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->DistortionStateMapCriticalSection;
  local_370 = param_1;
  local_350 = (TIntPoint<int>_u_0)param_3;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)&(this->DistortionStateMap).field_0x8 !=
      *(int *)&(this->DistortionStateMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->DistortionStateMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->DistortionStateMap).field_0x38;
    }
    uVar5 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->DistortionStateMap).field_0x48 - 1U & param_2) * 4)
    ;
    if (uVar5 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar5 * 0x160 + *(longlong *)&this->DistortionStateMap);
        if (*puVar6 == param_2) {
          this_01 = (FDisplacementMapBlendingParams *)0x0;
          pFVar19 = (FDisplacementMapBlendingParams *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pFVar19 = this_01;
          }
          if (pFVar19 != (FDisplacementMapBlendingParams *)0x0) {
            local_338 = (double)pFVar19[1].EvalZoom;
            local_340 = (TIntPoint<int>_u_0)(double)pFVar19[1].EvalFocus;
            FDisplacementMapBlendingParams::FDisplacementMapBlendingParams(&local_198,pFVar19);
            TVar7 = FWeakObjectPtr::Pin((FWeakObjectPtr *)&pFVar19[1].PatchCorners[0].TangentY);
            this_00 = *(ULensDistortionModelHandlerBase **)TVar7.Object;
            *(undefined8 *)TVar7.Object = 0;
            if (local_380 != (TIntPoint<int>_u_0)0x0) {
              UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_380);
              local_380 = (TIntPoint<int>_u_0)0x0;
            }
            auVar24 = ZEXT416((uint)__real_3f800000);
            bVar17 = false;
            local_388 = '\x01';
            this_02 = this_01;
            if (this_00 != (ULensDistortionModelHandlerBase *)0x0) {
              if (pFVar19->States[0].DistortionInfo.Parameters.ArrayNum == 0) {
                bVar17 = true;
                pFVar8 = UTexture::GetResource
                                   ((UTexture *)
                                    (this_00->DistortionDisplacementMapRT).field0_0x0.DebugPtr);
                pFVar1 = (FDisplacementMapBlendingParams *)pFVar8->_padding_;
                if (pFVar1 != (FDisplacementMapBlendingParams *)0x0) {
                  pFVar12 = (FDisplacementMapBlendingParams *)0x0;
                  if (*(char *)((longlong)&(pFVar1->FxFyScale).field0_0x0 + 2) == '\0') {
                    pFVar12 = pFVar1;
                  }
                  if (pFVar12 != (FDisplacementMapBlendingParams *)0x0) {
                    FRHIResource::AddRef((FRHIResource *)pFVar12);
                    this_02 = pFVar12;
                  }
                }
                pFVar8 = UTexture::GetResource
                                   ((UTexture *)
                                    (this_00->UndistortionDisplacementMapRT).field0_0x0.DebugPtr);
                pFVar1 = (FDisplacementMapBlendingParams *)pFVar8->_padding_;
                if (pFVar1 != (FDisplacementMapBlendingParams *)0x0) {
                  pFVar12 = (FDisplacementMapBlendingParams *)0x0;
                  if (*(char *)((longlong)&(pFVar1->FxFyScale).field0_0x0 + 2) == '\0') {
                    pFVar12 = pFVar1;
                  }
                  if (pFVar12 != (FDisplacementMapBlendingParams *)0x0) {
                    FRHIResource::AddRef((FRHIResource *)pFVar12);
                    this_01 = pFVar12;
                  }
                }
              }
              local_388 = (**(code **)(this_00->_padding_ + 0x2b8))(this_00);
              if (local_388 == '\0') {
                fVar20 = ULensDistortionModelHandlerBase::ComputeInverseOverscanFactor(this_00);
                uVar21 = extraout_XMM0_Db_00;
                uVar22 = extraout_XMM0_Dc_00;
                uVar23 = extraout_XMM0_Dd_00;
              }
              else {
                fVar20 = ULensDistortionModelHandlerBase::ComputeOverscanFactor(this_00);
                uVar21 = extraout_XMM0_Db;
                uVar22 = extraout_XMM0_Dc;
                uVar23 = extraout_XMM0_Dd;
              }
              auVar24._4_4_ = uVar21;
              auVar24._0_4_ = fVar20;
              auVar24._8_4_ = uVar22;
              auVar24._12_4_ = uVar23;
            }
            if (bVar17) {
              TVar9 = CreateRenderTarget((FRHITexture *)&local_360._s_0,(wchar_t *)this_02);
              local_378 = (TIntPoint<int>_u_0)
                          FRDGBuilder::RegisterExternalTexture
                                    (local_370,(TRefCountPtr<IPooledRenderTarget> *)TVar9.Reference,
                                     None);
              if (local_360 != (TIntPoint<int>_u_0)0x0) {
                (**(code **)(*(longlong *)local_360 + 0x38))();
              }
              TVar9 = CreateRenderTarget((FRHITexture *)&local_358._s_0,(wchar_t *)this_01);
              local_368 = (TIntPoint<int>_u_0)
                          FRDGBuilder::RegisterExternalTexture
                                    (local_370,(TRefCountPtr<IPooledRenderTarget> *)TVar9.Reference,
                                     None);
              if ((longlong *)CONCAT44(local_358._s_0.Y,local_358._s_0.X) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(local_358._s_0.Y,local_358._s_0.X) + 0x38))();
              }
              local_328.Extent.field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)local_368 + 0xa4);
              local_328.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
              local_328.AliasableFormats.ArrayMax = 1;
              local_2d8.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
              local_328.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
              local_2d8.AliasableFormats.ArrayMax = 1;
              local_380 = *(TIntPoint<int>_u_0 *)((longlong)local_378 + 0xa4);
              local_328.Flags = ShaderResource|RenderTargetable;
              local_328.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
              local_328.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
              local_328.ExtData = 0;
              local_328.Depth = 1;
              local_328.ArraySize = 1;
              local_328.NumMips = '\x01';
              local_328.NumSamples = '\x01';
              local_328.Dimension = Texture2D;
              local_328.Format = PF_G32R32F;
              local_328.UAVFormat = PF_Unknown;
              local_328.FastVRAMPercentage = 0xff;
              local_328.AliasableFormats.AllocatorInstance.SecondaryData =
                   (ForElementType<EPixelFormat>)0x0;
              local_328.AliasableFormats.ArrayNum = 0;
              local_2d8.Flags = ShaderResource|RenderTargetable;
              local_2d8.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
              local_2d8.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
              local_2d8.ExtData = 0;
              local_2d8.Depth = 1;
              local_2d8.ArraySize = 1;
              local_2d8.NumMips = '\x01';
              local_2d8.NumSamples = '\x01';
              local_2d8.Dimension = Texture2D;
              local_2d8.Format = PF_G32R32F;
              local_2d8.UAVFormat = PF_Unknown;
              local_2d8.FastVRAMPercentage = 0xff;
              local_2d8.AliasableFormats.AllocatorInstance.SecondaryData =
                   (ForElementType<EPixelFormat>)0x0;
              local_2d8.AliasableFormats.ArrayNum = 0;
              local_2d8.GPUMask.GPUMask = local_328.GPUMask.GPUMask;
              local_2d8.Extent.field0_0x0 = local_380;
              pFVar10 = FRDGBuilder::CreateTexture
                                  (local_370,(FRDGTextureDesc *)&local_328,
                                   L"DistortionDisplacementMap",None);
              param_3->DistortingDisplacementTexture = pFVar10;
              TVar11 = (TIntPoint<int>_u_0)
                       FRDGBuilder::CreateTexture
                                 (local_370,(FRDGTextureDesc *)&local_2d8,
                                  L"UndistortionDisplacementMap",None);
              param_3->UndistortingDisplacementTexture = (FRDGTexture *)TVar11;
              fVar20 = __real_3f7ae148;
              if (__real_3f800000 < *(float *)(pFVar19 + 1)) {
                local_360 = (TIntPoint<int>_u_0)param_3->DistortingDisplacementTexture;
                local_380 = local_378;
              }
              else {
                local_360 = TVar11;
                TVar11 = (TIntPoint<int>_u_0)param_3->DistortingDisplacementTexture;
                local_380 = local_368;
              }
              local_378 = TVar11;
              FillSTDisplacementMap_RenderThread
                        (this,local_370,(FRDGTexture **)&local_380,
                         *(float *)(pFVar19 + 1) * __real_3f7ae148,(FRDGTexture **)&local_360);
              RecenterSTDisplacementMap_RenderThread
                        (this,local_370,(FRDGTexture **)&local_380,*(float *)(pFVar19 + 1) * fVar20,
                         (FRDGTexture **)&local_378);
              param_3->DistortionOverscan = *(float *)(pFVar19 + 1) * fVar20;
              local_378._s_0.Y = (int)(*(float *)(pFVar19 + 1) * __real_41a00000);
              local_378._s_0.X = (int)(*(float *)(pFVar19 + 1) * __real_42000000);
              (param_3->DistortionGridDimensions).field0_0x0 = local_378;
              if (local_2d8.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_2d8.AliasableFormats.AllocatorInstance.SecondaryData);
              }
              if (local_328.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_328.AliasableFormats.AllocatorInstance.SecondaryData);
              }
            }
            else {
              LeaveCriticalSection(lpCriticalSection);
              local_2d8.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
              local_2d8.AliasableFormats.ArrayMax = 1;
              local_328.AliasableFormats.ArrayMax = 1;
              local_2d8.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
              local_2d8.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
              local_328.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
              local_378 = (TIntPoint<int>_u_0)&DAT_10000000100;
              local_2d8.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_10000000100;
              local_328.ClearValue.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
              local_358._s_0.X = 0x100;
              local_358._s_0.Y = 0x100;
              local_328.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_10000000100;
              pFVar14 = &local_2d8;
              if (local_388 == '\0') {
                pFVar14 = &local_328;
              }
              local_2d8.Flags = UAV|ShaderResource;
              local_2d8.ExtData = 0;
              local_2d8.Depth = 1;
              local_2d8.ArraySize = 1;
              local_2d8.NumMips = '\x01';
              local_2d8.NumSamples = '\x01';
              local_2d8.Dimension = Texture2D;
              local_2d8.Format = PF_G32R32F;
              local_2d8.UAVFormat = PF_Unknown;
              local_2d8.FastVRAMPercentage = 0xff;
              local_2d8.AliasableFormats.AllocatorInstance.SecondaryData =
                   (ForElementType<EPixelFormat>)0x0;
              local_2d8.AliasableFormats.ArrayNum = 0;
              local_328.Flags = ShaderResource|RenderTargetable;
              local_328.ClearValue._0_8_ = FClearValueBinding::Black._0_8_;
              local_328.ClearValue.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
              local_328.ExtData = 0;
              local_328.Depth = 1;
              local_328.ArraySize = 1;
              local_328.NumMips = '\x01';
              local_328.NumSamples = '\x01';
              local_328.Dimension = Texture2D;
              local_328.Format = PF_G32R32F;
              local_328.UAVFormat = PF_Unknown;
              local_328.FastVRAMPercentage = 0xff;
              local_328.AliasableFormats.AllocatorInstance.SecondaryData =
                   (ForElementType<EPixelFormat>)0x0;
              local_328.AliasableFormats.ArrayNum = 0;
              local_2d8.GPUMask.GPUMask = local_328.GPUMask.GPUMask;
              FRHITextureDesc::FRHITextureDesc(&local_1e8,pFVar14);
              pFVar14 = &local_328;
              if (local_388 == '\0') {
                pFVar14 = &local_2d8;
              }
              FRHITextureDesc::FRHITextureDesc(&local_238,pFVar14);
              pFVar10 = FRDGBuilder::CreateTexture
                                  (local_370,(FRDGTextureDesc *)&local_1e8,
                                   L"DistortionDisplacementMap",None);
              param_3->DistortingDisplacementTexture = pFVar10;
              ppFVar18 = &param_3->UndistortingDisplacementTexture;
              pFVar10 = FRDGBuilder::CreateTexture
                                  (local_370,(FRDGTextureDesc *)&local_238,
                                   L"UndistortionDisplacementMap",None);
              fVar20 = __real_bf000000;
              if (__real_40000000 <= auVar24._0_4_) {
                auVar24._0_4_ = __real_40000000;
              }
              *ppFVar18 = pFVar10;
              if (auVar24._0_4_ <= 0.0) {
                auVar3._12_4_ = 0;
                auVar3._0_12_ = auVar24._4_12_;
                auVar24 = auVar3 << 0x20;
              }
              local_360._s_0.Y = ((int)ROUND(fVar20 - auVar24._0_4_ * __real_42800000) >> 1) * -8;
              fVar20 = (float)local_360._s_0.Y * __real_3b800000;
              local_360._s_0.X = local_360._s_0.Y;
              local_270 = FClearValueBinding::None.Value.Color[3];
              local_26c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
              local_268 = 0;
              local_248 = (void *)0x0;
              local_240 = 0;
              local_23c = 1;
              local_264 = local_360;
              local_288._0_8_ = 0x20008;
              local_288._8_8_ = FClearValueBinding::None._0_8_;
              local_288._16_8_ = FClearValueBinding::None.Value._4_8_;
              local_25c = 0x10001;
              local_258 = 0x11000101;
              local_254 = 0xff00;
              local_368 = (TIntPoint<int>_u_0)
                          FRDGBuilder::CreateTexture
                                    (local_370,(FRDGTextureDesc *)local_288,
                                     L"DistortionMapWithOverscan",None);
              pFVar4 = local_370;
              TVar11 = (TIntPoint<int>_u_0)ppFVar18;
              if (local_388 == '\0') {
                TVar11 = local_350;
                local_350 = (TIntPoint<int>_u_0)ppFVar18;
              }
                    /* WARNING: Load size is inaccurate */
              local_348._s_0 = *local_350._s_0;
                    /* WARNING: Load size is inaccurate */
              local_350._s_0 = *TVar11._s_0;
              BlendDisplacementMaps_RenderThread
                        (this,local_370,&local_198,this_00,fVar20,*(float *)(pFVar19 + 1),
                         (TVector2<double> *)&local_340._s_0,(FRDGTexture **)&local_368);
              InvertDistortionMap_RenderThread
                        (this,pFVar4,(FRDGTexture **)&local_368,fVar20,(FRDGTexture **)&local_350);
              CropDisplacementMap_RenderThread
                        (this,pFVar4,(FRDGTexture **)&local_368,(FRDGTexture **)&local_348);
              if (local_248 != (void *)0x0) {
                FMemory::Free(local_248);
              }
              if (local_238.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_238.AliasableFormats.AllocatorInstance.SecondaryData);
              }
              if (local_1e8.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_1e8.AliasableFormats.AllocatorInstance.SecondaryData);
              }
              if (local_328.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_328.AliasableFormats.AllocatorInstance.SecondaryData);
              }
              lpCriticalSection = (LPCRITICAL_SECTION)0x0;
              if (local_2d8.AliasableFormats.AllocatorInstance.SecondaryData !=
                  (ForElementType<EPixelFormat>)0x0) {
                FMemory::Free((void *)local_2d8.AliasableFormats.AllocatorInstance.SecondaryData);
                lpCriticalSection = (LPCRITICAL_SECTION)0x0;
              }
            }
            bVar17 = true;
            if (this_01 != (FDisplacementMapBlendingParams *)0x0) {
              FRHIResource::Release((FRHIResource *)this_01);
            }
            if (this_02 != (FDisplacementMapBlendingParams *)0x0) {
              FRHIResource::Release((FRHIResource *)this_02);
            }
            if (this_00 != (ULensDistortionModelHandlerBase *)0x0) {
              UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
            }
            pFVar15 = (FLensDistortionState *)&local_198.FxFyScale;
            lVar16 = 4;
            do {
              pvVar2 = *(void **)&pFVar15[-1].DistortionInfo.Parameters;
              pFVar15 = pFVar15 + -1;
              lVar16 = lVar16 + -1;
              if (pvVar2 != (void *)0x0) {
                FMemory::Free(pvVar2);
              }
            } while (lVar16 != 0);
            if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
              return true;
            }
            goto LAB_14d6e97ee;
          }
          break;
        }
        uVar5 = puVar6[0x56];
      } while (uVar5 != 0xffffffff);
    }
  }
  bVar17 = false;
LAB_14d6e97ee:
  LeaveCriticalSection(lpCriticalSection);
  return bVar17;
}

// UpdateDistortionState_AnyThread @ 14d6f5040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLensDistortionSceneViewExtension::UpdateDistortionState_AnyThread
          (FLensDistortionSceneViewExtension *this,ACameraActor *param_1,
          FDisplacementMapBlendingParams *param_2,ULensDistortionModelHandlerBase *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  UCameraComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UClass *pUVar6;
  undefined1 auStack_1d8 [32];
  TPairInitializer<unsigned_int_&&,FLensDistortionSceneViewExtension::FCameraDistortionProxy_&&>
  local_1b8;
  FCameraDistortionProxy **local_1a8;
  FDisplacementMapBlendingParams *local_1a0;
  FDisplacementMapBlendingParams local_198;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54 [8];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lpCriticalSection = &this->DistortionStateMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_198.BlendType = OneFocusOneZoom;
    local_198.PatchCorners[0].Y = 0.0;
    local_198.PatchCorners[0].TangentX = 0.0;
    local_198.PatchCorners[0].TangentY = 0.0;
    local_198.PatchCorners[1].X = 0.0;
    local_198.PatchCorners[1].Y = 0.0;
    local_198.PatchCorners[1].TangentX = 0.0;
    local_198.PatchCorners[1].TangentY = 0.0;
    local_198.PatchCorners[2].X = 0.0;
    local_198.PatchCorners[2].Y = 0.0;
    local_198.PatchCorners[2].TangentX = 0.0;
    local_198.PatchCorners[2].TangentY = 0.0;
    local_198.PatchCorners[3].X = 0.0;
    local_198.EvalFocus = 0.0;
    local_198.EvalZoom = 0.0;
    local_198.PatchCorners[0].X = 0.0;
    local_198.PatchCorners[3].Y = 0.0;
    local_198.PatchCorners[3].TangentX = 0.0;
    local_198.PatchCorners[3].TangentY = 0.0;
    memset(local_198.States,0,0xc0);
    local_198.States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
         ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_198.States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
    local_198.States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
         ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_198.States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
    local_198.States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
         ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_198.States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
    local_198.States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
         ___xmm_3ffc71c71c71c71c3ff0000000000000;
    local_198.States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = _UNK_152bc18c8;
    local_198.FxFyScale.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_198.FxFyScale.field0_0x0._s_0.Y = _UNK_150689688;
    local_68 = (float)___xmm_0000000041955c2941c71eb83f800000;
    uStack_64 = (undefined4)((ulonglong)___xmm_0000000041955c2941c71eb83f800000 >> 0x20);
    uStack_60 = (undefined4)_UNK_152bc18a8;
    uStack_5c = (undefined4)((ulonglong)_UNK_152bc18a8 >> 0x20);
    local_198.States[0].DistortionInfo.Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_198.States[0].DistortionInfo.Parameters.ArrayNum = 0;
    local_198.States[0].DistortionInfo.Parameters.ArrayMax = 0;
    local_198.States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
         ___xmm_3fe00000000000003fe0000000000000;
    local_198.States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
    local_198.States[1].DistortionInfo.Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_198.States[1].DistortionInfo.Parameters.ArrayNum = 0;
    local_198.States[1].DistortionInfo.Parameters.ArrayMax = 0;
    local_198.States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
         ___xmm_3fe00000000000003fe0000000000000;
    local_198.States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
    local_198.States[2].DistortionInfo.Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_198.States[2].DistortionInfo.Parameters.ArrayNum = 0;
    local_198.States[2].DistortionInfo.Parameters.ArrayMax = 0;
    local_198.States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
         ___xmm_3fe00000000000003fe0000000000000;
    local_198.States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
    local_198.States[3].DistortionInfo.Parameters.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_198.States[3].DistortionInfo.Parameters.ArrayNum = 0;
    local_198.States[3].DistortionInfo.Parameters.ArrayMax = 0;
    local_198.States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
         ___xmm_3fe00000000000003fe0000000000000;
    local_198.States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
    local_198.PrincipalPoint.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
    local_198.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
    local_58 = 0;
    local_54 = (undefined1  [8])0x3faa3d71;
    local_4c = 0;
    local_1b8.Key = (uint *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_54 + 4),(FObjectPtr)&local_1b8);
    FDisplacementMapBlendingParams::operator=(&local_198,param_2);
    local_1b8.Key = (uint *)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (ULensDistortionModelHandlerBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_54 + 4),(FObjectPtr)&local_1b8);
    pUVar2 = (param_1->CameraComponent).field0_0x0.DebugPtr;
    if (pUVar2 != (UCameraComponent *)0x0) {
      local_68 = pUVar2->Overscan + __real_3f800000;
      pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        uVar4 = *(undefined8 *)((longlong)&pUVar2[1]._padding_ + 4);
        uVar5 = *(undefined8 *)((longlong)&pUVar2[1]._padding_ + 4);
        uStack_64 = (undefined4)uVar4;
        uStack_60 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_5c = (undefined4)uVar5;
        local_58 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_54._0_4_ = *(undefined4 *)((longlong)&pUVar2[1]._padding_ + 4);
      }
    }
    local_1b8.Value._0_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_1a8 = &local_1b8.Value;
    local_1a0 = &local_198;
    TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_&&,FLensDistortionSceneViewExtension::FCameraDistortionProxy_&&>_>
              ((TSet<TTuple<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FLensDistortionSceneViewExtension::FCameraDistortionProxy,0>,FDefaultSetAllocator>
                *)&this->DistortionStateMap,&local_1b8,(bool *)&local_1a8);
    if (local_198.States[3].DistortionInfo.Parameters.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.States[3].DistortionInfo.Parameters.AllocatorInstance.Data);
    }
    if (local_198.States[2].DistortionInfo.Parameters.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.States[2].DistortionInfo.Parameters.AllocatorInstance.Data);
    }
    if (local_198.States[1].DistortionInfo.Parameters.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.States[1].DistortionInfo.Parameters.AllocatorInstance.Data);
    }
    if (local_198.States[0].DistortionInfo.Parameters.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.States[0].DistortionInfo.Parameters.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = param_2->States[3].DistortionInfo.Parameters.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = param_2->States[2].DistortionInfo.Parameters.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = param_2->States[1].DistortionInfo.Parameters.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = param_2->States[0].DistortionInfo.Parameters.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

