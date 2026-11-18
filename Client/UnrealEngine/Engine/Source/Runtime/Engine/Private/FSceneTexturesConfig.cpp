// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// BuildSceneColorAndDepthFlags @ 148519ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FSceneTexturesConfig::BuildSceneColorAndDepthFlags(FSceneTexturesConfig *this)

{
  FStaticShaderPlatform FVar1;
  uint uVar2;
  ETextureCreateFlags EVar3;
  bool bVar4;
  ETextureCreateFlags EVar5;
  
  GetSceneColorFormatAndCreateFlags
            (this->FeatureLevel,this->bRequiresAlphaChannel,this->ExtraSceneColorCreateFlags,
             this->NumSamples,this->bMemorylessMSAA,&this->ColorFormat,&this->ColorCreateFlags);
  EVar3 = this->ExtraSceneDepthCreateFlags;
  uVar2 = this->NumSamples;
  EVar5 = EVar3 | (InputAttachmentRead|ShaderResource|DepthStencilTargetable);
  if (this->bKeepDepthContent == 0) {
LAB_148519d3a:
    EVar5 = EVar3 | (Memoryless|InputAttachmentRead|ShaderResource|DepthStencilTargetable);
  }
  else if (1 < uVar2) {
    if (this->bMemorylessMSAA == 0) goto LAB_148519d52;
    FVar1.Platform = this->ShaderPlatform;
    bVar4 = IsMobilePlatform(FVar1);
    if (bVar4) {
      bVar4 = MobileUsesFullDepthPrepass(FVar1);
      if (bVar4) goto LAB_148519d52;
    }
    goto LAB_148519d3a;
  }
  if ((uVar2 == 1) && (GRHIGlobals.SupportsDepthUAV != false)) {
    EVar5 = EVar5 | UAV;
  }
LAB_148519d52:
  this->DepthCreateFlags = EVar5;
  return;
}

// GetEditorPrimitiveNumSamples @ 14852a500

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl FSceneTexturesConfig::GetEditorPrimitiveNumSamples(Type param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (((int)param_1 < 3) || (!GRHIGlobals.SupportsMSAADepthSampleAccess)) {
    return 1;
  }
  pTVar7 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)
             (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.MSAA.CompositingSampleCount",1);
    pTVar6 = pTVar7;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    ::CVar = pTVar6;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar6 = ::CVar;
  bVar2 = IsInParallelGameThread();
  if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
    pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  uVar1 = *(uint *)((longlong)pTVar6->ShadowedValue + (longlong)pTVar7->ShadowedValue);
  if (1 < uVar1) {
    if (2 < uVar1) {
      uVar3 = 8;
      if (uVar1 < 5) {
        uVar3 = 4;
      }
      return uVar3;
    }
    return 2;
  }
  return 1;
}

// GetGBufferRenderTargetsInfo @ 14852a9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FSceneTexturesConfig::GetGBufferRenderTargetsInfo
          (FSceneTexturesConfig *this,FGraphicsPipelineRenderTargetsInfo *param_1,
          EGBufferLayout param_2)

{
  EShaderPlatform EVar1;
  bool bVar2;
  bool bVar3;
  uchar uVar4;
  FGBufferBindings *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  param_1->NumSamples = (ushort)this->NumSamples;
  bVar2 = true;
  (param_1->RenderTargetFormats).Elements[0] = this->ColorFormat;
  uVar7 = 1;
  (param_1->RenderTargetFlags).Elements[0] = this->ColorCreateFlags;
  if (this->bIsUsingGBuffers == 0) {
    bVar3 = IsUsingBasePassVelocity((FStaticShaderPlatform)this->ShaderPlatform);
    if (bVar3) {
      uVar7 = 2;
      (param_1->RenderTargetFormats).Elements[1] = this->GBufferBindings[0].GBufferVelocity.Format;
      (param_1->RenderTargetFlags).Elements[1] = this->GBufferBindings[0].GBufferVelocity.Flags;
    }
  }
  else {
    pFVar5 = this->GBufferBindings + (int)param_2;
    uVar6 = (pFVar5->GBufferA).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferA).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferA).Index] =
           (pFVar5->GBufferA).Flags;
      uVar6 = (pFVar5->GBufferA).Index + 1;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar7 = 1;
      }
    }
    uVar6 = (pFVar5->GBufferB).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferB).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferB).Index] =
           (pFVar5->GBufferB).Flags;
      uVar6 = (pFVar5->GBufferB).Index + 1;
      if (uVar6 < (uint)uVar7) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar6;
    }
    uVar6 = (pFVar5->GBufferC).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferC).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferC).Index] =
           (pFVar5->GBufferC).Flags;
      uVar6 = (pFVar5->GBufferC).Index + 1;
      if (uVar6 < (uint)uVar7) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar6;
    }
    uVar6 = (pFVar5->GBufferD).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferD).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferD).Index] =
           (pFVar5->GBufferD).Flags;
      uVar6 = (pFVar5->GBufferD).Index + 1;
      if (uVar6 < (uint)uVar7) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar6;
    }
    uVar6 = (pFVar5->GBufferE).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferE).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferE).Index] =
           (pFVar5->GBufferE).Flags;
      uVar6 = (pFVar5->GBufferE).Index + 1;
      if (uVar6 < (uint)uVar7) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar6;
    }
    uVar6 = (pFVar5->GBufferVelocity).Index;
    if (0 < (int)uVar6) {
      (param_1->RenderTargetFormats).Elements[uVar6] = (pFVar5->GBufferVelocity).Format;
      (param_1->RenderTargetFlags).Elements[(uint)(pFVar5->GBufferVelocity).Index] =
           (pFVar5->GBufferVelocity).Flags;
      uVar6 = (pFVar5->GBufferVelocity).Index + 1;
      if (uVar6 < (uint)uVar7) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  uVar8 = uVar7;
  if (this->bRequiresDepthAux != 0) {
    uVar4 = '\x15';
    if (this->bPreciseDepthAux != 0) {
      uVar4 = '\r';
    }
    uVar8 = (ulonglong)((int)uVar7 + 1);
    (param_1->RenderTargetFormats).Elements[uVar7] = uVar4;
    (param_1->RenderTargetFlags).Elements[uVar7] =
         InputAttachmentRead|ShaderResource|RenderTargetable;
  }
  uVar6 = (uint)uVar8;
  if (this->bCustomResolveSubpass != 0) {
    EVar1 = this->ShaderPlatform;
    if (((EVar1 != SP_VULKAN_ES3_1_ANDROID) && (EVar1 != SP_VULKAN_SM5_ANDROID)) &&
       (EVar1 != SP_OPENGL_ES3_1_ANDROID)) {
      bVar2 = false;
    }
    uVar4 = '\x02';
    if (bVar2) {
      uVar4 = '%';
    }
    uVar6 = uVar6 + 1;
    (param_1->RenderTargetFormats).Elements[uVar8] = uVar4;
    (param_1->RenderTargetFlags).Elements[uVar8] = ShaderResource|RenderTargetable;
  }
  param_1->RenderTargetsEnabled = uVar6;
  param_1->MultiViewCount = '\0';
  param_1->bHasFragmentDensityAttachment = false;
  return uVar6;
}

// Init @ 14852f840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSceneTexturesConfig::Init(FSceneTexturesConfig *this,FSceneTexturesConfigInitSettings *param_1)

{
  FGBufferParams FVar1;
  FStaticShaderPlatform FVar2;
  Type TVar3;
  undefined4 uVar4;
  ETextureCreateFlags EVar5;
  code *pcVar6;
  undefined2 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  EPixelFormat EVar14;
  undefined8 uVar15;
  bool bVar16;
  EShaderPlatform EVar17;
  ushort uVar18;
  uint uVar19;
  TConsoleVariableData<int> *pTVar20;
  FGBufferParams *pFVar21;
  FGBufferParams *pFVar22;
  FGBufferParams *pFVar23;
  FGBufferBinding *pFVar24;
  IConsoleManager *pIVar25;
  longlong *plVar26;
  TConsoleVariableData<int> *pTVar27;
  uint uVar28;
  FGBufferBinding *pFVar29;
  ETextureCreateFlags EVar30;
  uint uVar31;
  EGBufferLayout EVar33;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_1dc8 [32];
  FString local_1d88;
  FString local_1d78;
  FString local_1d68;
  FString local_1d58;
  FString local_1d48;
  FString local_1d38;
  FGBufferParams local_1d28;
  FGBufferParams local_1d18;
  FGBufferParams local_1d08;
  FGBufferParams local_1cf8;
  FGBufferBinding local_1ce8;
  FGBufferBinding local_1cd8;
  FGBufferBinding local_1cc8;
  FGBufferBinding local_1cb8;
  FGBufferBinding local_1ca8;
  FGBufferBinding local_1c98;
  FGBufferInfo local_1c88;
  ulonglong local_48;
  undefined8 uStack_30;
  TConsoleVariableData<int> *pTVar32;
  
  uStack_30 = 0x14852f86a;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1dc8;
  pTVar32 = (TConsoleVariableData<int> *)0x0;
  uVar31 = 0;
  TVar3 = param_1->FeatureLevel;
  this->FeatureLevel = TVar3;
  this->ShadingPath = (uint)(2 < (int)TVar3);
  if (TVar3 == Num) {
    EVar17 = SP_NumPlatforms;
  }
  else {
    EVar17 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar3];
  }
  this->ShaderPlatform = EVar17;
  (this->Extent).field0_0x0 = (param_1->Extent).field0_0x0;
  uVar18 = (**(code **)(GDynamicRHI->_padding_ + 0x468))();
  uVar19 = GetDefaultMSAACount((FGenericStaticFeatureLevel)this->FeatureLevel,(uint)uVar18);
  uVar28 = 1;
  this->NumSamples = uVar19;
  if ((2 < (int)this->FeatureLevel) && (GRHIGlobals.SupportsMSAADepthSampleAccess != false)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar25 = IConsoleManager::Get();
      plVar26 = (longlong *)
                (**(code **)((longlong)*pIVar25 + 0xc0))(pIVar25,L"r.MSAA.CompositingSampleCount",1)
      ;
      pTVar27 = pTVar32;
      if (plVar26 != (longlong *)0x0) {
        pTVar27 = (TConsoleVariableData<int> *)(**(code **)(*plVar26 + 0x68))(plVar26);
      }
      ::CVar = pTVar27;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar27 = ::CVar;
    bVar16 = IsInParallelGameThread();
    if (bVar16) {
LAB_14852f93b:
      pTVar20 = pTVar32;
    }
    else {
      bVar16 = IsInGameThread();
      pTVar20 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar16) goto LAB_14852f93b;
    }
    uVar19 = *(uint *)((longlong)pTVar27->ShadowedValue + (longlong)pTVar20->ShadowedValue);
    if (1 < uVar19) {
      if (uVar19 < 3) {
        uVar28 = 2;
      }
      else {
        uVar28 = 8;
        if (uVar19 < 5) {
          uVar28 = 4;
        }
      }
    }
  }
  uVar4 = *(undefined4 *)&this->field_0x150;
  this->EditorPrimitiveNumSamples = uVar28;
  this->ColorFormat = PF_Unknown;
  uVar15 = FClearValueBinding::Black.Value._4_8_;
  *(undefined8 *)&this->ColorClearValue = FClearValueBinding::Black._0_8_;
  *(undefined8 *)((longlong)&(this->ColorClearValue).Value + 4) = uVar15;
  (this->ColorClearValue).Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
  uVar15 = FClearValueBinding::DepthFar.Value._4_8_;
  *(undefined8 *)&this->DepthClearValue = FClearValueBinding::DepthFar._0_8_;
  *(undefined8 *)((longlong)&(this->DepthClearValue).Value + 4) = uVar15;
  (this->DepthClearValue).Value.Color[3] = FClearValueBinding::DepthFar.Value.Color[3];
  this->bRequiresAlphaChannel = param_1->bRequiresAlphaChannel;
  *(uint *)&this->field_0x150 = ((uint)param_1->bRequireMultiView ^ ZPULL(uVar4,0,1)) & 1 ^ uVar4;
  bVar16 = IsUsingGBuffers((FStaticShaderPlatform)this->ShaderPlatform);
  this->bIsUsingGBuffers = 0;
  *(uint *)&this->field_0x150 = *(uint *)&this->field_0x150 | (uint)bVar16 * 2;
  uVar28 = ((uint)param_1->bSupportsXRTargetManagerDepthAlloc << 8 ^ *(uint *)&this->field_0x150) &
           0x100 ^ *(uint *)&this->field_0x150;
  *(uint *)&this->field_0x150 = uVar28;
  EVar5 = param_1->ExtraSceneColorCreateFlags;
  this->ExtraSceneColorCreateFlags = EVar5;
  this->ExtraSceneDepthCreateFlags = param_1->ExtraSceneDepthCreateFlags;
  GetSceneColorFormatAndCreateFlags
            (this->FeatureLevel,this->bRequiresAlphaChannel,EVar5,this->NumSamples,
             (bool)((byte)(uVar28 >> 7) & 1),&this->ColorFormat,&this->ColorCreateFlags);
  EVar5 = this->ExtraSceneDepthCreateFlags;
  FVar2.Platform = this->ShaderPlatform;
  EVar30 = EVar5 | (InputAttachmentRead|ShaderResource|DepthStencilTargetable);
  uVar28 = this->NumSamples;
  if (this->bKeepDepthContent == 0) {
LAB_14852fa71:
    EVar30 = EVar5 | (Memoryless|InputAttachmentRead|ShaderResource|DepthStencilTargetable);
LAB_14852fa79:
    if ((uVar28 == 1) && (GRHIGlobals.SupportsDepthUAV != false)) {
      EVar30 = EVar30 | UAV;
    }
  }
  else {
    if (uVar28 < 2) goto LAB_14852fa79;
    if ((this->bMemorylessMSAA != 0) &&
       ((bVar16 = IsMobilePlatform(FVar2), !bVar16 ||
        (bVar16 = MobileUsesFullDepthPrepass(FVar2), !bVar16)))) goto LAB_14852fa71;
  }
  this->DepthCreateFlags = EVar30;
  if (this->bIsUsingGBuffers != 0) {
    uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    pFVar21 = FShaderCompileUtilities::FetchGBufferParamsRuntime
                        (&local_1d08,this->ShaderPlatform,GBL_Default);
    FVar1 = *pFVar21;
    if (((((BindingCache.bInitialized == false) ||
          (BindingCache.GBufferParams.ShaderPlatform != FVar1.ShaderPlatform)) ||
         (BindingCache.GBufferParams.LegacyFormatIndex != FVar1.LegacyFormatIndex)) ||
        ((BindingCache.GBufferParams.bHasVelocity != FVar1.bHasVelocity ||
         (BindingCache.GBufferParams.bHasTangent != FVar1.bHasTangent)))) ||
       ((BindingCache.GBufferParams.bHasPrecShadowFactor != FVar1.bHasPrecShadowFactor ||
        ((BindingCache.GBufferParams.bUsesVelocityDepth != FVar1.bUsesVelocityDepth ||
         (bVar16 = BindingCache.GBufferParams.bHasSingleLayerWaterSeparatedMainLight !=
                   FVar1.bHasSingleLayerWaterSeparatedMainLight, bVar16)))))) {
      pFVar29 = &BindingCache.Bindings[0].GBufferB;
      pFVar21 = this->GBufferParams;
      pTVar27 = pTVar32;
      do {
        EVar33 = (EGBufferLayout)pTVar27;
        if (EVar33 == GBL_Default) {
          local_1d28 = FVar1;
          pFVar23 = &local_1d28;
        }
        else {
          pFVar22 = FShaderCompileUtilities::FetchGBufferParamsRuntime
                              (&local_1cf8,this->ShaderPlatform,EVar33);
          pFVar23 = &local_1d18;
          local_1d18.ShaderPlatform = pFVar22->ShaderPlatform;
          local_1d18._2_2_ = *(undefined2 *)&pFVar22->field_0x2;
          local_1d18.LegacyFormatIndex = pFVar22->LegacyFormatIndex;
          local_1d18.bHasVelocity = pFVar22->bHasVelocity;
          local_1d18.bHasTangent = pFVar22->bHasTangent;
          local_1d18.bHasPrecShadowFactor = pFVar22->bHasPrecShadowFactor;
          local_1d18.bUsesVelocityDepth = pFVar22->bUsesVelocityDepth;
          local_1d18.bHasSingleLayerWaterSeparatedMainLight =
               pFVar22->bHasSingleLayerWaterSeparatedMainLight;
          local_1d18._13_3_ = *(undefined3 *)&pFVar22->field_0xd;
        }
        uVar7 = *(undefined2 *)&pFVar23->field_0x2;
        iVar8 = pFVar23->LegacyFormatIndex;
        bVar16 = pFVar23->bHasVelocity;
        bVar9 = pFVar23->bHasTangent;
        bVar10 = pFVar23->bHasPrecShadowFactor;
        bVar11 = pFVar23->bUsesVelocityDepth;
        bVar12 = pFVar23->bHasSingleLayerWaterSeparatedMainLight;
        uVar13 = *(undefined3 *)&pFVar23->field_0xd;
        pFVar21->ShaderPlatform = pFVar23->ShaderPlatform;
        *(undefined2 *)&pFVar21->field_0x2 = uVar7;
        pFVar21->LegacyFormatIndex = iVar8;
        pFVar21->bHasVelocity = bVar16;
        pFVar21->bHasTangent = bVar9;
        pFVar21->bHasPrecShadowFactor = bVar10;
        pFVar21->bUsesVelocityDepth = bVar11;
        pFVar21->bHasSingleLayerWaterSeparatedMainLight = bVar12;
        *(undefined3 *)&pFVar21->field_0xd = uVar13;
        FetchFullGBufferInfo(&local_1c88,pFVar21);
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d88,L"GBufferA");
        pFVar24 = FindGBufferBindingByName(&local_1ce8,&local_1c88,&local_1d88,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29[-1].Index = pFVar24->Index;
        pFVar29[-1].Format = EVar14;
        *(undefined3 *)&pFVar29[-1].field_0x5 = uVar13;
        (((FGBufferBindings *)(pFVar29 + -1))->GBufferA).Flags = EVar5;
        if (local_1d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d88.Data.AllocatorInstance.Data);
        }
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d78,L"GBufferB");
        pFVar24 = FindGBufferBindingByName(&local_1cd8,&local_1c88,&local_1d78,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29->Index = pFVar24->Index;
        pFVar29->Format = EVar14;
        *(undefined3 *)&pFVar29->field_0x5 = uVar13;
        pFVar29->Flags = EVar5;
        if (local_1d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d78.Data.AllocatorInstance.Data);
        }
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d68,L"GBufferC");
        pFVar24 = FindGBufferBindingByName(&local_1cc8,&local_1c88,&local_1d68,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29[1].Index = pFVar24->Index;
        pFVar29[1].Format = EVar14;
        *(undefined3 *)&pFVar29[1].field_0x5 = uVar13;
        pFVar29[1].Flags = EVar5;
        if (local_1d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d68.Data.AllocatorInstance.Data);
        }
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d58,L"GBufferD");
        pFVar24 = FindGBufferBindingByName(&local_1cb8,&local_1c88,&local_1d58,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29[2].Index = pFVar24->Index;
        pFVar29[2].Format = EVar14;
        *(undefined3 *)&pFVar29[2].field_0x5 = uVar13;
        pFVar29[2].Flags = EVar5;
        if (local_1d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d58.Data.AllocatorInstance.Data);
        }
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d48,L"GBufferE");
        pFVar24 = FindGBufferBindingByName(&local_1ca8,&local_1c88,&local_1d48,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29[3].Index = pFVar24->Index;
        pFVar29[3].Format = EVar14;
        *(undefined3 *)&pFVar29[3].field_0x5 = uVar13;
        pFVar29[3].Flags = EVar5;
        if (local_1d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d48.Data.AllocatorInstance.Data);
        }
        EVar17 = this->ShaderPlatform;
        ::FString::FString(&local_1d38,L"Velocity");
        pFVar24 = FindGBufferBindingByName(&local_1c98,&local_1c88,&local_1d38,EVar17);
        EVar14 = pFVar24->Format;
        uVar13 = *(undefined3 *)&pFVar24->field_0x5;
        EVar5 = pFVar24->Flags;
        pFVar29[4].Index = pFVar24->Index;
        pFVar29[4].Format = EVar14;
        *(undefined3 *)&pFVar29[4].field_0x5 = uVar13;
        pFVar29[4].Flags = EVar5;
        if (local_1d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d38.Data.AllocatorInstance.Data);
        }
        pFVar29[4].Flags = pFVar29[4].Flags & ~DisableDCC;
        if (local_1c88.Targets[7].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[7].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[6].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[6].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[5].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[5].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[4].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[4].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[3].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[3].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[2].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[2].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[1].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[1].TargetName.Data.AllocatorInstance.Data);
        }
        if (local_1c88.Targets[0].TargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c88.Targets[0].TargetName.Data.AllocatorInstance.Data);
        }
        pTVar27 = (TConsoleVariableData<int> *)(ulonglong)(EVar33 + GBL_ForceVelocity);
        pFVar21 = pFVar21 + 1;
        pFVar29 = pFVar29 + 6;
      } while (EVar33 + GBL_ForceVelocity < 2);
      BindingCache.bInitialized = true;
      BindingCache.GBufferParams = FVar1;
      if (this->ShadingPath == Mobile) {
        ::SetupMobileGBufferFlags(BindingCache.Bindings,false);
      }
    }
    this->GBufferBindings[0].GBufferA = BindingCache.Bindings[0].GBufferA;
    this->GBufferBindings[0].GBufferB = BindingCache.Bindings[0].GBufferB;
    this->GBufferBindings[0].GBufferC = BindingCache.Bindings[0].GBufferC;
    this->GBufferBindings[0].GBufferD = BindingCache.Bindings[0].GBufferD;
    this->GBufferBindings[0].GBufferE = BindingCache.Bindings[0].GBufferE;
    this->GBufferBindings[0].GBufferVelocity = BindingCache.Bindings[0].GBufferVelocity;
    this->GBufferBindings[1].GBufferA = BindingCache.Bindings[1].GBufferA;
    this->GBufferBindings[1].GBufferB = BindingCache.Bindings[1].GBufferB;
    this->GBufferBindings[1].GBufferC = BindingCache.Bindings[1].GBufferC;
    this->GBufferBindings[1].GBufferD = BindingCache.Bindings[1].GBufferD;
    this->GBufferBindings[1].GBufferE = BindingCache.Bindings[1].GBufferE;
    this->GBufferBindings[1].GBufferVelocity = BindingCache.Bindings[1].GBufferVelocity;
  }
  if (this->ShadingPath != Mobile) {
    return;
  }
  bVar16 = MobileRequiresSceneDepthAux((FStaticShaderPlatform)this->ShaderPlatform);
  if (bVar16) {
    bVar16 = IsMobileTonemapSubpassEnabled(this->ShaderPlatform,param_1->bRequireMultiView);
    uVar28 = 8;
    if (bVar16) goto LAB_14852fea2;
  }
  else {
LAB_14852fea2:
    uVar28 = 0;
  }
  this->bRequiresDepthAux = 0;
  *(uint *)&this->field_0x150 = *(uint *)&this->field_0x150 | uVar28;
  if (this->bPreciseDepthAux == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar25 = IConsoleManager::Get();
      plVar26 = (longlong *)
                (**(code **)((longlong)*pIVar25 + 0xc0))(pIVar25,L"r.Mobile.SceneDepthAux",1);
      pTVar27 = pTVar32;
      if (plVar26 != (longlong *)0x0) {
        pTVar27 = (TConsoleVariableData<int> *)(**(code **)(*plVar26 + 0x68))(plVar26);
      }
      ::CVar = pTVar27;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar27 = ::CVar;
    if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
       (FReadOnlyCVARCache::bMobileHDR == false)) {
      bVar16 = IsInParallelGameThread();
      if ((bVar16) ||
         (bVar16 = IsInGameThread(), pTVar20 = (TConsoleVariableData<int> *)&DAT_00000004, bVar16))
      {
        pTVar20 = pTVar32;
      }
      uVar28 = 0;
      if (*(int *)((longlong)pTVar27->ShadowedValue + (longlong)pTVar20->ShadowedValue) != 2)
      goto LAB_14852ff1f;
    }
  }
  uVar28 = 0x10;
LAB_14852ff1f:
  this->bPreciseDepthAux = 0;
  EVar17 = this->ShaderPlatform;
  *(uint *)&this->field_0x150 = *(uint *)&this->field_0x150 | uVar28;
  uVar28 = this->NumSamples;
  bVar16 = IsMobileTonemapSubpassEnabled(EVar17,param_1->bRequireMultiView);
  if (bVar16) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar17].bContainsValidPlatformInfo == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,199,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar17].Language == LANGUAGE_Vulkan) &&
       ((GRHIGlobals.SupportsMSAAShaderResolve != false || (uVar28 < 2)))) {
      uVar31 = 0x20;
    }
  }
  this->bCustomResolveSubpass = 0;
  *(uint *)&this->field_0x150 = *(uint *)&this->field_0x150 | uVar31;
  return;
}

// SetupMobileGBufferFlags @ 148545310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSceneTexturesConfig::SetupMobileGBufferFlags(FSceneTexturesConfig *this,bool param_1)

{
  ::SetupMobileGBufferFlags(this->GBufferBindings,param_1);
  return;
}

