// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 1452175a0

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

void __thiscall
`ISpatialUpscaler::AddDefaultUpscalePass'::__l48::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  FGlobalShaderMap *this_00;
  void *pvVar3;
  FShaderMapResource *pFVar4;
  longlong lVar5;
  FShader *this_01;
  longlong *plVar6;
  FRHIBatchedShaderParameters *pFVar7;
  code *pcVar8;
  FShaderMapBase *pFVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  FShaderType *pFVar12;
  FName this_02;
  atomic<FRHIShader_*> aVar13;
  FShaderParametersMetadata *pFVar14;
  atomic<FRHIShader_*> aVar15;
  atomic<FRHIShader_*> aVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  TIntPoint<int> TVar19;
  int iVar20;
  TIntPoint<int> TVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  atomic<FRHIShader_*> aVar25;
  undefined1 local_res8 [8];
  uint uStack_1ec;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1e8;
  ForAnyElementType local_1d8;
  int local_1d0 [2];
  undefined1 local_1c8 [40];
  FNameEntryId local_1a0;
  uint uStack_19c;
  FName FStack_198;
  undefined8 local_190;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_188;
  FShader *local_178;
  FShaderMapBase *pFStack_170;
  undefined **local_168;
  FScriptContainerElement *local_160;
  int local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_140;
  FScreenPassPipelineState local_130;
  FScreenPassPipelineState local_f0;
  undefined1 local_b0 [8];
  FString local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined ***pppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x48),(float)*(int *)((longlong)this + 0x4c),
             0.0,(float)*(int *)((longlong)this + 0x50),(float)*(int *)((longlong)this + 0x54),
             __real_3f800000);
  aVar13 = (atomic<FRHIShader_*>)0x0;
  local_1e8.ShaderContent = (FShader *)0x0;
  this_00 = *(FGlobalShaderMap **)(*(longlong *)this + 0x26c0);
  if (*(char *)((longlong)this + 8) == '\0') {
    TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
              ((TShaderMapRef<FScreenPassVS> *)&local_178,this_00);
    local_f0.VertexShader.ShaderContent = local_178;
    local_f0.VertexShader.ShaderMap = pFStack_170;
    local_f0.PixelShader.ShaderContent = *(FShader **)((longlong)this + 0x10);
    local_f0.PixelShader.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    local_f0.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_f0.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_f0.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_f0.StencilRef = '\0';
    SetScreenPassPipelineState(param_2,&local_f0);
    local_1e8.ShaderMap = pFStack_170;
    local_188.ShaderContent = local_178;
  }
  else {
    pFVar12 = (FShaderType *)FUpscaleVS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_188,pFVar12,0);
    if (local_188.ShaderContent == (FShader *)0x0) {
      this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b0);
      ::FName::ToString((FName *)this_02,&local_a8);
      FUpscaleVS::GetStaticType();
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FUpscaleVS::GetStaticType();
    local_130.PixelShader.ShaderContent = *(FShader **)((longlong)this + 0x10);
    local_130.PixelShader.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    local_130.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_130.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_130.VertexDeclaration = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_130.VertexShader.ShaderContent = local_188.ShaderContent;
    local_130.VertexShader.ShaderMap = local_188.ShaderMap;
    local_130.StencilRef = '\0';
    SetScreenPassPipelineState(param_2,&local_130);
    pvVar3 = *(void **)((longlong)this + 0x20);
    if (local_188.ShaderContent != (FShader *)0x0) {
      pFVar4 = ((local_188.ShaderMap)->Resource).Reference;
      if ((pFVar4 == (FShaderMapResource *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      aVar13 = (pFVar4->RHIShaders).Ptr[(local_188.ShaderContent)->ResourceIndex];
      if ((aVar13 == (atomic<FRHIShader_*>)0x0) &&
         (aVar13 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar4,(local_188.ShaderContent)->ResourceIndex,true),
         aVar13 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if (((local_188.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FShader::GetType(local_188.ShaderContent,(local_188.ShaderMap)->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FUpscaleVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar13 = (atomic<FRHIShader_*>)0x0;
      }
    }
    pFVar14 = FUpscaleRasterParameters::FTypeInfo::GetStructMetadata();
    local_150.ShaderContent = local_188.ShaderContent;
    local_150.ShaderMap = local_188.ShaderMap;
    ValidateShaderParameters(&local_150,pFVar14,pvVar3);
    ::SetShaderParameters
              (param_2,(FRHIGraphicsShader *)aVar13,&(local_188.ShaderContent)->Bindings,pFVar14,
               pvVar3);
    local_1e8.ShaderMap = local_188.ShaderMap;
  }
  aVar13 = (atomic<FRHIShader_*>)0x0;
  local_1e8.ShaderContent = local_188.ShaderContent;
  if ((local_188.ShaderContent == (FShader *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessUpscale.cpp"
                          ,0x193,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pvVar3 = *(void **)((longlong)this + 0x20);
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    pFVar4 = *(FShaderMapResource **)(*(longlong *)((longlong)this + 0x18) + 8);
    if ((pFVar4 == (FShaderMapResource *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                            ,0x426,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar24 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0xd4);
    aVar13 = (pFVar4->RHIShaders).Ptr[iVar24];
    if ((aVar13 == (atomic<FRHIShader_*>)0x0) &&
       (aVar13 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(pFVar4,iVar24,true),
       aVar13 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        lVar5 = *(longlong *)((longlong)this + 0x18);
        this_01 = *(FShader **)((longlong)this + 0x10);
        if ((*(longlong *)(lVar5 + 0x18) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointerTable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x9b4,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FShader::GetType(this_01,*(FShaderMapPointerTable **)(lVar5 + 0x18));
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FUpscalePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar13 = (atomic<FRHIShader_*>)0x0;
    }
  }
  pFVar14 = FUpscaleRasterParameters::FTypeInfo::GetStructMetadata();
  local_140.ShaderContent = *(FShader **)((longlong)this + 0x10);
  local_140.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_140,pFVar14,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)aVar13,
             *(FShaderParameterBindings **)((longlong)this + 0x10),pFVar14,pvVar3);
  if (*(char *)((longlong)this + 8) == '\0') {
    iVar24 = *(int *)((longlong)this + 0x54) - *(int *)((longlong)this + 0x4c);
    iVar20 = *(int *)((longlong)this + 0x50) - *(int *)((longlong)this + 0x48);
    TVar21.field0_0x0._s_0.Y = iVar24;
    TVar21.field0_0x0._s_0.X = iVar20;
    DrawRectangle(param_2,0.0,0.0,(float)iVar20,(float)iVar24,(float)*(int *)((longlong)this + 0x30)
                  ,(float)*(int *)((longlong)this + 0x34),
                  (float)(*(int *)((longlong)this + 0x38) - *(int *)((longlong)this + 0x30)),
                  (float)(*(int *)((longlong)this + 0x3c) - *(int *)((longlong)this + 0x34)),TVar21,
                  (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x28))->_s_0,&local_1e8,
                  EDRF_UseTriangleOptimization,1);
  }
  else {
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0[0] = 0;
    local_1d0[1] = 0;
    uVar1 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 0x124);
    uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 0x120);
    iVar24 = uVar2 + 1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1 * uVar2 * 6,&local_1d8,local_1d0,local_1d0 + 1);
    FVar10.Data = local_1d8.Data;
    if (uVar1 != 0) {
      uVar23 = (ulonglong)uVar1;
      FVar17.Data = local_1d8.Data;
      iVar20 = iVar24;
      do {
        if (uVar2 != 0) {
          uVar18 = (ulonglong)uVar2;
          iVar22 = iVar20;
          do {
            *(uint *)FVar17.Data = iVar22 + ~uVar2;
            *(int *)(FVar17.Data + 4) = iVar22;
            *(int *)(FVar17.Data + 0x14) = iVar22;
            *(int *)(FVar17.Data + 0xc) = iVar22 + 1;
            *(uint *)(FVar17.Data + 8) = iVar22 - uVar2;
            *(uint *)(FVar17.Data + 0x10) = iVar22 - uVar2;
            FVar17.Data = FVar17.Data + 0x18;
            uVar18 = uVar18 - 1;
            iVar22 = iVar22 + 1;
          } while (uVar18 != 0);
        }
        iVar20 = iVar20 + iVar24;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    iVar20 = local_1d0[0];
    if ((local_1d0[0] < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1a0.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
    local_168 = &___7FResourceArrayUploadArrayView__6B_;
    local_1c8._8_4_ = iVar20 * 4;
    aVar25 = (atomic<FRHIShader_*>)0x0;
    local_1c8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_1c8._24_8_ = L"LensDistortionIndexBuffer";
    local_1c8._12_4_ = 4;
    local_88 = L"LensDistortionIndexBuffer";
    local_1c8._16_4_ = 0x8001;
    local_98 = CONCAT44(4,local_1c8._8_4_);
    uStack_90 = CONCAT44(local_1c8._20_4_,0x8001);
    FStack_198.ComparisonIndex.Value = 0;
    FStack_198.Number = 0;
    uStack_19c = 2;
    local_190 = 0;
    local_78 = CONCAT44(2,local_1a0.Value);
    local_160 = FVar10.Data;
    uStack_70 = 0;
    local_68 = 0;
    local_1c8._32_8_ = &local_168;
    local_158 = local_1c8._8_4_;
    pppuStack_80 = &local_168;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)local_1c8);
    aVar13 = *(atomic<FRHIShader_*> *)&param_2->field_0xc0;
    local_168 = &___7FResourceArrayUploadInterface__6B_;
    if (aVar13 == (atomic<FRHIShader_*>)0x0) {
      aVar15 = (atomic<FRHIShader_*>)FMemStackBase::Alloc((FMemStackBase *)param_2,0x48,0x10);
      aVar13 = aVar25;
      if (aVar15 != (atomic<FRHIShader_*>)0x0) {
        aVar16 = (atomic<FRHIShader_*>)FMemStackBase::Alloc((FMemStackBase *)param_2,0xb8,0x10);
        if (aVar16 != (atomic<FRHIShader_*>)0x0) {
          *(undefined8 *)aVar16 = *(undefined8 *)&param_2->field_0xc8;
          *(FRHICommandList **)((longlong)aVar16 + 8) = param_2;
          FMemStackBase::FMemStackBase((FMemStackBase *)((longlong)aVar16 + 0x10),Small);
          FMemStackBase::FMemStackBase((FMemStackBase *)((longlong)aVar16 + 0x38),Small);
          FMemStackBase::FMemStackBase((FMemStackBase *)((longlong)aVar16 + 0x60),Small);
          FMemStackBase::FMemStackBase((FMemStackBase *)((longlong)aVar16 + 0x88),Small);
          *(undefined8 *)((longlong)aVar16 + 0xb0) = 0;
          *(atomic<FRHIShader_*> *)&param_2->field_0xc8 = aVar16;
          aVar13 = aVar16;
        }
        *(atomic<FRHIShader_*> *)aVar15 = aVar13;
        *(undefined8 *)((longlong)aVar15 + 8) = 0;
        *(undefined4 *)((longlong)aVar15 + 0x10) = 0;
        *(undefined8 *)((longlong)aVar15 + 0x18) = 0;
        *(undefined4 *)((longlong)aVar15 + 0x20) = 0;
        *(undefined8 *)((longlong)aVar15 + 0x28) = 0;
        *(undefined4 *)((longlong)aVar15 + 0x30) = 0;
        *(undefined8 *)((longlong)aVar15 + 0x38) = 0;
        *(undefined4 *)((longlong)aVar15 + 0x40) = 0;
        aVar13 = aVar15;
      }
      *(atomic<FRHIShader_*> *)&param_2->field_0xc0 = aVar13;
    }
    if (0 < *(int *)((longlong)aVar13 + 0x40) + *(int *)((longlong)aVar13 + 0x30) +
            *(int *)((longlong)aVar13 + 0x20)) {
      local_res8[0] = 0;
      bVar11 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                         (local_res8);
      if (!bVar11) {
        plVar6 = *(longlong **)&param_2->field_0xc0;
        *(undefined8 *)(*plVar6 + 0xb0) = 0;
        plVar6[1] = 0;
        plVar6[2] = (ulonglong)uStack_1ec << 0x20;
        plVar6[3] = 0;
        plVar6[4] = (ulonglong)uStack_1ec << 0x20;
        plVar6[5] = 0;
        plVar6[6] = (ulonglong)uStack_1ec << 0x20;
        plVar6[7] = 0;
        plVar6[8] = (ulonglong)uStack_1ec << 0x20;
      }
    }
    iVar20 = *(int *)((longlong)this + 0x54) - *(int *)((longlong)this + 0x4c);
    iVar22 = *(int *)((longlong)this + 0x50) - *(int *)((longlong)this + 0x48);
    pFVar7 = *(FRHIBatchedShaderParameters **)&param_2->field_0xc0;
    TVar19.field0_0x0._s_0.Y = iVar20;
    TVar19.field0_0x0._s_0.X = iVar22;
    UE::Renderer::PostProcess::SetDrawRectangleParameters
              (pFVar7,local_1e8.ShaderContent,0.0,0.0,(float)iVar22,(float)iVar20,
               (float)*(int *)((longlong)this + 0x30),(float)*(int *)((longlong)this + 0x34),
               (float)(*(int *)((longlong)this + 0x38) - *(int *)((longlong)this + 0x30)),
               (float)(*(int *)((longlong)this + 0x3c) - *(int *)((longlong)this + 0x34)),TVar19,
               (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x28))->_s_0);
    aVar13 = aVar25;
    if (local_1e8.ShaderContent != (FShader *)0x0) {
      pFVar4 = ((local_1e8.ShaderMap)->Resource).Reference;
      if ((pFVar4 == (FShaderMapResource *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      aVar13 = (pFVar4->RHIShaders).Ptr[(local_1e8.ShaderContent)->ResourceIndex];
      if (((aVar13 == (atomic<FRHIShader_*>)0x0) &&
          (aVar13 = (atomic<FRHIShader_*>)
                    FShaderMapResource::CreateShaderOrCrash
                              (pFVar4,(local_1e8.ShaderContent)->ResourceIndex,true),
          pFVar9 = local_1e8.ShaderMap, aVar13 == (atomic<FRHIShader_*>)0x0)) &&
         (aVar13 = aVar25, 4 < (byte)LogShaders._0_1_)) {
        if (((local_1e8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointerTable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x9b4,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FShader::GetType(local_1e8.ShaderContent,pFVar9->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)aVar13,pFVar7);
    FRHICommandList::SetStreamSource(param_2,0,(FRHIBuffer *)0x0,0);
    FRHICommandList::DrawIndexedPrimitive
              (param_2,(FRHIBuffer *)local_1c8._0_8_,0,0,(uVar1 + 1) * iVar24,0,uVar1 * uVar2 * 2,1)
    ;
    if ((FRHIBuffer *)local_1c8._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1c8._0_8_);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
  }
  return;
}

// AddDefaultUpscalePass @ 14521d730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __cdecl
ISpatialUpscaler::AddDefaultUpscalePass
          (FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,FViewInfo *param_2,
          FInputs *param_3,EUpscaleMethod param_4,FLensDistortionLUT *param_5)

{
  int *piVar1;
  FGlobalShaderMap *this;
  code *pcVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  TIntPoint<int>_u_0 TVar9;
  FRDGBuilder *pFVar10;
  FViewInfo *this_00;
  TVector2<float>_u_0 *pTVar11;
  TVector2<float>_u_0 *pTVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  FScreenPassTexture *pFVar17;
  FRDGTexture *pFVar18;
  TIntRect<int>_u_0 *pTVar19;
  FScreenPassTextureViewportParameters *pFVar20;
  FViewShaderParameters *pFVar21;
  FRDGTexture *pFVar22;
  undefined8 *puVar23;
  TVector2<float>_u_0 *pTVar24;
  FRDGTextureUAV *pFVar25;
  FRDGEventName *pFVar26;
  FShaderParametersMetadata *pFVar27;
  FShaderType *pFVar28;
  FName this_01;
  TVector2<float>_u_0 *pTVar29;
  int iVar30;
  longlong lVar31;
  ESharpeningQuality EVar32;
  TIntPoint<int>_u_0 TVar33;
  int iVar34;
  TIntPoint<int>_u_0 TVar35;
  float fVar36;
  undefined1 auStackY_608 [32];
  bool local_5b8;
  ERenderTargetLoadAction local_5b5;
  TShaderPermutationDomain<FUpscaleCS::FMethodDim,FUpscaleCS::FMethodSetDim,FUpscaleCS::FAlphaChannelDim,FUpscaleCS::FLensDistortionDim,FUpscaleCS::FSharpeningQualityDim>
  local_5b4 [2];
  TIntPoint<int>_u_0 local_5a8;
  FRDGBuilder *local_5a0;
  FViewInfo *local_598;
  TIntPoint<int>_u_0 local_590;
  undefined8 *local_588;
  undefined8 *local_580;
  TConsoleVariableData<float> *local_578;
  TIntPoint<int>_u_0 local_570;
  int local_568;
  int iStack_564;
  int local_560;
  int iStack_55c;
  TVector2<float>_u_0 *local_558;
  int local_550;
  int iStack_54c;
  TIntPoint<int>_u_0 local_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  TIntVector3<int>_u_0 local_538;
  FRDGTextureUAVDesc local_528;
  FRenderTargetBinding local_510;
  TIntPoint<int>_u_0 local_4f0;
  TIntPoint<int>_u_0 local_4e8;
  TIntPoint<int>_u_0 local_4d8;
  TIntPoint<int>_u_0 local_4d0;
  TIntPoint<int>_u_0 local_4c8;
  TIntVector3<int>_u_0 local_4c0;
  int local_4b4;
  int iStack_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined8 local_494;
  undefined4 local_48c;
  undefined4 local_488;
  FScreenPassTexture *local_480;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_478;
  TIntRect<int>_u_0 local_468;
  wchar_t *local_458 [3];
  undefined1 local_440 [24];
  FShaderMapBase *local_428;
  TVector2<float>_u_0 *local_420;
  TIntPoint<int>_u_0 local_418;
  TIntRect<int>_u_0 local_410;
  TIntPoint<int>_u_0 local_400;
  TIntRect<int>_u_0 local_3f8;
  FString local_3e8;
  undefined1 local_3d8 [8];
  TShaderRefBase<FUpscaleCS,FShaderMapPointerTable> local_3d0;
  TVector2<float>_u_0 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  TVector2<float>_u_0 local_398;
  TVector2<float>_u_0 TStack_390;
  TVector2<float>_u_0 local_388;
  TVector2<float>_u_0 TStack_380;
  TIntPoint<int>_u_0 local_378;
  TIntPoint<int>_u_0 TStack_370;
  TVector2<float>_u_0 local_368;
  TVector2<float>_u_0 TStack_360;
  TVector2<float>_u_0 local_358;
  TVector2<float>_u_0 TStack_350;
  TVector2<float>_u_0 local_348;
  TVector2<float>_u_0 TStack_340;
  TVector2<float>_u_0 local_338;
  TVector2<float>_u_0 TStack_330;
  TVector2<float>_u_0 local_328;
  TVector2<float>_u_0 TStack_320;
  TVector2<float>_u_0 local_318;
  TVector2<float>_u_0 TStack_310;
  TIntPoint<int>_u_0 local_308;
  TIntPoint<int>_u_0 TStack_300;
  TVector2<float>_u_0 local_2f8;
  TVector2<float>_u_0 TStack_2f0;
  TVector2<float>_u_0 local_2e8;
  TVector2<float>_u_0 TStack_2e0;
  TVector2<float>_u_0 local_2d8;
  TVector2<float>_u_0 TStack_2d0;
  TVector2<float>_u_0 local_2c8;
  TVector2<float>_u_0 TStack_2c0;
  FRDGTexture *local_2b8;
  FRHISamplerState *local_2b0;
  FRDGTexture *local_2a8;
  FRHISamplerState *local_2a0;
  TIntPoint<int>_u_0 local_298;
  uint local_290;
  FRDGTexture *local_288;
  FRHISamplerState *local_280;
  FRDGTexture *local_278;
  FRDGTexture *local_270;
  FRHISamplerState *local_268;
  float local_260;
  float local_25c;
  FRDGEventName local_258;
  FRDGEventName local_240;
  TIntRect<int> local_228;
  FViewShaderParameters local_218;
  FScreenPassTextureViewportParameters local_1f8;
  FScreenPassTextureViewportParameters local_188;
  undefined1 local_118 [24];
  float local_100;
  int local_fc;
  undefined4 local_f8;
  TIntPoint<int>_u_0 local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined2 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [24];
  float local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined2 local_94;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_608;
  local_5a0 = param_1;
  local_598 = param_2;
  local_480 = __return_storage_ptr__;
  if ((((param_3->SceneColor).Texture == (FRDGTexture *)0x0) ||
      ((*(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 8) ==
        *(int *)&(param_3->SceneColor).ViewRect.field0_0x0 &&
       (*(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 4))))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Inputs.SceneColor.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessUpscale.cpp"
                          ,0xf9,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  if (param_4 == None) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Method != EUpscaleMethod::None",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessUpscale.cpp"
                        ,0xfa,L"");
    if (bVar13) {
code_r0x00014521d81b:
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
  }
  else if ((param_4 == MAX) &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("Method != EUpscaleMethod::MAX",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessUpscale.cpp"
                               ,0xfb,L""), bVar13)) goto code_r0x00014521d81b;
  if ((param_3->Stage == MAX) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Inputs.Stage != EUpscaleStage::MAX",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessUpscale.cpp"
                          ,0xfc,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  pFVar18 = (FRDGTexture *)(param_3->OverrideOutput)._padding_;
  TVar33 = (TIntPoint<int>_u_0)(param_3->OverrideOutput)._padding_;
  local_5b5 = (param_3->OverrideOutput).LoadAction;
  TVar35 = (TIntPoint<int>_u_0)(param_3->OverrideOutput)._padding_;
  local_5a8 = TVar33;
  if ((pFVar18 == (FRDGTexture *)0x0) ||
     ((local_4f0 = TVar33, local_4e8 = TVar35, TVar35._s_0.X == TVar33._s_0.X &&
      (TVar35._s_0.Y == TVar33._s_0.Y)))) {
    pFVar18 = (param_3->SceneColor).Texture;
    local_e5 = (pFVar18->Desc).field_0x33;
    local_f4 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(pFVar18->Desc).field_0x24;
    local_550 = local_f4._s_0.X;
    iStack_54c = local_f4._s_0.Y;
    local_118._0_8_ = GFastVRamConfig.Upscale | (ShaderResource|RenderTargetable);
    local_ec = 0x10001;
    local_100 = FClearValueBinding::Black.Value.Color[3];
    local_fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_f8 = 0;
    local_118._8_8_ = FClearValueBinding::Black._0_8_;
    local_118._16_8_ = FClearValueBinding::Black.Value._4_8_;
    local_e8 = 0x101;
    local_e6 = 0;
    local_e4 = 0xff00;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 1;
    if (param_3->Stage == PrimaryToSecondary) {
      FViewInfo::GetSecondaryViewRectSize(param_2);
      QuantizeSceneBufferSize((TIntPoint<int> *)&local_548._s_0,(TIntPoint<int> *)&local_f4._s_0,0);
      TVar33 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      TVar35 = local_548;
    }
    else {
      TVar35 = (TIntPoint<int>_u_0)param_2->_padding_;
      TVar33 = (TIntPoint<int>_u_0)param_2->_padding_;
      local_f4 = TVar35;
    }
    local_5a8 = TVar33;
    local_4f0 = TVar33;
    local_4e8 = TVar35;
    pFVar18 = FRDGBuilder::CreateTexture(local_5a0,(FRDGTextureDesc *)local_118,L"Upscale",None);
    local_5b5 = EClear;
    if (pFVar18 != (FRDGTexture *)0x0) {
      iVar15 = (pFVar18->VisualizeTextureExtent).field0_0x0._s_0.X;
      iVar16 = TVar35._s_0.X;
      if (TVar35._s_0.X < iVar15) {
        iVar16 = iVar15;
      }
      iVar15 = (pFVar18->VisualizeTextureExtent).field0_0x0._s_0.Y;
      (pFVar18->VisualizeTextureExtent).field0_0x0._s_0.X = iVar16;
      iVar16 = TVar35._s_0.Y;
      if (TVar35._s_0.Y < iVar15) {
        iVar16 = iVar15;
      }
      (pFVar18->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar16;
    }
    param_2 = local_598;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
      param_2 = local_598;
    }
  }
  if (param_3->Stage == SecondaryToOutput) {
    pTVar19 = &FViewInfo::GetSecondaryViewCropRect(param_2,&local_228)->field0_0x0;
    local_4d0._s_0 = *(TIntPoint<int>_u_0_s_0 *)pTVar19;
  }
  else {
    local_4d0 = (TIntPoint<int>_u_0)
                *(TIntPoint<int>_u_0 *)&(param_3->SceneColor).ViewRect.field0_0x0;
    local_468._s_0.Max.field0_0x0 =
         (TIntPoint<int>)
         (TIntPoint<int>)(param_3->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0;
    pTVar19 = &local_468;
    local_468._0_8_ = local_4d0;
  }
  local_590 = (TIntPoint<int>_u_0)
              *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)((longlong)pTVar19 + 8))->_s_0;
  pFVar22 = (param_3->SceneColor).Texture;
  if (pFVar22 == (FRDGTexture *)0x0) {
LAB_14521da7f:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                        ,0xab,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
  }
  else {
    iVar15 = (pFVar22->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar34 = local_590._s_0.X;
    iVar16 = iVar34;
    if (iVar34 < iVar15) {
      iVar16 = iVar15;
    }
    iVar15 = (pFVar22->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar22->VisualizeTextureExtent).field0_0x0._s_0.X = iVar16;
    iVar30 = local_590._s_0.Y;
    iVar16 = iVar30;
    if (iVar30 < iVar15) {
      iVar16 = iVar15;
    }
    (pFVar22->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar16;
    if ((iVar34 == local_4d0._s_0.X) && (iVar30 == local_4d0._s_0.Y)) goto LAB_14521da7f;
  }
  local_4d8 = *(TIntPoint<int>_u_0 *)&(pFVar22->Desc).field_0x24;
  iVar34 = TVar33._s_0.X;
  iVar30 = TVar35._s_0.X;
  iVar15 = TVar33._s_0.Y;
  iVar16 = TVar35._s_0.Y;
  local_4c8 = local_590;
  if (((pFVar18 == (FRDGTexture *)0x0) || ((iVar30 == iVar34 && (iVar16 == iVar15)))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  local_570 = *(TIntPoint<int>_u_0 *)&(pFVar18->Desc).field_0x24;
  if ((param_5->DistortingDisplacementTexture == (FRDGTexture *)0x0) ||
     (param_5->UndistortingDisplacementTexture == (FRDGTexture *)0x0)) {
    local_5b8 = false;
  }
  else {
    local_5b8 = true;
  }
  local_568 = iVar34;
  iStack_564 = iVar15;
  local_560 = iVar30;
  iStack_55c = iVar16;
  if (param_3->Stage - PrimaryToOutput < 2) {
    local_578 = CVarUpscaleSharpening.Ref;
    bVar13 = true;
    bVar14 = IsInParallelRenderingThread();
    if ((!bVar14) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
    fVar36 = local_578->ShadowedValue[1];
  }
  else {
    bVar13 = false;
    fVar36 = 0.0;
  }
  uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
  local_3b8 = (TVector2<float>_u_0)0x0;
  local_3a8 = 0;
  uStack_3a0 = CONCAT71(uStack_3a0._1_7_,1);
  pFVar20 = GetScreenPassTextureViewportParameters
                      (&local_1f8,(FScreenPassTextureViewport *)&local_4d8._s_0);
  local_398 = (pFVar20->Extent).field0_0x0;
  TStack_390 = (pFVar20->ExtentInverse).field0_0x0;
  local_388 = (pFVar20->ScreenPosToViewportScale).field0_0x0;
  TStack_380 = (pFVar20->ScreenPosToViewportBias).field0_0x0;
  local_378 = (pFVar20->ViewportMin).field0_0x0;
  TStack_370 = (pFVar20->ViewportMax).field0_0x0;
  local_358 = (pFVar20->UVViewportMin).field0_0x0;
  TStack_350 = (pFVar20->UVViewportMax).field0_0x0;
  local_368 = (pFVar20->ViewportSize).field0_0x0;
  TStack_360 = (pFVar20->ViewportSizeInverse).field0_0x0;
  local_338 = (pFVar20->UVViewportBilinearMin).field0_0x0;
  TStack_330 = (pFVar20->UVViewportBilinearMax).field0_0x0;
  local_348 = (pFVar20->UVViewportSize).field0_0x0;
  TStack_340 = (pFVar20->UVViewportSizeInverse).field0_0x0;
  pFVar20 = GetScreenPassTextureViewportParameters
                      (&local_188,(FScreenPassTextureViewport *)&local_570._s_0);
  this_00 = local_598;
  pTVar7 = CVarUpscaleSoftness.Ref;
  local_2b0 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  local_2a0 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  local_328 = (pFVar20->Extent).field0_0x0;
  TStack_320 = (pFVar20->ExtentInverse).field0_0x0;
  local_318 = (pFVar20->ScreenPosToViewportScale).field0_0x0;
  TStack_310 = (pFVar20->ScreenPosToViewportBias).field0_0x0;
  local_308 = (pFVar20->ViewportMin).field0_0x0;
  TStack_300 = (pFVar20->ViewportMax).field0_0x0;
  local_2e8 = (pFVar20->UVViewportMin).field0_0x0;
  TStack_2e0 = (pFVar20->UVViewportMax).field0_0x0;
  local_2f8 = (pFVar20->ViewportSize).field0_0x0;
  TStack_2f0 = (pFVar20->ViewportSizeInverse).field0_0x0;
  local_2c8 = (pFVar20->UVViewportBilinearMin).field0_0x0;
  TStack_2c0 = (pFVar20->UVViewportBilinearMax).field0_0x0;
  local_2d8 = (pFVar20->UVViewportSize).field0_0x0;
  TStack_2d0 = (pFVar20->UVViewportSizeInverse).field0_0x0;
  local_2b8 = param_5->DistortingDisplacementTexture;
  local_2a8 = param_5->UndistortingDisplacementTexture;
  local_298 = (param_5->DistortionGridDimensions).field0_0x0;
  local_290 = *(uint *)(local_598->_padding_ + 0x60) >> 0x1f;
  local_288 = (param_3->SceneColor).Texture;
  local_280 = TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  local_268 = TStaticStateRHI<TStaticSamplerState<0,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  local_278 = local_288;
  local_270 = local_288;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  local_260 = pTVar7->ShadowedValue[1];
  if (__real_3f800000 <= pTVar7->ShadowedValue[1]) {
    local_260 = __real_3f800000;
  }
  if (local_260 <= 0.0) {
    local_260 = 0.0;
  }
  local_25c = fVar36;
  pFVar21 = FViewInfo::GetShaderParameters(this_00,&local_218);
  pTVar8 = CVarUpscaleComputeEnabled.Ref;
  local_458[0] = L"PrimaryToSecondary";
  local_458[1] = L"PrimaryToOutput";
  local_458[2] = L"SecondaryToOutput";
  local_3b8._s_0.X = (float)*(undefined4 *)&(pFVar21->View).field_0x0;
  local_3b8._s_0.Y = (float)*(undefined4 *)&(pFVar21->View).field_0x4;
  uStack_3b0 = *(undefined8 *)&(pFVar21->View).field_0x8;
  local_3a8 = *(undefined8 *)&pFVar21->InstancedView;
  uStack_3a0 = *(undefined8 *)&(pFVar21->InstancedView).field_0x8;
  local_578 = (TConsoleVariableData<float> *)local_458[param_3->Stage];
  if (bVar13) {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
    if ((0 < pTVar8->ShadowedValue[1]) && (this_00->bUseComputePasses != false)) {
      pFVar22 = pFVar18;
      TVar33 = (TIntPoint<int>_u_0)pFVar18;
      if ((*(uint *)&pFVar18->Desc >> 0x11 & 1) == 0) {
        local_a4 = *(undefined8 *)&(pFVar18->Desc).field_0x24;
        local_540 = (undefined4)local_a4;
        uStack_53c = SUB84(local_a4,4);
        local_b0 = FClearValueBinding::None.Value.Color[3];
        local_ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_a8 = 0;
        local_95 = (pFVar18->Desc).field_0x33;
        local_96 = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_7c = 1;
        local_c8._0_8_ = 0x20008;
        local_c8._8_8_ = FClearValueBinding::None._0_8_;
        local_c8._16_8_ = FClearValueBinding::None.Value._4_8_;
        local_9c = 0x10001;
        local_98 = 0x101;
        local_94 = 0xff00;
        pFVar22 = FRDGBuilder::CreateTexture
                            (local_5a0,(FRDGTextureDesc *)local_c8,L"SecondaryUpscalerOutput",None);
        TVar33 = (TIntPoint<int>_u_0)pFVar22;
        if (local_88 != (void *)0x0) {
          local_590 = (TIntPoint<int>_u_0)pFVar22;
          FMemory::Free(local_88);
          TVar33 = local_590;
        }
      }
      local_590 = TVar33;
      pFVar10 = local_5a0;
      puVar23 = FMemStackBase::Alloc((FMemStackBase *)&local_5a0->_padding_,0x180,0x10);
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar13) {
          pcVar2 = (code *)swi(3);
          pFVar17 = (FScreenPassTexture *)(*pcVar2)();
          return pFVar17;
        }
      }
      else {
        *(undefined1 *)(puVar23 + 3) = 1;
        *puVar23 = &___7__TObject_VFParameters_FUpscaleCS___FRDGAllocator__6B_;
        puVar23[2] = 0;
        puVar23[4] = 0;
        puVar23[0x22] = 0;
        puVar23[0x23] = 0;
        puVar23[0x24] = 0;
        puVar23[0x25] = 0;
        puVar23[0x28] = 0;
        puVar23[0x29] = 0;
        puVar23[0x2a] = 0;
        puVar23[0x2b] = 0;
        puVar23[0x2c] = 0;
        puVar23[0x2f] = 0;
        *(undefined1 *)(puVar23 + 5) = 1;
      }
      local_588 = puVar23;
      if ((((undefined8 **)pFVar10->_padding_ <= &local_588) &&
          (&local_588 <
           (undefined8 **)pFVar10->_padding_ + *(int *)((longlong)&pFVar10->_padding_ + 4))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FScreenPassTexture *)(*pcVar2)();
        return pFVar17;
      }
      iVar15 = (int)pFVar10->_padding_;
      piVar1 = (int *)((longlong)&pFVar10->_padding_ + 4);
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&pFVar10->_padding_,piVar1);
      }
      local_558 = (TVector2<float>_u_0 *)(puVar23 + 2);
      *(int *)&pFVar10->_padding_ = iVar15 + 1;
      *(undefined8 **)(pFVar10->_padding_ + (longlong)iVar15 * 8) = local_588;
      lVar31 = 2;
      pTVar11 = local_558;
      pTVar12 = &local_3b8;
      do {
        pTVar29 = pTVar12;
        pTVar24 = pTVar11;
        TVar3 = pTVar29[1];
        TVar4 = pTVar29[2];
        TVar5 = pTVar29[3];
        *pTVar24 = *pTVar29;
        pTVar24[1] = TVar3;
        TVar3 = pTVar29[4];
        TVar6 = pTVar29[5];
        pTVar24[2] = TVar4;
        pTVar24[3] = TVar5;
        TVar4 = pTVar29[6];
        TVar5 = pTVar29[7];
        pTVar24[4] = TVar3;
        pTVar24[5] = TVar6;
        TVar3 = pTVar29[8];
        TVar6 = pTVar29[9];
        pTVar24[6] = TVar4;
        pTVar24[7] = TVar5;
        TVar4 = pTVar29[10];
        TVar5 = pTVar29[0xb];
        pTVar24[8] = TVar3;
        pTVar24[9] = TVar6;
        TVar3 = pTVar29[0xc];
        TVar6 = pTVar29[0xd];
        pTVar24[10] = TVar4;
        pTVar24[0xb] = TVar5;
        TVar4 = pTVar29[0xe];
        TVar5 = pTVar29[0xf];
        pTVar24[0xc] = TVar3;
        pTVar24[0xd] = TVar6;
        pTVar24[0xe] = TVar4;
        pTVar24[0xf] = TVar5;
        lVar31 = lVar31 + -1;
        pTVar11 = pTVar24 + 0x10;
        pTVar12 = pTVar29 + 0x10;
      } while (lVar31 != 0);
      TVar3 = pTVar29[0x11];
      local_528._padding_._1_1_ = 0;
      TVar4 = pTVar29[0x12];
      TVar5 = pTVar29[0x13];
      pTVar24[0x10] = pTVar29[0x10];
      pTVar24[0x11] = TVar3;
      TVar3 = pTVar29[0x14];
      TVar6 = pTVar29[0x15];
      pTVar24[0x12] = TVar4;
      pTVar24[0x13] = TVar5;
      TVar4 = pTVar29[0x16];
      TVar5 = pTVar29[0x17];
      pTVar24[0x14] = TVar3;
      pTVar24[0x15] = TVar6;
      TVar3 = pTVar29[0x18];
      TVar6 = pTVar29[0x19];
      pTVar24[0x16] = TVar4;
      pTVar24[0x17] = TVar5;
      TVar4 = pTVar29[0x1a];
      TVar5 = pTVar29[0x1b];
      pTVar24[0x18] = TVar3;
      pTVar24[0x19] = TVar6;
      pTVar24[0x1a] = TVar4;
      pTVar24[0x1b] = TVar5;
      local_528._padding_._0_1_ = (pFVar22->Desc).field_0x34;
      local_528._padding_._2_4_ = 0;
      local_528._padding_._6_1_ = 0;
      local_528._padding_._0_1_ = 0;
      local_528.Texture = pFVar22;
      pFVar25 = FRDGBuilder::CreateUAV(pFVar10,&local_528,None);
      *(uint *)(puVar23 + 0x2e) = (uint)param_4;
      puVar23[0x2f] = pFVar25;
      pTVar8 = CVarUpscaleSharpeningQuality.Ref;
      bVar13 = IsInParallelRenderingThread();
      if ((!bVar13) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FScreenPassTexture *)(*pcVar2)();
        return pFVar17;
      }
      iVar15 = 3;
      if (pTVar8->ShadowedValue[1] < 3) {
        iVar15 = pTVar8->ShadowedValue[1];
      }
      EVar32 = Off;
      if (0 < iVar15) {
        EVar32 = (ESharpeningQuality)iVar15;
      }
      if (fVar36 == 0.0) {
        EVar32 = Off;
      }
      local_5b4[0].Tail.Tail.DimensionValue = IsPostProcessingWithAlphaChannelSupported();
      local_5b4[0].Tail.Tail.Tail.DimensionValue = local_5b8;
      local_5b4[0].DimensionValue = param_4;
      local_5b4[0].Tail.DimensionValue = None;
      local_5b4[0].Tail.Tail.Tail.Tail.DimensionValue = EVar32;
      TShaderMapRef<FUpscaleCS>::TShaderMapRef<FUpscaleCS>
                ((TShaderMapRef<FUpscaleCS> *)&local_3d0,local_598->ShaderMap,local_5b4);
      iVar15 = (local_560 - local_568) + 0xf;
      iVar16 = (iStack_55c - iStack_564) + 0xf;
      pFVar26 = FRDGEventName::FRDGEventName
                          (&local_258,L"Upscale(CS %s Method=%d%s%s) %dx%d -> %dx%d");
      pFVar27 = FUpscaleCS::FParameters::FTypeInfo::GetStructMetadata();
      pFVar10 = local_5a0;
      local_538._s_0.Z = 1;
      local_538._s_0.X = (int)((iVar15 >> 0x1f & 0xfU) + iVar15) >> 4;
      local_538._s_0.Y = (int)((iVar16 >> 0x1f & 0xfU) + iVar16) >> 4;
      FComputeShaderUtils::AddPass<FUpscaleCS>
                (local_5a0,pFVar26,Compute,&local_3d0,pFVar27,(FParameters *)&local_558->_s_0,
                 (TIntVector3<int> *)&local_538._s_0);
      if (local_258.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_258.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_49c = 0;
      local_48c = 0;
      local_4ac = 0;
      local_4a0 = 0;
      local_4c0._s_0.X = local_560 - local_568;
      local_4b4 = local_568;
      iStack_4b0 = iStack_564;
      local_4c0._s_0.Y = iStack_55c - iStack_564;
      local_4a8 = CONCAT44(iStack_564,local_568);
      local_494 = 1;
      local_488 = 1;
      local_4c0._s_0.Z = 1;
      AddCopyTexturePass(pFVar10,(FRDGTexture *)local_590,pFVar18,
                         (FRHICopyTextureInfo *)&local_4c0._s_0);
      TVar33 = local_5a8;
      goto LAB_14521e79f;
    }
  }
  pFVar10 = local_5a0;
  puVar23 = FMemStackBase::Alloc((FMemStackBase *)&local_5a0->_padding_,0x270,0x10);
  if (puVar23 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
  }
  else {
    *(undefined1 *)(puVar23 + 3) = 1;
    *puVar23 = &___7__TObject_VFUpscaleRasterParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar23 + 5) = 1;
    puVar23[2] = 0;
    puVar23[4] = 0;
    puVar23[0x22] = 0;
    puVar23[0x23] = 0;
    puVar23[0x24] = 0;
    puVar23[0x25] = 0;
    puVar23[0x28] = 0;
    puVar23[0x29] = 0;
    puVar23[0x2a] = 0;
    puVar23[0x2b] = 0;
    puVar23[0x2c] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar23 + 0x2e));
  }
  local_580 = puVar23;
  if ((((undefined8 **)pFVar10->_padding_ <= &local_580) &&
      (&local_580 < (undefined8 **)pFVar10->_padding_ + *(int *)((longlong)&pFVar10->_padding_ + 4))
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  iVar15 = (int)pFVar10->_padding_;
  piVar1 = (int *)((longlong)&pFVar10->_padding_ + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar10->_padding_,piVar1);
  }
  local_558 = (TVector2<float>_u_0 *)(puVar23 + 2);
  *(int *)&pFVar10->_padding_ = iVar15 + 1;
  lVar31 = 2;
  *(undefined8 **)(pFVar10->_padding_ + (longlong)iVar15 * 8) = local_580;
  pTVar11 = local_558;
  pTVar12 = &local_3b8;
  do {
    pTVar29 = pTVar12;
    pTVar24 = pTVar11;
    TVar3 = pTVar29[1];
    TVar4 = pTVar29[2];
    TVar5 = pTVar29[3];
    *pTVar24 = *pTVar29;
    pTVar24[1] = TVar3;
    TVar3 = pTVar29[4];
    TVar6 = pTVar29[5];
    pTVar24[2] = TVar4;
    pTVar24[3] = TVar5;
    TVar4 = pTVar29[6];
    TVar5 = pTVar29[7];
    pTVar24[4] = TVar3;
    pTVar24[5] = TVar6;
    TVar3 = pTVar29[8];
    TVar6 = pTVar29[9];
    pTVar24[6] = TVar4;
    pTVar24[7] = TVar5;
    TVar4 = pTVar29[10];
    TVar5 = pTVar29[0xb];
    pTVar24[8] = TVar3;
    pTVar24[9] = TVar6;
    TVar3 = pTVar29[0xc];
    TVar6 = pTVar29[0xd];
    pTVar24[10] = TVar4;
    pTVar24[0xb] = TVar5;
    TVar4 = pTVar29[0xe];
    TVar5 = pTVar29[0xf];
    pTVar24[0xc] = TVar3;
    pTVar24[0xd] = TVar6;
    pTVar24[0xe] = TVar4;
    pTVar24[0xf] = TVar5;
    lVar31 = lVar31 + -1;
    pTVar11 = pTVar24 + 0x10;
    pTVar12 = pTVar29 + 0x10;
  } while (lVar31 != 0);
  TVar3 = pTVar29[0x11];
  TVar4 = pTVar29[0x12];
  TVar5 = pTVar29[0x13];
  local_510.MipIndex = '\0';
  pTVar24[0x10] = pTVar29[0x10];
  pTVar24[0x11] = TVar3;
  TVar3 = pTVar29[0x14];
  TVar6 = pTVar29[0x15];
  pTVar24[0x12] = TVar4;
  pTVar24[0x13] = TVar5;
  TVar4 = pTVar29[0x16];
  TVar5 = pTVar29[0x17];
  pTVar24[0x14] = TVar3;
  pTVar24[0x15] = TVar6;
  TVar3 = pTVar29[0x18];
  TVar6 = pTVar29[0x19];
  pTVar24[0x16] = TVar4;
  pTVar24[0x17] = TVar5;
  TVar4 = pTVar29[0x1a];
  TVar5 = pTVar29[0x1b];
  pTVar24[0x18] = TVar3;
  pTVar24[0x19] = TVar6;
  pTVar24[0x1a] = TVar4;
  pTVar24[0x1b] = TVar5;
  local_510.ResolveTexture = (FRDGTexture *)0x0;
  local_510.LoadAction = local_5b5;
  local_510.ArraySlice = -1;
  local_510.Texture = pFVar18;
  bVar13 = FRenderTargetBinding::Validate(&local_510);
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  puVar23[0x2e] = local_510.Texture;
  puVar23[0x2f] = local_510.ResolveTexture;
  puVar23[0x30] =
       CONCAT44(local_510._20_4_,
                CONCAT22(local_510.ArraySlice,CONCAT11(local_510.MipIndex,local_510.LoadAction)));
  bVar13 = IsPostProcessingWithAlphaChannelSupported();
  TVar9 = local_5a8;
  local_5a8._s_0.X._1_3_ = 0;
  local_5a8._s_0.X._0_1_ = bVar13;
  local_5a8._4_4_ = TVar9._s_0.Y;
  this = local_598->ShaderMap;
  if ((Area < param_4) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar13)) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar17;
  }
  iVar15 = local_5a8._0_4_ + (uint)param_4 * 2;
  pFVar28 = (FShaderType *)FUpscalePS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_478,pFVar28,iVar15);
  if (local_478.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3d8);
    ::FName::ToString((FName *)this_01,&local_3e8);
    FUpscalePS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar17;
    }
  }
  FUpscalePS::GetStaticType();
  pTVar11 = local_558;
  local_440._0_8_ = local_598;
  local_440._16_8_ = local_478.ShaderContent;
  local_428 = local_478.ShaderMap;
  local_418 = local_4d8;
  local_410._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_4d0;
  local_410._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_4c8;
  local_400 = local_570;
  local_3f8._4_4_ = iStack_564;
  local_3f8._0_4_ = local_568;
  local_3f8._12_4_ = iStack_55c;
  local_3f8._8_4_ = local_560;
  local_440[8] = local_5b8;
  local_420 = local_558;
  pFVar26 = FRDGEventName::FRDGEventName(&local_240,L"Upscale(%s Method=%d%s%s) %dx%d -> %dx%d");
  pFVar27 = FUpscaleRasterParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FUpscaleRasterParameters,_ISpatialUpscaler::AddDefaultUpscalePass_::__l48::<lambda_1>_>
            (local_5a0,pFVar26,pFVar27,(FUpscaleRasterParameters *)&pTVar11->_s_0,Raster,
             (<lambda_1> *)local_440);
  if (local_240.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.FormattedEventName.Data.AllocatorInstance.Data);
  }
LAB_14521e79f:
  local_480->Texture = pFVar18;
  (local_480->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar33;
  ((TIntPoint<int>_u_0 *)((longlong)&(local_480->ViewRect).field0_0x0 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)TVar35;
  return local_480;
}

