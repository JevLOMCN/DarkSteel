// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FCompileGraphicsPipelineStateTask @ 145c859d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FCompileGraphicsPipelineStateTask * __thiscall
FCompileGraphicsPipelineStateTask::FCompileGraphicsPipelineStateTask
          (FCompileGraphicsPipelineStateTask *this,FPipelineStateAsync *param_1,
          FGraphicsPipelineStateInitializer *param_2,EPSOPrecacheResult param_3,bool param_4,
          bool param_5,FPSOCompilationDebugData *param_6)

{
  code *pcVar1;
  FRHIVertexShader *pFVar2;
  FRHIMeshShader *pFVar3;
  FRHIGeometryShader *pFVar4;
  FRHIBlendState *pFVar5;
  FRHIDepthStencilState *pFVar6;
  FRHISamplerState *pFVar7;
  undefined8 uVar8;
  ETextureCreateFlags EVar9;
  ulong64 uVar10;
  uint uVar11;
  undefined7 uVar12;
  ERenderTargetStoreAction EVar13;
  ERenderTargetLoadAction EVar14;
  ERenderTargetStoreAction EVar15;
  FExclusiveDepthStencil FVar16;
  ushort uVar17;
  ESubpassHint EVar18;
  uchar uVar19;
  EConservativeRasterization EVar20;
  uchar uVar21;
  bool bVar22;
  EVRSShadingRate EVar23;
  FGraphicsPipelineStateInitializer_u_210 FVar24;
  undefined4 uVar25;
  bool bVar26;
  FBaseGraphTask *pFVar27;
  FCompileGraphicsPipelineStateTask *pFVar28;
  
  *(FPipelineStateAsync **)this = param_1;
  pFVar2 = (param_2->BoundShaderState).VertexShaderRHI;
  *(FRHIVertexDeclaration **)&this->field_0x8 = (param_2->BoundShaderState).VertexDeclarationRHI;
  *(FRHIVertexShader **)&this->field_0x10 = pFVar2;
  pFVar3 = (param_2->BoundShaderState).MeshShaderRHI;
  *(FRHIPixelShader **)&this->field_0x18 = (param_2->BoundShaderState).PixelShaderRHI;
  *(FRHIMeshShader **)&this->field_0x20 = pFVar3;
  pFVar4 = (param_2->BoundShaderState).GeometryShaderRHI;
  *(FRHIAmplificationShader **)&this->field_0x28 =
       (param_2->BoundShaderState).AmplificationShaderRHI;
  *(FRHIGeometryShader **)&this->field_0x30 = pFVar4;
  pFVar5 = param_2->BlendState;
  *(FRHIWorkGraphShader **)&this->field_0x38 = (param_2->BoundShaderState).WorkGraphMeshShaderRHI;
  *(FRHIBlendState **)&this->field_0x40 = pFVar5;
  pFVar6 = param_2->DepthStencilState;
  *(FRHIRasterizerState **)&this->field_0x48 = param_2->RasterizerState;
  *(FRHIDepthStencilState **)&this->field_0x50 = pFVar6;
  pFVar7 = (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  *(FRHISamplerState **)&this->field_0x58 =
       (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  *(FRHISamplerState **)&this->field_0x60 = pFVar7;
  uVar11 = param_2->RenderTargetsEnabled;
  uVar8 = *(undefined8 *)(param_2->RenderTargetFormats).Elements;
  *(EPrimitiveType *)&this->field_0x68 = param_2->PrimitiveType;
  *(uint *)&this->field_0x6c = uVar11;
  *(undefined8 *)&this->field_0x70 = uVar8;
  EVar9 = (param_2->RenderTargetFlags).Elements[1];
  *(ETextureCreateFlags *)&this->field_0x78 = (param_2->RenderTargetFlags).Elements[0];
  *(ETextureCreateFlags *)&this->field_0x80 = EVar9;
  EVar9 = (param_2->RenderTargetFlags).Elements[3];
  *(ETextureCreateFlags *)&this->field_0x88 = (param_2->RenderTargetFlags).Elements[2];
  *(ETextureCreateFlags *)&this->field_0x90 = EVar9;
  EVar9 = (param_2->RenderTargetFlags).Elements[5];
  *(ETextureCreateFlags *)&this->field_0x98 = (param_2->RenderTargetFlags).Elements[4];
  *(ETextureCreateFlags *)&this->field_0xa0 = EVar9;
  EVar9 = (param_2->RenderTargetFlags).Elements[7];
  *(ETextureCreateFlags *)&this->field_0xa8 = (param_2->RenderTargetFlags).Elements[6];
  *(ETextureCreateFlags *)&this->field_0xb0 = EVar9;
  uVar12 = *(undefined7 *)&param_2->field_0xb1;
  EVar9 = param_2->DepthStencilTargetFlag;
  this->field_0xb8 = param_2->DepthStencilTargetFormat;
  *(undefined7 *)&this->field_0xb9 = uVar12;
  *(ETextureCreateFlags *)&this->field_0xc0 = EVar9;
  EVar13 = param_2->DepthTargetStoreAction;
  EVar14 = param_2->StencilTargetLoadAction;
  EVar15 = param_2->StencilTargetStoreAction;
  FVar16.Value = (param_2->DepthStencilAccess).Value;
  uVar17 = param_2->NumSamples;
  EVar18 = param_2->SubpassHint;
  uVar19 = param_2->SubpassIndex;
  EVar20 = param_2->ConservativeRasterization;
  bVar26 = param_2->bDepthBounds;
  uVar21 = param_2->MultiViewCount;
  bVar22 = param_2->bHasFragmentDensityAttachment;
  this->field_0xc8 = param_2->DepthTargetLoadAction;
  this->field_0xc9 = EVar13;
  this->field_0xca = EVar14;
  this->field_0xcb = EVar15;
  *(Type *)&this->field_0xcc = FVar16.Value;
  *(ushort *)&this->field_0xd0 = uVar17;
  this->field_0xd2 = EVar18;
  this->field_0xd3 = uVar19;
  this->field_0xd4 = EVar20;
  this->field_0xd5 = bVar26;
  this->field_0xd6 = uVar21;
  this->field_0xd7 = bVar22;
  bVar26 = param_2->bAllowVariableRateShading;
  EVar23 = param_2->ShadingRate;
  FVar24 = param_2->field25_0xd2;
  uVar25 = *(undefined4 *)&param_2->field_0xd4;
  uVar10 = param_2->StatePrecachePSOHash;
  *(EPSOPrecacheResult *)&this->field_0xe8 = param_3;
  this->field_0xd8 = bVar26;
  this->field_0xd9 = EVar23;
  *(FGraphicsPipelineStateInitializer_u_210 *)&this->field_0xda = FVar24;
  *(undefined4 *)&this->field_0xdc = uVar25;
  *(ulong64 *)&this->field_0xe0 = uVar10;
  this->field_0xec = param_4;
  this->field_0xed = param_5;
  ::FString::FString((FString *)&this->field_0xf0,&param_6->PSOCompilationEventName);
  *(FRHIBreadcrumbNode **)&this->field_0x100 = param_6->BreadcrumbRoot;
  *(FRHIBreadcrumbNode **)&this->field_0x108 = param_6->BreadcrumbNode;
  pFVar27 = FPipelineStateAsync::GetCompletionEvent(*(FPipelineStateAsync **)this);
  if (pFVar27 == (FBaseGraphTask *)0x0) {
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4687553501859941469>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                        ,0xc5d,"Pipeline->GetCompletionEvent() != nullptr");
    if (bVar26) {
      pcVar1 = (code *)swi(3);
      pFVar28 = (FCompileGraphicsPipelineStateTask *)(*pcVar1)();
      return pFVar28;
    }
  }
  if ((*(ushort *)&this->field_0xda & 0x1000) != 0) {
    LOCK();
    GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + 1);
    UNLOCK();
  }
  if (*(FRHIShader **)&this->field_0x20 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x20,true);
  }
  if (*(FRHIShader **)&this->field_0x28 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x28,true);
  }
  if (*(FRHIShader **)&this->field_0x10 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x10,true);
  }
  if (*(FRHIShader **)&this->field_0x18 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x18,true);
  }
  if (*(FRHIShader **)&this->field_0x30 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x30,true);
  }
  if (*(FRHIShader **)&this->field_0x20 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x20,true);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x20);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x8);
  }
  if (*(FRHIResource **)&this->field_0x10 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x10);
  }
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x18);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x50 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x50);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x50 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(*(FRHIResource **)&this->field_0x50);
  }
  return this;
}

// CompilePSOInternal @ 145c94960

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FCompileGraphicsPipelineStateTask::CompilePSOInternal
          (FCompileGraphicsPipelineStateTask *this,EPSOPrecacheCompileType *param_1)

{
  FRHIResource **ppFVar1;
  undefined1 *puVar2;
  longlong lVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> TVar6;
  bool bVar7;
  int iVar8;
  FRHIResource *pFVar9;
  undefined8 uVar10;
  ushort uVar11;
  FStaticBasicLogRecord *pFVar12;
  FRHIResource **ppFVar13;
  ushort uVar14;
  ushort uVar15;
  undefined4 local_res8 [2];
  FMemScope local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_48;
  FRHIResource *local_40;
  FRHIResource *local_38 [2];
  
  bVar7 = false;
  local_res8[0] = 0;
  if (GRHIGlobals.SupportsMeshShadersTier0) {
    if ((*(longlong *)&this->field_0x10 != 0) || (*(longlong *)&this->field_0x20 != 0))
    goto LAB_145c94a07;
    if (1 < (byte)LogRHI._0_1_) {
      pFVar12 = &`public:_void___cdecl_FCompileGraphicsPipelineStateTask::CompilePSOInternal(FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType_const*___ptr64)___ptr64'
                 ::__l9::LOG_Static;
LAB_145c949f8:
      UE::Logging::Private::BasicLog<2>(pFVar12,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    if (*(longlong *)&this->field_0x20 != 0) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FCompileGraphicsPipelineStateTask::CompilePSOInternal(FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType_const*___ptr64)___ptr64'
                    ::__l32::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      bVar7 = true;
    }
    if (*(longlong *)&this->field_0x10 != 0) goto LAB_145c94a07;
    if (1 < (byte)LogRHI._0_1_) {
      pFVar12 = &`public:_void___cdecl_FCompileGraphicsPipelineStateTask::CompilePSOInternal(FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType_const*___ptr64)___ptr64'
                 ::__l53::LOG_Static;
      goto LAB_145c949f8;
    }
  }
  bVar7 = true;
LAB_145c94a07:
  uVar15 = *(ushort *)&this->field_0xda;
  if ((GIsRequestingExit == false) || ((uVar15 & 0x800) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_FCompileGraphicsPipelineStateTask::CompilePSOInternal(FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType_const*___ptr64)___ptr64'
                  ::__l74::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    uVar15 = *(ushort *)&this->field_0xda;
    bVar7 = true;
  }
  if (param_1 != (EPSOPrecacheCompileType *)0x0) {
    uVar11 = 3;
    if (*param_1 < MaxPri) {
      uVar11 = (ushort)*param_1;
    }
    uVar14 = 1;
    if (1 < uVar11) {
      uVar14 = uVar11;
    }
    uVar15 = uVar14 << 0xd | uVar15 & 0x1fff;
    *(ushort *)&this->field_0xda = uVar15;
  }
  FPSOCSVStatTracker::SetInFlightPriority
            ((FPSOCSVStatTracker *)(*(longlong *)this + 0x30),
             (EPSOPrecacheCompileType)(uVar15 >> 0xd));
  lVar3 = *(longlong *)this;
  QueryPerformanceCounter(&local_res18);
  bVar7 = !bVar7;
  if (bVar7) {
    FLLMScope::FLLMScope((FLLMScope *)local_res8,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,Shaders,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x110))(GDynamicRHI,&local_40,&this->field_0x8);
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope((FLLMScope *)local_res8);
    ppFVar13 = &local_40;
    pFVar9 = local_40;
  }
  else {
    local_38[0] = (FRHIResource *)0x0;
    ppFVar13 = local_38;
    pFVar9 = (FRHIResource *)0x0;
  }
  ppFVar1 = (FRHIResource **)(lVar3 + 0x38);
  if (ppFVar1 != ppFVar13) {
    this_00 = *ppFVar1;
    *ppFVar1 = pFVar9;
    *ppFVar13 = (FRHIResource *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (bVar7) {
    if (local_40 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_40);
    }
  }
  if ((!bVar7) && (local_38[0] != (FRHIResource *)0x0)) {
    FRHIResource::Release(local_38[0]);
  }
  CheckAndUpdateHitchCountStat
            (Graphics,(*(ushort *)&this->field_0xda & 0x1800) == 0,
             (FPSOCompilationDebugData *)&this->field_0xf0,local_res18.QuadPart,
             *(EPSOPrecacheResult *)&this->field_0xe8);
  if (*ppFVar1 == (FRHIResource *)0x0) {
    if (!bVar5) {
      HandlePipelineCreationFailure((FGraphicsPipelineStateInitializer *)&this->field_0x8);
    }
  }
  else {
    *(longlong *)(lVar3 + 0x48) = (*ppFVar1)[1]._padding_;
  }
  if ((*(ushort *)&this->field_0xda & 0x800) == 0) {
    if (this->field_0xec != '\0') {
      if (*(longlong *)&this->field_0xe0 == 0) {
        uVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x2d0))();
        *(undefined8 *)&this->field_0xe0 = uVar10;
      }
      TVar6.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
      bVar7 = ShouldKeepPrecachedPSOsInMemory();
      if ((bVar7) && (GPSOPrecacheKeepInMemoryUntilUsed == 2)) {
        local_48 = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))(GDynamicRHI,&this->field_0x8);
        AcquireSRWLockExclusive((PSRWLOCK)&(TVar6.Ptr)->field_0x8);
        puVar2 = &(TVar6.Ptr)->field_0x80;
        if ((*(undefined8 **)puVar2 <= &local_48) &&
           (&local_48 < *(undefined8 **)puVar2 + *(int *)&(TVar6.Ptr)->field_0x8c)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = *(int *)&(TVar6.Ptr)->field_0x88;
        if (iVar8 == *(int *)&(TVar6.Ptr)->field_0x8c) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)puVar2,(int *)&(TVar6.Ptr)->field_0x8c);
        }
        *(int *)&(TVar6.Ptr)->field_0x88 = iVar8 + 1;
        *(undefined8 *)(*(longlong *)puVar2 + (longlong)iVar8 * 8) = local_48;
        ReleaseSRWLockExclusive((PSRWLOCK)&(TVar6.Ptr)->field_0x8);
      }
    }
  }
  else {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::PrecacheFinished((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                        *)GPrecacheGraphicsPipelineCache.Ptr,
                       (FGraphicsPipelineStateInitializer *)&this->field_0x8,
                       *ppFVar1 != (FRHIResource *)0x0);
  }
  if (*(FRHIShader **)&this->field_0x20 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x20,false);
  }
  if (*(FRHIShader **)&this->field_0x28 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x28,false);
  }
  if (*(FRHIShader **)&this->field_0x10 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x10,false);
  }
  if (*(FRHIShader **)&this->field_0x18 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x18,false);
  }
  if (*(FRHIShader **)&this->field_0x30 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x30,false);
  }
  if (*(FRHIShader **)&this->field_0x20 != (FRHIShader *)0x0) {
    FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)&this->field_0x20,false);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x8);
  }
  if (*(FRHIResource **)&this->field_0x10 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x10);
  }
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x50 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x50);
  }
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x48 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x48);
  }
  if (*(FRHIResource **)&this->field_0x50 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x50);
  }
  return;
}

