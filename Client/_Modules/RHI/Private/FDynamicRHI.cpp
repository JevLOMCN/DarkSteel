// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 39

// ~FDynamicRHI @ 145c47dd0

void __thiscall FDynamicRHI::~FDynamicRHI(FDynamicRHI *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FDynamicRHI__6B_;
  pFVar1 = (this->PixelFormatBlockBytes).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// EnableIdealGPUCaptureOptions @ 145c56770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl FDynamicRHI::EnableIdealGPUCaptureOptions(bool param_1)

{
  bool bVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = (uint)param_1;
  if (3 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar1 = GetEmitDrawEvents();
  if (uVar4 != bVar1) {
    if (3 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    SetEmitDrawEvents(param_1);
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      ShowMaterialDrawEventVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.ShowMaterialDrawEvents",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (ShowMaterialDrawEventVar != (IConsoleVariable *)0x0) {
    iVar2 = (**(code **)(*(longlong *)ShowMaterialDrawEventVar + 200))();
    if (uVar4 != (iVar2 != 0)) {
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      IConsoleVariable::Set<int>(ShowMaterialDrawEventVar,(uVar4 ^ 1) - 1,ECVF_SetByCode,(FName)0x0)
      ;
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar3 = IConsoleManager::Get();
      RDGEvents = (IConsoleVariable *)
                  (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.RDG.Events",1);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (RDGEvents != (IConsoleVariable *)0x0) {
    if (param_1) {
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      IConsoleVariable::Set<int>(RDGEvents,3,ECVF_SetByCode,(FName)0x0);
    }
    else {
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      (**(code **)(*(longlong *)RDGEvents + 0xb8))(RDGEvents,0xe000000,0);
    }
  }
  return;
}

// RHIBindDebugLabelName @ 145c6e770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIBindDebugLabelName
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,wchar_t *param_3)

{
  FName *pFVar1;
  FName local_res18 [2];
  
  pFVar1 = ::FName::FName(local_res18,param_3);
  param_2->_padding_ = (longlong)*pFVar1;
  return;
}

// RHIBindDebugLabelName @ 145c6e7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIBindDebugLabelName
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,wchar_t *param_3)

{
  FName *pFVar1;
  FName local_18 [2];
  
  pFVar1 = ::FName::FName(local_18,param_3);
  FRHITexture::SetName(param_2,*pFVar1);
  return;
}

// RHIBindDebugLabelName @ 145c6e7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIBindDebugLabelName
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIUnorderedAccessView *param_2,
          wchar_t *param_3)

{
  if ((param_2->field_0x20 != '\0') && (param_2->field_0x20 != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x000145c6e7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GDynamicRHI->_padding_ + 0x218))
              (GDynamicRHI,param_1,*(undefined8 *)&param_2->field_0x18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c6e800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x210))
            (GDynamicRHI,param_1,*(undefined8 *)&param_2->field_0x18);
  return;
}

// RHICheckViewportHDRStatus @ 145c6e810

void __thiscall FDynamicRHI::RHICheckViewportHDRStatus(FDynamicRHI *this,FRHIViewport *param_1)

{
  return;
}

// RHIComputePrecachePSOHash @ 145c6e820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

ulong64 __thiscall
FDynamicRHI::RHIComputePrecachePSOHash(FDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStack_b8 [32];
  ulong64 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  ETextureCreateFlags local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = param_1->StatePrecachePSOHash;
  if (local_98 == 0) {
    local_98 = (**(code **)(this->_padding_ + 0x2d0))();
    if (local_98 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StatePrecachePSOHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x290,
                         L"Initializer should have a valid state precache PSO hash set when computing the full initializer PSO hash"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
  }
  uStack_90._0_4_ = param_1->PrimitiveType;
  uStack_90._4_4_ = param_1->RenderTargetsEnabled;
  local_88 = *(undefined8 *)(param_1->RenderTargetFormats).Elements;
  uStack_40 = (ulonglong)param_1->DepthStencilTargetFormat;
  local_38 = param_1->DepthStencilTargetFlag;
  uStack_30._0_1_ = param_1->DepthTargetLoadAction;
  uStack_30._1_1_ = param_1->DepthTargetStoreAction;
  uStack_30._2_1_ = param_1->StencilTargetLoadAction;
  uStack_30._3_1_ = param_1->StencilTargetStoreAction;
  uStack_30._4_4_ = param_1->DepthStencilAccess;
  local_28._0_2_ = param_1->NumSamples;
  local_28._2_1_ = param_1->SubpassHint;
  local_28._3_1_ = param_1->SubpassIndex;
  local_28._4_1_ = param_1->ConservativeRasterization;
  local_28._5_1_ = param_1->bDepthBounds;
  local_28._6_1_ = param_1->MultiViewCount;
  local_28._7_1_ = param_1->bHasFragmentDensityAttachment;
  _uStack_80 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 4),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[0]);
  _local_78 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0xc),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[1]);
  uStack_20 = (ulonglong)param_1->ShadingRate;
  _uStack_70 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x14),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[2]);
  _local_68 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x1c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[3]);
  _uStack_60 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x24),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[4]);
  _local_58 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x2c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[5]);
  _uStack_50 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x34),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[6]);
  _local_48 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x3c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[7]);
  uVar3 = CityHash64((char *)&local_98,0x80);
  return uVar3;
}

// RHIComputeStatePrecachePSOHash @ 145c6e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

ulong64 __thiscall
FDynamicRHI::RHIComputeStatePrecachePSOHash
          (FDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexDeclaration *pFVar1;
  FRHIVertexShader *pFVar2;
  FRHIPixelShader *pFVar3;
  FRHIGeometryShader *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIBlendState *pFVar6;
  FRHIRasterizerState *pFVar7;
  FRHIDepthStencilState *pFVar8;
  char cVar9;
  uint uVar10;
  ulong64 uVar11;
  undefined1 auStack_b8 [32];
  FDepthStencilStateInitializerRHI local_98;
  FRasterizerStateInitializerRHI local_88;
  FBlendStateInitializerRHI local_78;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  uint local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar1 = (param_1->BoundShaderState).VertexDeclarationRHI;
  local_14 = 0;
  local_24 = 0;
  uStack_1c = 0;
  if (pFVar1 == (FRHIVertexDeclaration *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = (**(code **)(*(longlong *)pFVar1 + 0x18))();
  }
  pFVar2 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar2 == (FRHIVertexShader *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = *(undefined4 *)&pFVar2->field_0xf0;
  }
  pFVar3 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar3 == (FRHIPixelShader *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined4 *)&pFVar3->field_0xf0;
  }
  pFVar4 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar4 == (FRHIGeometryShader *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = *(undefined4 *)&pFVar4->field_0xf0;
  }
  pFVar5 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar5 == (FRHIMeshShader *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)&pFVar5->field_0xf0;
  }
  pFVar6 = param_1->BlendState;
  local_78.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_78.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_78.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_78.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_78.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  if (pFVar6 != (FRHIBlendState *)0x0) {
    cVar9 = (**(code **)(*(longlong *)pFVar6 + 0x10))(pFVar6,&local_78);
    if (cVar9 != '\0') {
      uVar10 = ::GetTypeHash(&local_78);
      local_24 = CONCAT44(local_24._4_4_,uVar10);
    }
  }
  pFVar7 = param_1->RasterizerState;
  local_88.FillMode.Value = '\0';
  local_88.CullMode.Value = '\0';
  local_88.DepthBias = 0.0;
  local_88.SlopeScaleDepthBias = 0.0;
  local_88.DepthClipMode = DepthClip;
  local_88.bAllowMSAA = false;
  if (pFVar7 != (FRHIRasterizerState *)0x0) {
    cVar9 = (**(code **)(*(longlong *)pFVar7 + 0x10))(pFVar7,&local_88);
    if (cVar9 != '\0') {
      uVar10 = ::GetTypeHash(&local_88);
      local_24 = CONCAT44(uVar10,(undefined4)local_24);
    }
  }
  pFVar8 = param_1->DepthStencilState;
  local_98.bEnableDepthWrite = true;
  local_98.DepthTest.Value = '\x01';
  local_98.bEnableFrontFaceStencil = false;
  local_98.FrontFaceStencilTest.Value = '\a';
  local_98.FrontFaceStencilFailStencilOp.Value = '\0';
  local_98.FrontFaceDepthFailStencilOp.Value = '\0';
  local_98.FrontFacePassStencilOp.Value = '\0';
  local_98.bEnableBackFaceStencil = false;
  local_98.BackFaceStencilTest.Value = '\a';
  local_98.BackFaceStencilFailStencilOp.Value = '\0';
  local_98.BackFaceDepthFailStencilOp.Value = '\0';
  local_98.BackFacePassStencilOp.Value = '\0';
  local_98.StencilReadMask = 0xff;
  local_98.StencilWriteMask = 0xff;
  if (pFVar8 != (FRHIDepthStencilState *)0x0) {
    cVar9 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,&local_98);
    if (cVar9 != '\0') {
      uVar10 = ::GetTypeHash(&local_98);
      uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
    }
  }
  local_14 = ((param_1->bDepthBounds & 1) << 8 | (uint)(byte)(char)param_1->PrimitiveType) << 8 |
             (uint)param_1->ShadingRate | local_14 & 0xfffe0000;
  uVar11 = CityHash64((char *)&local_38,0x28);
  return uVar11;
}

// RHICreateTextureReference @ 145c6ec70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITextureReference> __thiscall
FDynamicRHI::RHICreateTextureReference
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2)

{
  FRHITextureReference *pFVar1;
  TRefCountPtr<FRHITexture> TVar2;
  FRHITexture *in_R9;
  
  TVar2.Reference = FRHITextureReference::DefaultTexture.Reference;
  if (in_R9 != (FRHITexture *)0x0) {
    TVar2.Reference = in_R9;
  }
  pFVar1 = ::operator_new(0x148);
  if (pFVar1 == (FRHITextureReference *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    pFVar1 = FRHITextureReference::FRHITextureReference(pFVar1,TVar2.Reference);
    (param_1->MemManager).Top = (uchar *)pFVar1;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
    }
  }
  return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
}

// RHIEndFrame_RenderThread @ 145c703b0

void __thiscall
FDynamicRHI::RHIEndFrame_RenderThread(FDynamicRHI *this,FRHICommandListImmediate *param_1)

{
  FRHICommandListImmediate::ImmediateFlush(param_1,DispatchToRHIThread,EndFrame);
  return;
}

// RHIGetMinimumAlignmentForBufferBackedSRV @ 145c704a0

ulong64 __thiscall
FDynamicRHI::RHIGetMinimumAlignmentForBufferBackedSRV(FDynamicRHI *this,EPixelFormat param_1)

{
  return (longlong)GPixelFormats[param_1].BlockBytes;
}

// RHILockBufferMGPU @ 145c70fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FDynamicRHI::RHILockBufferMGPU
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,uint param_5,EResourceLockMode param_6)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,0x33a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = (void *)(**(code **)(this->_padding_ + 0x148))
                             (this,param_1,param_2,param_4,param_5,param_6);
  return pvVar3;
}

// RHIMatchPrecachePSOInitializers @ 145c71040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FDynamicRHI::RHIMatchPrecachePSOInitializers
          (FDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1,
          FGraphicsPipelineStateInitializer *param_2)

{
  FRHIVertexDeclaration *pFVar1;
  FRHIVertexDeclaration *pFVar2;
  FRHIRasterizerState *pFVar3;
  FRHIRasterizerState *pFVar4;
  FRHIDepthStencilState *pFVar5;
  FRHIDepthStencilState *pFVar6;
  bool bVar7;
  TStaticArray<ETextureCreateFlags,8,4294967295> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  FRasterizerStateInitializerRHI local_168;
  FRasterizerStateInitializerRHI local_158;
  FVertexElement local_148 [17];
  uint local_c0;
  undefined4 local_bc;
  FVertexElement local_b8 [17];
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((((((((param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0] ==
            (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[0]) &&
          ((param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1] ==
           (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[1])) &&
         (param_1->PrimitiveType == param_2->PrimitiveType)) &&
        (((param_1->bDepthBounds == param_2->bDepthBounds &&
          (param_1->MultiViewCount == param_2->MultiViewCount)) &&
         ((param_1->ShadingRate == param_2->ShadingRate &&
          ((param_1->bHasFragmentDensityAttachment == param_2->bHasFragmentDensityAttachment &&
           (param_1->RenderTargetsEnabled == param_2->RenderTargetsEnabled)))))))) &&
       ((param_1->RenderTargetFormats).Elements[0] == (param_2->RenderTargetFormats).Elements[0]))
      && ((((((param_1->RenderTargetFormats).Elements[1] ==
              (param_2->RenderTargetFormats).Elements[1] &&
             ((param_1->RenderTargetFormats).Elements[2] ==
              (param_2->RenderTargetFormats).Elements[2])) &&
            ((param_1->RenderTargetFormats).Elements[3] ==
             (param_2->RenderTargetFormats).Elements[3])) &&
           (((param_1->RenderTargetFormats).Elements[4] ==
             (param_2->RenderTargetFormats).Elements[4] &&
            ((param_1->RenderTargetFormats).Elements[5] ==
             (param_2->RenderTargetFormats).Elements[5])))) &&
          ((param_1->RenderTargetFormats).Elements[6] == (param_2->RenderTargetFormats).Elements[6])
          ))) &&
     ((param_1->RenderTargetFormats).Elements[7] == (param_2->RenderTargetFormats).Elements[7])) {
    uVar11 = 0;
    pTVar8 = &param_1->RenderTargetFlags;
    uVar9 = uVar11;
    do {
      if (((*(uint *)(((longlong)param_2 - (longlong)param_1) + (longlong)pTVar8) ^
           (int)pTVar8->Elements[0]) & (Shared|SRGB)) != None) {
        return false;
      }
      uVar9 = uVar9 + 1;
      pTVar8 = (TStaticArray<ETextureCreateFlags,8,4294967295> *)(pTVar8->Elements + 1);
    } while ((longlong)uVar9 < 8);
    if ((((param_1->DepthStencilTargetFormat == param_2->DepthStencilTargetFormat) &&
         ((((int)param_2->DepthStencilTargetFlag ^ (int)param_1->DepthStencilTargetFlag) &
          (Shared|SRGB|DepthStencilTargetable)) == None)) &&
        (((param_1->DepthTargetLoadAction == param_2->DepthTargetLoadAction &&
          (((param_1->DepthTargetStoreAction == param_2->DepthTargetStoreAction &&
            (param_1->StencilTargetLoadAction == param_2->StencilTargetLoadAction)) &&
           (param_1->StencilTargetStoreAction == param_2->StencilTargetStoreAction)))) &&
         ((((param_1->DepthStencilAccess).Value == (param_2->DepthStencilAccess).Value &&
           (param_1->NumSamples == param_2->NumSamples)) &&
          (param_1->SubpassHint == param_2->SubpassHint)))))) &&
       ((((param_1->SubpassIndex == param_2->SubpassIndex &&
          (param_1->ConservativeRasterization == param_2->ConservativeRasterization)) &&
         (((param_1->BoundShaderState).VertexShaderRHI ==
           (param_2->BoundShaderState).VertexShaderRHI &&
          ((((param_1->BoundShaderState).PixelShaderRHI ==
             (param_2->BoundShaderState).PixelShaderRHI &&
            ((param_1->BoundShaderState).MeshShaderRHI == (param_2->BoundShaderState).MeshShaderRHI)
            ) && ((param_1->BoundShaderState).AmplificationShaderRHI ==
                  (param_2->BoundShaderState).AmplificationShaderRHI)))))) &&
        ((param_1->BoundShaderState).GeometryShaderRHI ==
         (param_2->BoundShaderState).GeometryShaderRHI)))) {
      pFVar1 = (param_1->BoundShaderState).VertexDeclarationRHI;
      pFVar2 = (param_2->BoundShaderState).VertexDeclarationRHI;
      local_c0 = 0;
      local_bc = 0x11;
      local_30 = 0;
      local_2c = 0x11;
      if (pFVar1 != (FRHIVertexDeclaration *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1,local_148);
        uVar11 = (ulonglong)local_c0;
      }
      uVar10 = (uint)uVar11;
      if (pFVar2 != (FRHIVertexDeclaration *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2,local_b8);
        uVar10 = local_c0;
      }
      if (((uVar10 == local_30) &&
          (bVar7 = CompareItems<FVertexElement,int>(local_148,local_b8,uVar10), bVar7)) &&
         (bVar7 = MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI>
                            (param_1->BlendState,param_2->BlendState), bVar7)) {
        pFVar3 = param_1->RasterizerState;
        pFVar4 = param_2->RasterizerState;
        local_168.FillMode.Value = '\0';
        local_168.CullMode.Value = '\0';
        local_168.DepthBias = 0.0;
        local_168.SlopeScaleDepthBias = 0.0;
        local_168.DepthClipMode = DepthClip;
        local_168.bAllowMSAA = false;
        local_158.FillMode.Value = '\0';
        local_158.CullMode.Value = '\0';
        local_158.DepthBias = 0.0;
        local_158.SlopeScaleDepthBias = 0.0;
        local_158.DepthClipMode = DepthClip;
        local_158.bAllowMSAA = false;
        if (pFVar3 != (FRHIRasterizerState *)0x0) {
          (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3,&local_168);
        }
        if (pFVar4 != (FRHIRasterizerState *)0x0) {
          (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4,&local_158);
        }
        bVar7 = ::operator==(&local_168,&local_158);
        if (bVar7) {
          pFVar5 = param_1->DepthStencilState;
          pFVar6 = param_2->DepthStencilState;
          local_158.FillMode.Value = '\x01';
          local_158.CullMode.Value = '\x01';
          local_158._2_2_ = 0x700;
          local_158.DepthBias = 0.0;
          local_158.SlopeScaleDepthBias = 9.80909e-45;
          local_158.DepthClipMode = ~DepthClip;
          local_158.bAllowMSAA = true;
          local_168.FillMode.Value = '\x01';
          local_168.CullMode.Value = '\x01';
          local_168._2_2_ = 0x700;
          local_168.DepthBias = 0.0;
          local_168.SlopeScaleDepthBias = 9.80909e-45;
          local_168.DepthClipMode = ~DepthClip;
          local_168.bAllowMSAA = true;
          if (pFVar5 != (FRHIDepthStencilState *)0x0) {
            (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,&local_158);
          }
          if (pFVar6 != (FRHIDepthStencilState *)0x0) {
            (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,&local_168);
          }
          bVar7 = ::operator==((FDepthStencilStateInitializerRHI *)&local_158,
                               (FDepthStencilStateInitializerRHI *)&local_168);
          if (bVar7) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RHIRead3DSurfaceFloatData @ 145c71500

void __thiscall
FDynamicRHI::RHIRead3DSurfaceFloatData
          (FDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,TIntPoint<int> param_3,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,FReadSurfaceDataFlags *param_5)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int>_u_0 local_18;
  TIntPoint<int>_u_0 local_10;
  
  if (param_5->GPUIndex == 0) {
    local_18 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
    local_10 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
    (**(code **)(this->_padding_ + 600))(this,param_1,&local_18,param_3.field0_0x0,param_4);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,499,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RHIReadSurfaceData @ 145c71580

void __thiscall
FDynamicRHI::RHIReadSurfaceData
          (FDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  void *local_78;
  ulonglong local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  TIntPoint<int>_u_0 local_58;
  TIntPoint<int>_u_0 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_30;
  
  local_58 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_50 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_48._0_4_ = param_4->CubeFace;
  local_48._4_4_ = param_4->CompressionMode;
  uStack_40._0_1_ = param_4->bLinearToGamma;
  uStack_40._1_3_ = *(undefined3 *)&param_4->field_0x9;
  uStack_40._4_4_ = param_4->MaxDepthRange;
  local_38._0_1_ = param_4->bOutputStencil;
  local_38._1_1_ = param_4->MipLevel;
  local_38._2_2_ = *(undefined2 *)&param_4->field_0x12;
  local_38._4_4_ = param_4->ArrayIndex;
  local_30 = param_4->GPUIndex;
  (**(code **)(this->_padding_ + 0x228))(this,local_38,&local_58,&local_78,&local_48);
  uVar9 = (uint)local_70;
  uVar6 = (ulonglong)(int)(uint)local_70;
  piVar1 = &param_3->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)(uint)local_70) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(uint)local_70 - iVar5,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
  }
  else {
    if ((int)(uint)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_70 & 0xffffffff);
    }
    uVar7 = uVar6;
    if (iVar5 <= (int)(uint)local_70) goto LAB_145c716dc;
    uVar11 = iVar5 - (uint)local_70;
    if ((int)((uint)local_70 | uVar11) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = local_70 & 0xffffffff;
    }
    if (uVar11 == 0) goto LAB_145c716dc;
    pFVar8 = (param_3->AllocatorInstance).Data + uVar6 * 0x10;
    iVar5 = (*piVar1 - uVar11) - uVar9;
    if (iVar5 != 0) {
      memmove(pFVar8,pFVar8 + (longlong)(int)uVar11 * 0x10,(longlong)iVar5 << 4);
    }
    *piVar1 = *piVar1 - uVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
  }
  uVar7 = local_70 & 0xffffffff;
LAB_145c716dc:
  fVar3 = __real_3b808081;
  uVar9 = 0;
  if (0 < (int)uVar7) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar9 < (int)uVar7) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_68 = (float)*(byte *)((longlong)local_78 + lVar10 * 4 + 2) * fVar3;
      fStack_64 = (float)*(byte *)((longlong)local_78 + lVar10 * 4 + 1) * fVar3;
      fStack_60 = (float)*(byte *)((longlong)local_78 + lVar10 * 4) * fVar3;
      uVar11 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      fStack_5c = (float)*(byte *)((longlong)local_78 + lVar10 * 4 + 3) * fVar3;
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      pFVar8 = (param_3->AllocatorInstance).Data + lVar12;
      *(ulonglong *)pFVar8 = CONCAT44(fStack_64,local_68);
      *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_5c,fStack_60);
      uVar7 = local_70 & 0xffffffff;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar9 < (int)(uint)local_70);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// RHIReadSurfaceFloatData @ 145c71860

void __thiscall
FDynamicRHI::RHIReadSurfaceFloatData
          (FDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int>_u_0 local_18;
  TIntPoint<int>_u_0 local_10;
  
  if (param_4->GPUIndex == 0) {
    local_18 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
    local_10 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
    (**(code **)(this->_padding_ + 0x248))
              (this,param_1,&local_18,param_3,param_4->CubeFace,param_4->ArrayIndex,
               param_4->MipLevel);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,0x1e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RHIUnlockBufferMGPU @ 145c718f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUnlockBufferMGPU
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,0x341,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c7194e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x158))(this,param_1,param_2);
  return;
}

// RHIUpdateTextureReference @ 145c71960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUpdateTextureReference
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHITextureReference *param_2,
          FRHITexture *param_3)

{
  int *piVar1;
  int iVar2;
  FRHITexture *this_00;
  FRHICommandBase *pFVar3;
  TRefCountPtr<FRHITexture> this_01;
  undefined8 *local_res18;
  
  if (param_2 != (FRHITextureReference *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar3 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar3;
    param_1->CommandLink = &pFVar3->Next;
    pFVar3->Next = (FRHICommandBase *)0x0;
    pFVar3->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FDynamicRHI::RHIUpdateTextureReference'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar3[2]._padding_ = (longlong)L"FDynamicRHI::RHIUpdateTextureReference";
    pFVar3[1]._padding_ = (longlong)param_2;
    pFVar3[1].Next = (FRHICommandBase *)param_3;
  }
  else {
    this_01.Reference = FRHITextureReference::DefaultTexture.Reference;
    if (param_3 != (FRHITexture *)0x0) {
      this_01.Reference = param_3;
    }
    this_00 = (param_2->ReferencedTexture).Reference;
    if (this_00 != this_01.Reference) {
      (param_2->ReferencedTexture).Reference = this_01.Reference;
      if (this_01.Reference != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01.Reference);
      }
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (param_2 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)param_2);
    }
  }
  FRHICommandListBase::RHIThreadFence(param_1,true);
  if (local_res18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res18 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res18 != (undefined8 *)0x0)) {
      (**(code **)*local_res18)(local_res18,1);
    }
  }
  return;
}

// RHIVirtualTextureSetFirstMipInMemory @ 145c71a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIVirtualTextureSetFirstMipInMemory
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  return;
}

// RHIVirtualTextureSetFirstMipVisible @ 145c71aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIVirtualTextureSetFirstMipVisible
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  return;
}

// operator() @ 145c8e290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FDynamicRHI::RHIUnlockBuffer'::__l13::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_13_::<lambda_1>::operator()(FRHICommandListBase_&)const_::_2_::FStat_STAT_FRHICommandUpdateBuffer_Execute>
  FVar6;
  void *_Dst;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRHICommandUpdateBuffer_Execute ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_13_::<lambda_1>::operator()(FRHICommandListBase_&)const_::_2_::FStat_STAT_FRHICommandUpdateBuffer_Execute>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_FRHICommandUpdateBuffer_Execute");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRHICommandUpdateBuffer_Execute,*pFVar5,
                 L"STAT_FRHICommandUpdateBuffer_Execute","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FRHICommandUpdateBuffer_Execute;
  if (StatPtr_STAT_FRHICommandUpdateBuffer_Execute ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_13_::<lambda_1>::operator()(FRHICommandListBase_&)const_::_2_::FStat_STAT_FRHICommandUpdateBuffer_Execute>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_FRHICommandUpdateBuffer_Execute");
    FVar6 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_13_::<lambda_1>::operator()(FRHICommandListBase_&)const_::_2_::FStat_STAT_FRHICommandUpdateBuffer_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRHICommandUpdateBuffer_Execute,
                         *pFVar5,L"STAT_FRHICommandUpdateBuffer_Execute","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x843);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_145c8e41d;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_145c8e41d:
  _Dst = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x448))
                           (GDynamicRHI,param_1,*(undefined8 *)this,
                            *(undefined4 *)((longlong)this + 0x1c),
                            *(undefined4 *)((longlong)this + 0x18),
                            *(undefined4 *)((longlong)this + 0x20));
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2120,"RHIUnlockBuffer_Memcpy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x848);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2120);
  }
  memcpy(_Dst,*(void **)((longlong)this + 0x10),(ulonglong)*(uint *)((longlong)this + 0x18));
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemory::Free(*(void **)((longlong)this + 0x10));
  (**(code **)(GDynamicRHI->_padding_ + 0x450))(GDynamicRHI,param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// AsyncReallocateTexture2D_RenderThread @ 145c91590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FDynamicRHI::AsyncReallocateTexture2D_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,int param_3,
          int param_4,int param_5,FThreadSafeCounter *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHITexture>___cdecl_FDynamicRHI::AsyncReallocateTexture2D_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,int,int,int,FThreadSafeCounter_*)_::_2_::FStat_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  undefined4 in_register_0000008c;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res10;
  undefined8 in_stack_00000040;
  FStatMessage local_48;
  FName local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHITexture>___cdecl_FDynamicRHI::AsyncReallocateTexture2D_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,int,int,int,FThreadSafeCounter_*)_::_2_::FStat_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res10.s,
                                "STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush,*pFVar7,
                   L"STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush;
  if (StatPtr_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHITexture>___cdecl_FDynamicRHI::AsyncReallocateTexture2D_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,int,int,int,FThreadSafeCounter_*)_::_2_::FStat_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush>
       )0x0) {
    pFVar7 = ::FName::FName((FName *)&local_48,"STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHITexture>___cdecl_FDynamicRHI::AsyncReallocateTexture2D_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,int,int,int,FThreadSafeCounter_*)_::_2_::FStat_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush,*pFVar7,
                         L"STAT_RHIMETHOD_AsyncReallocateTexture2D_Flush","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x8a9);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      local_38 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = local_38.ComparisonIndex.Value;
      goto LAB_145c9171f;
    }
  }
  bVar5 = false;
  FVar11 = local_38;
LAB_145c9171f:
  if (__CsvProfilerStat2218 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AsyncReallocateTexture2D_RenderThread",_GCsvCategory_RHITFlushes.Index);
    __CsvProfilerStat2218 = true;
  }
  uVar9 = _GCsvCategory_RHITFlushes.Index;
  FCsvProfiler::BeginStat
            ("AsyncReallocateTexture2D_RenderThread",_GCsvCategory_RHITFlushes.Index,
             "CSV_AsyncReallocateTexture2D_RenderThread");
  local_48.NameAndInfo = (FStatNameAndInfo)((ulonglong)(uint)local_48.NameAndInfo.Number << 0x20);
  local_48.StatData.Pad[0] = '\0';
  local_48.StatData.Pad[1] = '\0';
  local_48.StatData.Pad[2] = '\0';
  local_48.StatData.Pad[3] = '\0';
  local_48.StatData.Pad[4] = '\0';
  local_48.StatData.Pad[5] = '\0';
  local_48.StatData.Pad[6] = '\0';
  local_48.StatData.Pad[7] = '\0';
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res10.s,
             (ERHISubmitFlags)&local_48);
  puVar3 = (undefined8 *)CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1d8))
            (GDynamicRHI,param_1,CONCAT44(in_register_0000008c,param_3),param_4,param_5,
             (ulonglong)param_6 & 0xffffffff,in_stack_00000040);
  FCsvProfiler::EndStat("AsyncReallocateTexture2D_RenderThread",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// LockStagingBuffer_RenderThread @ 145cb2a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FDynamicRHI::LockStagingBuffer_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2,
          FRHIGPUFence *param_3,uint param_4,uint param_5)

{
  FRHICommandListBase **ppFVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  void *pvVar11;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
  FVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
  FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  ulonglong uVar17;
  FName FVar18;
  FRHICommandListImmediate *pFVar19;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_c8;
  undefined1 local_b8 [16];
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  undefined8 local_48;
  longlong lStack_40;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x884,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pvVar11 = (void *)(*pcVar4)();
    return pvVar11;
  }
  uVar17 = (ulonglong)_tls_index;
  if (((param_3 == (FRHIGPUFence *)0x0) ||
      (cVar9 = (**(code **)(param_3->_padding_ + 0x20))(param_3), cVar9 == '\0')) ||
     ((param_3->NumPendingWriteCommands).Counter != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush =
           (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
            )0x0;
      pFVar13 = ::FName::FName(&local_68,"STAT_FDynamicRHI_LockStagingBuffer_Flush");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush,
                 *pFVar13,L"STAT_FDynamicRHI_LockStagingBuffer_Flush","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar12 = StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush;
    if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
         )0x0) {
      pFVar13 = ::FName::FName(&local_60,"STAT_FDynamicRHI_LockStagingBuffer_Flush");
      FVar12 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_12_::FStat_STAT_FDynamicRHI_LockStagingBuffer_Flush>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FDynamicRHI_LockStagingBuffer_Flush,*pFVar13,
                            L"STAT_FDynamicRHI_LockStagingBuffer_Flush","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar12;
    bVar8 = false;
    bVar7 = false;
    local_d8.ComparisonIndex.Value = 0;
    local_d8.Number = 0;
    if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_145cb2cd8:
      bVar6 = false;
      FVar18 = local_d8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
        bVar8 = false;
        bVar7 = true;
        if (-1 < CpuChannel->Enabled) {
          local_e8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
          local_e8.Number = FVar18.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_e8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x887);
          bVar8 = true;
          bVar7 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145cb2cd8;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar6 = true;
    }
    local_78 = 0;
    uStack_70 = 0;
    lStack_40 = (ulonglong)uStack_6c << 0x20;
    local_48 = 0;
    FRHICommandListExecutor::Submit
              (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)local_b8,
               (ERHISubmitFlags)&local_48);
    if ((FRHICommandListBase **)local_b8._0_8_ != (FRHICommandListBase **)0x0) {
      LOCK();
      ppFVar1 = (FRHICommandListBase **)(local_b8._0_8_ + 0x30);
      iVar3 = *(int *)ppFVar1;
      *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)((*(FRHICommandListBase **)local_b8._0_8_)->MemManager).Top)(local_b8._0_8_,1);
      }
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
        local_a0.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_a0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter((LARGE_INTEGER *)(local_b8 + 8));
        local_a0.StatData.Pad[4] = '\0';
        local_a0.StatData.Pad[5] = '\0';
        local_a0.StatData.Pad[6] = '\0';
        local_a0.StatData.Pad[7] = '\0';
        local_a0.StatData.Pad[0] = local_b8[8];
        local_a0.StatData.Pad[1] = local_b8[9];
        local_a0.StatData.Pad[2] = local_b8[10];
        local_a0.StatData.Pad[3] = local_b8[0xb];
        FThreadStats::AddStatMessage(pFVar15,&local_a0);
        piVar2 = &pFVar15->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    uVar17 = (ulonglong)_tls_index;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread =
         (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
          )0x0;
    pFVar13 = ::FName::FName(&local_58,"STAT_FDynamicRHI_LockStagingBuffer_RenderThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread
               ,*pFVar13,L"STAT_FDynamicRHI_LockStagingBuffer_RenderThread","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar14 = StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread;
  if (StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
       )0x0) {
    pFVar13 = ::FName::FName(&local_50,"STAT_FDynamicRHI_LockStagingBuffer_RenderThread");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::LockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*,FRHIGPUFence_*,unsigned_int,unsigned_int)_::_13_::FStat_STAT_FDynamicRHI_LockStagingBuffer_RenderThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FDynamicRHI_LockStagingBuffer_RenderThread,*pFVar13,
                          L"STAT_FDynamicRHI_LockStagingBuffer_RenderThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar8 = false;
  bVar7 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_e0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x88b);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar6 = true;
      goto LAB_145cb2fc3;
    }
  }
  bVar6 = false;
  FVar18 = local_c8;
LAB_145cb2fc3:
  if (GRHIGlobals.SupportsMultithreading == false) {
    pFVar19 = (FRHICommandListImmediate *)0x0;
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      bVar10 = IsInRenderingThread();
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInRenderingThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                              ,0x29,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        pvVar11 = (void *)(*pcVar4)();
        return pvVar11;
      }
      bVar10 = FRHICommandListImmediate::StallRHIThread(param_1);
      if (bVar10) {
        pFVar19 = param_1;
      }
    }
    pvVar11 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0xe8))
                                (GDynamicRHI,param_2,param_3,param_4,param_5);
    if (pFVar19 != (FRHICommandListImmediate *)0x0) {
      bVar10 = IsInRenderingThread();
      if (((!bVar10) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                              ,0x766,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        pvVar11 = (void *)(*pcVar4)();
        return pvVar11;
      }
      LOCK();
      aVar5 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
      UNLOCK();
      bVar10 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
      if ((int)GRHIThreadStallRequestCount + -1 < 0) {
        GRHIThreadStallRequestCount = aVar5;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewStallCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x768,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pvVar11 = (void *)(*pcVar4)();
          return pvVar11;
        }
      }
      else {
        GRHIThreadStallRequestCount = aVar5;
        if (bVar10) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
        }
      }
    }
  }
  else {
    pvVar11 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0xe8))
                                (GDynamicRHI,param_2,param_3,param_4,param_5);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_90.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_90);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return pvVar11;
}

// RHIBeginRenderQuery_TopOfPipe @ 145cb6fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIBeginRenderQuery_TopOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  FRHICommandBase *pFVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((param_1->PersistentState).bImmediate != '\0')) {
    pIVar1 = FRHICommandListBase::GetContext(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x180);
                    /* WARNING: Could not recover jumptable at 0x000145cb7004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  pFVar2 = FMemStackBase::Alloc(&param_1->MemManager,0x18,8);
  param_1->NumCommands = param_1->NumCommands + 1;
  *param_1->CommandLink = pFVar2;
  param_1->CommandLink = &pFVar2->Next;
  pFVar2->Next = (FRHICommandBase *)0x0;
  pFVar2->_padding_ = (longlong)&___7FRHICommandBeginRenderQuery__6B_;
  pFVar2[1]._padding_ = (longlong)param_2;
  return;
}

// RHIBeginUpdateTexture3D @ 145cb7060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FUpdateTexture3DData * __thiscall
FDynamicRHI::RHIBeginUpdateTexture3D
          (FDynamicRHI *this,FUpdateTexture3DData *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  FUpdateTexture3DData *pFVar15;
  longlong lVar16;
  uchar *puVar17;
  uint uVar18;
  ulong64 uVar19;
  
  bVar14 = IsInParallelRenderingThread();
  if (!bVar14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInParallelRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                        ,0x8b1,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FUpdateTexture3DData *)(*pcVar5)();
      return pFVar15;
    }
  }
  lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar1 = *(byte *)(lVar16 + 0x33);
  if ((this->PixelFormatBlockBytes).ArrayNum <= (int)(uint)bVar1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pFVar15 = (FUpdateTexture3DData *)(*pcVar5)();
      return pFVar15;
    }
  }
  iVar2 = *(int *)((this->PixelFormatBlockBytes).AllocatorInstance.Data + (ulonglong)bVar1 * 4);
  uVar3 = param_4->Width;
  uVar18 = iVar2 * param_4->Height * uVar3;
  uVar19 = (ulonglong)param_4->Depth * (longlong)(int)uVar18;
  puVar17 = FMemory::Malloc(uVar19,0);
  uVar4 = param_4->DestX;
  uVar6 = param_4->DestY;
  uVar7 = param_4->DestZ;
  iVar8 = param_4->SrcX;
  iVar9 = param_4->SrcY;
  iVar10 = param_4->SrcZ;
  uVar11 = param_4->Width;
  uVar12 = param_4->Height;
  __return_storage_ptr__->Data = puVar17;
  uVar13 = GFrameNumberRenderThread;
  (__return_storage_ptr__->UpdateRegion).DestX = uVar4;
  (__return_storage_ptr__->UpdateRegion).DestY = uVar6;
  (__return_storage_ptr__->UpdateRegion).DestZ = uVar7;
  (__return_storage_ptr__->UpdateRegion).SrcX = iVar8;
  __return_storage_ptr__->MipIndex = param_3;
  uVar4 = param_4->Depth;
  (__return_storage_ptr__->UpdateRegion).SrcY = iVar9;
  (__return_storage_ptr__->UpdateRegion).SrcZ = iVar10;
  (__return_storage_ptr__->UpdateRegion).Width = uVar11;
  (__return_storage_ptr__->UpdateRegion).Height = uVar12;
  __return_storage_ptr__->DepthPitch = uVar18;
  __return_storage_ptr__->DataSizeBytes = (uint)uVar19;
  __return_storage_ptr__->FrameNumber = uVar13;
  (__return_storage_ptr__->UpdateRegion).Depth = uVar4;
  __return_storage_ptr__->RowPitch = iVar2 * uVar3;
  __return_storage_ptr__->Texture = param_2;
  return __return_storage_ptr__;
}

// RHICreateShaderLibrary_RenderThread @ 145cb71a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShaderLibrary> __thiscall
FDynamicRHI::RHICreateShaderLibrary_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,EShaderPlatform param_2,
          FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  TRefCountPtr<FRHIShaderLibrary> TVar5;
  FRHICommandListImmediate *pFVar6;
  undefined6 in_register_00000082;
  undefined8 *in_stack_00000030;
  
  pFVar6 = (FRHICommandListImmediate *)0x0;
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x29,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar5.Reference = (FRHIShaderLibrary *)(*pcVar2)();
        return (TRefCountPtr<FRHIShaderLibrary>)TVar5.Reference;
      }
    }
    bVar4 = FRHICommandListImmediate::StallRHIThread
                      ((FRHICommandListImmediate *)CONCAT62(in_register_00000082,param_2));
    if (bVar4) {
      pFVar6 = (FRHICommandListImmediate *)CONCAT62(in_register_00000082,param_2);
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0xb0))
            (GDynamicRHI,param_1,(ulonglong)param_3 & 0xffff,param_4,in_stack_00000030);
  if (pFVar6 != (FRHICommandListImmediate *)0x0) {
    bVar4 = IsInRenderingThread();
    if ((!bVar4) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x766,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar5.Reference = (FRHIShaderLibrary *)(*pcVar2)();
        return (TRefCountPtr<FRHIShaderLibrary>)TVar5.Reference;
      }
    }
    LOCK();
    aVar3 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
    UNLOCK();
    if ((int)GRHIThreadStallRequestCount + -1 < 0) {
      GRHIThreadStallRequestCount = aVar3;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewStallCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x768,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar5.Reference = (FRHIShaderLibrary *)(*pcVar2)();
        return (TRefCountPtr<FRHIShaderLibrary>)TVar5.Reference;
      }
    }
    else {
      bVar4 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
      GRHIThreadStallRequestCount = aVar3;
      if (bVar4) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
      }
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)*in_stack_00000030 != (void *)0x0) {
    FMemory::Free((void *)*in_stack_00000030);
  }
  return (TRefCountPtr<FRHIShaderLibrary>)(FRHIShaderLibrary *)param_1;
}

// RHIEndMultiUpdateTexture3D @ 145cb7c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIEndMultiUpdateTexture3D
          (FDynamicRHI *this,FRHICommandListBase *param_1,
          TArray<FUpdateTexture3DData,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2->ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      pcVar1 = *(code **)(GDynamicRHI->_padding_ + 0x410);
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(GDynamicRHI,param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x88)
      ;
      iVar5 = param_2->ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// RHIEndRenderQuery_TopOfPipe @ 145cb7d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIEndRenderQuery_TopOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  FRHICommandBase *pFVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((param_1->PersistentState).bImmediate != '\0')) {
    pIVar1 = FRHICommandListBase::GetContext(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x188);
                    /* WARNING: Could not recover jumptable at 0x000145cb7da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  pFVar2 = FMemStackBase::Alloc(&param_1->MemManager,0x18,8);
  param_1->NumCommands = param_1->NumCommands + 1;
  *param_1->CommandLink = pFVar2;
  param_1->CommandLink = &pFVar2->Next;
  pFVar2->Next = (FRHICommandBase *)0x0;
  pFVar2->_padding_ = (longlong)&___7FRHICommandEndRenderQuery__6B_;
  pFVar2[1]._padding_ = (longlong)param_2;
  return;
}

// RHIEndUpdateTexture3D @ 145cb7e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIEndUpdateTexture3D
          (FDynamicRHI *this,FRHICommandListBase *param_1,FUpdateTexture3DData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x8bf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GFrameNumberRenderThread != param_2->FrameNumber) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GFrameNumberRenderThread == UpdateData.FrameNumber",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x8c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x200))
            (GDynamicRHI,param_1,param_2->Texture,param_2->MipIndex,&param_2->UpdateRegion,
             param_2->RowPitch,param_2->DepthPitch,param_2->Data);
  FMemory::Free(param_2->Data);
  param_2->Data = (uchar *)0x0;
  return;
}

// RHILockBuffer @ 145cb8f20

/* WARNING: Removing unreachable block (ram,0x000145cb9262) */
/* WARNING: Removing unreachable block (ram,0x000145cb954e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FDynamicRHI::RHILockBuffer
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_FDynamicRHI_LockBuffer>
  FVar12;
  void *pvVar13;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_13_::FStat_STAT_RHIMETHOD_LockBuffer_Malloc>
  FVar14;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_8_::FStat_STAT_RHIMETHOD_LockBuffer_FlushAndLock>
  FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FName FVar18;
  FName FVar19;
  ulonglong uVar20;
  FName FVar21;
  bool bVar22;
  FColor_u_0 local_110;
  FColor_u_0 local_10c;
  FColor_u_0 local_108 [2];
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_d8;
  FName local_c8;
  LARGE_INTEGER local_b8;
  FRHICommandListScopedFlushAndExecute local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  uVar20 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FDynamicRHI_LockBuffer =
         (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_FDynamicRHI_LockBuffer>
          )0x0;
    pFVar11 = ::FName::FName(&local_68,"STAT_FDynamicRHI_LockBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_LockBuffer,*pFVar11,
               L"STAT_FDynamicRHI_LockBuffer","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FDynamicRHI_LockBuffer;
  if (StatPtr_STAT_FDynamicRHI_LockBuffer ==
      (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_FDynamicRHI_LockBuffer>
       )0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_FDynamicRHI_LockBuffer");
    FVar12 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_FDynamicRHI_LockBuffer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_LockBuffer,*pFVar11
                          ,L"STAT_FDynamicRHI_LockBuffer","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar12;
  bVar3 = false;
  bVar6 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_145cb911e:
    bVar4 = false;
    FVar21 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_100.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x80d);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145cb911e;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar4 = true;
  }
  pTVar8 = CVarRHICmdBufferWriteLocks.Ref;
  if (((GRHICommandList.bLatchedBypass != false) && ((param_1->PersistentState).bImmediate != '\0'))
     || (param_1->bExecuting != false)) {
    pvVar13 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x448))
                                (GDynamicRHI,param_1,param_2,param_3,param_4,param_5);
    goto LAB_145cb9889;
  }
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar2 = (code *)swi(3);
    pvVar13 = (void *)(*pcVar2)();
    return pvVar13;
  }
  if ((pTVar8->ShadowedValue[1] < 1) || (param_5 == RLM_ReadOnly)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_RHIMETHOD_LockBuffer_FlushAndLock =
           (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_8_::FStat_STAT_RHIMETHOD_LockBuffer_FlushAndLock>
            )0x0;
      pFVar11 = ::FName::FName(&local_48,"STAT_RHIMETHOD_LockBuffer_FlushAndLock");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_LockBuffer_FlushAndLock,
                 *pFVar11,L"STAT_RHIMETHOD_LockBuffer_FlushAndLock","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    FVar15 = StatPtr_STAT_RHIMETHOD_LockBuffer_FlushAndLock;
    if (StatPtr_STAT_RHIMETHOD_LockBuffer_FlushAndLock ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_8_::FStat_STAT_RHIMETHOD_LockBuffer_FlushAndLock>
         )0x0) {
      pFVar11 = ::FName::FName(&local_40,"STAT_RHIMETHOD_LockBuffer_FlushAndLock");
      FVar15 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_8_::FStat_STAT_RHIMETHOD_LockBuffer_FlushAndLock>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RHIMETHOD_LockBuffer_FlushAndLock,*pFVar11,
                            L"STAT_RHIMETHOD_LockBuffer_FlushAndLock","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar19 = *(FName *)FVar15;
    bVar9 = false;
    bVar5 = false;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_145cb9683:
      bVar22 = false;
      FVar19 = local_c8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_108[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar9 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
          local_f0.Number = FVar19.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x815);
          bVar9 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145cb9683;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar22 = true;
    }
    if (__CsvProfilerStat2070 == false) {
      FCsvProfilerTrace::OutputInlineStat("LockBuffer_BottomOfPipe",_GCsvCategory_RHITFlushes.Index)
      ;
      __CsvProfilerStat2070 = true;
    }
    uVar7 = _GCsvCategory_RHITFlushes.Index;
    FCsvProfiler::BeginStat
              ("LockBuffer_BottomOfPipe",_GCsvCategory_RHITFlushes.Index,
               "CSV_LockBuffer_BottomOfPipe");
    if (((param_1->PersistentState).bImmediate == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsImmediate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                            ,0x17,L"This operation expects the immediate command list."), bVar10)) {
      pcVar2 = (code *)swi(3);
      pvVar13 = (void *)(*pcVar2)();
      return pvVar13;
    }
    FRHICommandListScopedFlushAndExecute::FRHICommandListScopedFlushAndExecute
              (&local_b0,(FRHICommandListImmediate *)param_1);
    pvVar13 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x448))
                                (GDynamicRHI,param_1,param_2,param_3,param_4,param_5);
    (local_b0.RHICmdList)->field_0x64 = 0;
    FCsvProfiler::EndStat("LockBuffer_BottomOfPipe",uVar7);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar22) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_88.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
        local_88.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_a8);
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_88.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
        local_88.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
        local_88.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
        local_88.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_88);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) goto LAB_145cb980f;
        FThreadStats::Flush(pFVar16,false,false);
      }
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      StatPtr_STAT_RHIMETHOD_LockBuffer_Malloc =
           (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_13_::FStat_STAT_RHIMETHOD_LockBuffer_Malloc>
            )0x0;
      pFVar11 = ::FName::FName(&local_58,"STAT_RHIMETHOD_LockBuffer_Malloc");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_LockBuffer_Malloc,*pFVar11,
                 L"STAT_RHIMETHOD_LockBuffer_Malloc","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    FVar14 = StatPtr_STAT_RHIMETHOD_LockBuffer_Malloc;
    if (StatPtr_STAT_RHIMETHOD_LockBuffer_Malloc ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_13_::FStat_STAT_RHIMETHOD_LockBuffer_Malloc>
         )0x0) {
      pFVar11 = ::FName::FName(&local_50,"STAT_RHIMETHOD_LockBuffer_Malloc");
      FVar14 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_13_::FStat_STAT_RHIMETHOD_LockBuffer_Malloc>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_LockBuffer_Malloc,
                            *pFVar11,L"STAT_RHIMETHOD_LockBuffer_Malloc","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar19 = *(FName *)FVar14;
    bVar9 = false;
    bVar5 = false;
    local_d8.ComparisonIndex.Value = 0;
    local_d8.Number = 0;
    if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
      pvVar13 = FMemory::Malloc((ulonglong)param_4,0x10);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_10c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_10c._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
        bVar9 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
          local_f8.Number = FVar19.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x81d);
          bVar9 = true;
          bVar5 = true;
        }
      }
      bVar22 = FThreadStats::bPrimaryEnable != false;
      FVar18 = local_d8;
      if (bVar22) {
        FThreadStats::AddMessage(FVar19,CycleScopeStart);
        FVar18 = FVar19;
      }
      pvVar13 = FMemory::Malloc((ulonglong)param_4,0x10);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar22) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        if (pFVar16->ScopeCount <= pFVar16->bWaitForExplicitFlush) goto LAB_145cb981e;
        local_98.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_98.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b8);
        local_98.StatData.Pad[4] = '\0';
        local_98.StatData.Pad[5] = '\0';
        local_98.StatData.Pad[6] = '\0';
        local_98.StatData.Pad[7] = '\0';
        local_98.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_98.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_98.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_98.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_98);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
          goto LAB_145cb981e;
        }
LAB_145cb980f:
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
  }
LAB_145cb981e:
  FLockTracker::Lock(&GLockTracker,param_2,pvVar13,param_3,param_4,param_5);
LAB_145cb9889:
  if ((pvVar13 == (void *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x82a,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pvVar13 = (void *)(*pcVar2)();
    return pvVar13;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_78.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_78);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return pvVar13;
}

// RHILockStagingBuffer @ 145cb99b0

void * __thiscall
FDynamicRHI::RHILockStagingBuffer
          (FDynamicRHI *this,FRHIStagingBuffer *param_1,FRHIGPUFence *param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x878,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// RHIMapStagingSurface_RenderThread @ 145cb99f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIMapStagingSurface_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3,
          FRHIGPUFence *param_4,void **param_5,int *param_6,int *param_7)

{
  FRHICommandListBase **ppFVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  atomic<int> aVar6;
  FRHIGPUFence *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FRHIGPUFence *pFVar11;
  char cVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_5_::FStat_STAT_RHIMETHOD_MapStagingSurface_Flush>
  FVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_6_::FStat_STAT_RHIMETHOD_MapStagingSurface_RenderThread>
  FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  ulonglong uVar18;
  FName FVar19;
  FRHICommandListImmediate *pFVar20;
  bool bVar21;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_c8;
  undefined1 local_b8 [16];
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  undefined8 local_48;
  longlong lStack_40;
  
  pFVar11 = param_4;
  uVar18 = (ulonglong)_tls_index;
  if (param_4 == (FRHIGPUFence *)0x0) {
LAB_145cb9a5e:
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) < ::_TSS0
       ) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        StatPtr_STAT_RHIMETHOD_MapStagingSurface_Flush =
             (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_5_::FStat_STAT_RHIMETHOD_MapStagingSurface_Flush>
              )0x0;
        pFVar14 = ::FName::FName(&local_68,"STAT_RHIMETHOD_MapStagingSurface_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_MapStagingSurface_Flush,
                   *pFVar14,L"STAT_RHIMETHOD_MapStagingSurface_Flush","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar13 = StatPtr_STAT_RHIMETHOD_MapStagingSurface_Flush;
    pFVar7 = param_4;
    if (StatPtr_STAT_RHIMETHOD_MapStagingSurface_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_5_::FStat_STAT_RHIMETHOD_MapStagingSurface_Flush>
         )0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_RHIMETHOD_MapStagingSurface_Flush");
      FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_5_::FStat_STAT_RHIMETHOD_MapStagingSurface_Flush>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RHIMETHOD_MapStagingSurface_Flush,*pFVar14,
                            L"STAT_RHIMETHOD_MapStagingSurface_Flush","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      pFVar7 = param_4;
    }
    param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
    FVar19 = *(FName *)FVar13;
    bVar8 = false;
    bVar10 = false;
    local_d8.ComparisonIndex.Value = 0;
    local_d8.Number = 0;
    if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_145cb9c22:
      bVar9 = false;
      FVar19 = local_d8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        param_4._0_4_ = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&param_4,(char *)*(FName *)((longlong)FVar13 + 0x10));
        pFVar7 = (FRHIGPUFence *)CONCAT44(param_4._4_4_,param_4._0_4_);
        bVar8 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_e8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
          local_e8.Number = FVar19.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_e8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x8d8);
          pFVar7 = (FRHIGPUFence *)CONCAT44(param_4._4_4_,param_4._0_4_);
          bVar8 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145cb9c22;
      param_4 = pFVar7;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      pFVar7 = param_4;
    }
    local_78 = 0;
    uStack_70 = 0;
    lStack_40 = (ulonglong)uStack_6c << 0x20;
    local_48 = 0;
    param_4 = pFVar7;
    FRHICommandListExecutor::Submit
              (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)local_b8,
               (ERHISubmitFlags)&local_48);
    if ((FRHICommandListBase **)local_b8._0_8_ != (FRHICommandListBase **)0x0) {
      LOCK();
      ppFVar1 = (FRHICommandListBase **)(local_b8._0_8_ + 0x30);
      iVar3 = *(int *)ppFVar1;
      *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)((*(FRHICommandListBase **)local_b8._0_8_)->MemManager).Top)(local_b8._0_8_,1);
      }
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar9) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_a0.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
        local_a0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter((LARGE_INTEGER *)(local_b8 + 8));
        local_a0.StatData.Pad[4] = '\0';
        local_a0.StatData.Pad[5] = '\0';
        local_a0.StatData.Pad[6] = '\0';
        local_a0.StatData.Pad[7] = '\0';
        local_a0.StatData.Pad[0] = local_b8[8];
        local_a0.StatData.Pad[1] = local_b8[9];
        local_a0.StatData.Pad[2] = local_b8[10];
        local_a0.StatData.Pad[3] = local_b8[0xb];
        FThreadStats::AddStatMessage(pFVar16,&local_a0);
        piVar2 = &pFVar16->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    uVar18 = (ulonglong)_tls_index;
  }
  else {
    cVar12 = (**(code **)(param_4->_padding_ + 0x20))(param_4);
    if ((cVar12 == '\0') || ((pFVar11->NumPendingWriteCommands).Counter != 0)) goto LAB_145cb9a5e;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) < ::_TSS1)
  {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      StatPtr_STAT_RHIMETHOD_MapStagingSurface_RenderThread =
           (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_6_::FStat_STAT_RHIMETHOD_MapStagingSurface_RenderThread>
            )0x0;
      pFVar14 = ::FName::FName(&local_58,"STAT_RHIMETHOD_MapStagingSurface_RenderThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_MapStagingSurface_RenderThread
                 ,*pFVar14,L"STAT_RHIMETHOD_MapStagingSurface_RenderThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar15 = StatPtr_STAT_RHIMETHOD_MapStagingSurface_RenderThread;
  if (StatPtr_STAT_RHIMETHOD_MapStagingSurface_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_6_::FStat_STAT_RHIMETHOD_MapStagingSurface_RenderThread>
       )0x0) {
    pFVar14 = ::FName::FName(&local_50,"STAT_RHIMETHOD_MapStagingSurface_RenderThread");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIMapStagingSurface_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,unsigned_int,FRHIGPUFence_*,void_*_&,int_&,int_&)_::_6_::FStat_STAT_RHIMETHOD_MapStagingSurface_RenderThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RHIMETHOD_MapStagingSurface_RenderThread,*pFVar14,
                          L"STAT_RHIMETHOD_MapStagingSurface_RenderThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_e0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x8dc);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      goto LAB_145cb9f0f;
    }
  }
  bVar9 = false;
  FVar19 = local_c8;
LAB_145cb9f0f:
  if (GRHIGlobals.SupportsMultithreading == false) {
    pFVar20 = (FRHICommandListImmediate *)0x0;
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      bVar21 = IsInRenderingThread();
      if (!bVar21) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                            ,0x29,L"");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      bVar21 = FRHICommandListImmediate::StallRHIThread(param_1);
      if (bVar21) {
        pFVar20 = param_1;
      }
    }
    if (param_3 == 0xffffffff) {
      uVar4 = 0;
      bVar21 = *(int *)&param_1->field_0x29c != 0;
      if (bVar21) {
        for (; (*(uint *)&param_1->field_0x29c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      param_3 = 0x20;
      if (bVar21) {
        param_3 = uVar4;
      }
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x230))
              (GDynamicRHI,param_2,pFVar11,param_5,param_6,param_7,param_3);
    if (pFVar20 != (FRHICommandListImmediate *)0x0) {
      bVar21 = IsInRenderingThread();
      if ((!bVar21) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x766,L"");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      aVar6 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
      UNLOCK();
      if ((int)GRHIThreadStallRequestCount + -1 < 0) {
        GRHIThreadStallRequestCount = aVar6;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewStallCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x768,L"");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        bVar21 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
        GRHIThreadStallRequestCount = aVar6;
        if (bVar21) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
        }
      }
    }
  }
  else {
    if (param_3 == 0xffffffff) {
      uVar4 = 0;
      bVar21 = *(int *)&param_1->field_0x29c != 0;
      if (bVar21) {
        for (; (*(uint *)&param_1->field_0x29c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      param_3 = 0x20;
      if (bVar21) {
        param_3 = uVar4;
      }
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x230))
              (GDynamicRHI,param_2,pFVar11,param_5,param_6,param_7,param_3);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_90.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_90);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// RHIReadSurfaceFloatData_RenderThread @ 145cba2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIReadSurfaceFloatData_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          TIntRect<int> *param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,
          FReadSurfaceDataFlags *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FColor_u_0 FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  FColor_u_0 local_res20;
  uint uStackX_24;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 TStack_60;
  FName local_58;
  ECubeFace local_48;
  ERangeCompressionMode EStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined8 local_38;
  uint local_30;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res20._s_0,
                                "STAT_RHIMETHOD_ReadSurfaceFloatData_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush,
                   *pFVar7,L"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush;
  if (StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
       )0x0) {
    pFVar7 = ::FName::FName((FName *)&local_68._s_0,"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,FReadSurfaceDataFlags)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush,*pFVar7,
                         L"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar10.Bits = (uint)FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar10.Bits;
        uStackX_24 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x900);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar10.Bits;
      uStackX_24 = uVar9;
      local_58 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = local_58.ComparisonIndex.Value;
      goto LAB_145cba467;
    }
  }
  bVar5 = false;
  FVar11 = local_58;
LAB_145cba467:
  if (__CsvProfilerStat2305 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RHIReadSurfaceFloatData_RenderThread",_GCsvCategory_RHITFlushes.Index);
    __CsvProfilerStat2305 = true;
  }
  uVar9 = _GCsvCategory_RHITFlushes.Index;
  FCsvProfiler::BeginStat
            ("RHIReadSurfaceFloatData_RenderThread",_GCsvCategory_RHITFlushes.Index,
             "CSV_RHIReadSurfaceFloatData_RenderThread");
  TStack_60 = (TIntPoint<int>_u_0)((ulonglong)(uint)TStack_60._4_4_ << 0x20);
  local_68 = (TIntPoint<int>_u_0)0x0;
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res20._s_0,
             (ERHISubmitFlags)&local_68);
  puVar3 = (undefined8 *)CONCAT44(uStackX_24,local_res20.Bits);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  local_68 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TStack_60 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_48 = param_5->CubeFace;
  EStack_44 = param_5->CompressionMode;
  uStack_40 = *(undefined4 *)&param_5->bLinearToGamma;
  fStack_3c = param_5->MaxDepthRange;
  local_38._0_1_ = param_5->bOutputStencil;
  local_38._1_1_ = param_5->MipLevel;
  local_38._2_2_ = *(undefined2 *)&param_5->field_0x12;
  local_38._4_4_ = param_5->ArrayIndex;
  local_30 = param_5->GPUIndex;
  (**(code **)(GDynamicRHI->_padding_ + 0x240))(GDynamicRHI,param_2,&local_68,param_4,&local_48);
  FCsvProfiler::EndStat("RHIReadSurfaceFloatData_RenderThread",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      TStack_60 = (TIntPoint<int>_u_0)
                  (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
      local_68 = (TIntPoint<int>_u_0)((ulonglong)param_5 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_68._s_0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIReadSurfaceFloatData_RenderThread @ 145cba6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIReadSurfaceFloatData_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          TIntRect<int> *param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,
          ECubeFace param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res20;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 TStack_40;
  FName local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res20.s,"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush,
                   *pFVar7,L"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush;
  if (StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
       )0x0) {
    pFVar7 = ::FName::FName((FName *)&local_48._s_0,"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIReadSurfaceFloatData_RenderThread(FRHICommandListImmediate_&,FRHITexture_*,UE::Math::TIntRect<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>_&,ECubeFace,int,int)_::_2_::FStat_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RHIMETHOD_ReadSurfaceFloatData_Flush,*pFVar7,
                         L"STAT_RHIMETHOD_ReadSurfaceFloatData_Flush","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar10.Value;
        local_res20.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x8f8);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      local_38 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = local_38.ComparisonIndex.Value;
      goto LAB_145cba86f;
    }
  }
  bVar5 = false;
  FVar11 = local_38;
LAB_145cba86f:
  if (__CsvProfilerStat2297 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RHIReadSurfaceFloatData_RenderThread",_GCsvCategory_RHITFlushes.Index);
    __CsvProfilerStat2297 = true;
  }
  uVar9 = _GCsvCategory_RHITFlushes.Index;
  FCsvProfiler::BeginStat
            ("RHIReadSurfaceFloatData_RenderThread",_GCsvCategory_RHITFlushes.Index,
             "CSV_RHIReadSurfaceFloatData_RenderThread");
  TStack_40 = (TIntPoint<int>_u_0)((ulonglong)(uint)TStack_40._4_4_ << 0x20);
  local_48 = (TIntPoint<int>_u_0)0x0;
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res20.s,
             (ERHISubmitFlags)&local_48);
  puVar3 = (undefined8 *)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  local_48 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TStack_40 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  (**(code **)(GDynamicRHI->_padding_ + 0x248))
            (GDynamicRHI,param_2,&local_48,param_4,param_5,param_6,param_7);
  FCsvProfiler::EndStat("RHIReadSurfaceFloatData_RenderThread",uVar9);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      TStack_40 = (TIntPoint<int>_u_0)
                  (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res20);
      local_48._s_0.Y = 0;
      local_48._s_0.X = local_res20.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_48._s_0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIUnlockBuffer @ 145cbae10

/* WARNING: Removing unreachable block (ram,0x000145cbb233) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUnlockBuffer(FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockBuffer_RenderThread>
  FVar14;
  FRHICommandBase *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_8_::FStat_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock>
  FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FColor_u_0 FVar19;
  FNameEntryId FVar20;
  FName FVar21;
  FName FVar22;
  ulonglong uVar23;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_118;
  uint uStack_114;
  FColor_u_0 local_110;
  uint local_10c;
  FName local_108;
  uint local_100;
  uint uStack_fc;
  FName local_f8;
  FName local_e8;
  undefined8 *local_d8;
  FRHICommandListScopedFlushAndExecute local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  undefined1 local_98 [24];
  EResourceLockMode EStack_80;
  undefined4 uStack_7c;
  FRHIBuffer *local_78;
  FRHICommandBase *pFStack_70;
  void *pvStack_68;
  FRHICommandBase *pFStack_60;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38 [2];
  
  uVar23 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FDynamicRHI_UnlockBuffer_RenderThread =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockBuffer_RenderThread>
          )0x0;
    pFVar13 = ::FName::FName(&local_50,"STAT_FDynamicRHI_UnlockBuffer_RenderThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDynamicRHI_UnlockBuffer_RenderThread,
               *pFVar13,L"STAT_FDynamicRHI_UnlockBuffer_RenderThread","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FDynamicRHI_UnlockBuffer_RenderThread;
  if (StatPtr_STAT_FDynamicRHI_UnlockBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockBuffer_RenderThread>
       )0x0) {
    pFVar13 = ::FName::FName(&local_48,"STAT_FDynamicRHI_UnlockBuffer_RenderThread");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockBuffer_RenderThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FDynamicRHI_UnlockBuffer_RenderThread,*pFVar13,
                          L"STAT_FDynamicRHI_UnlockBuffer_RenderThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar14;
  bVar5 = false;
  bVar8 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar19.Bits = (uint)FVar22.ComparisonIndex.Value;
  uVar12 = FVar22.Number;
  if ((FVar19.Bits == 0) && (uVar12 == 0)) {
LAB_145cbb011:
    bVar6 = false;
    FVar22 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.Bits = FVar19.Bits;
        local_10c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_110._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x830);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145cbb011;
    local_118.Bits = FVar19.Bits;
    uStack_114 = uVar12;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar6 = true;
  }
  if (((GRHICommandList.bLatchedBypass != false) && ((param_1->PersistentState).bImmediate != '\0'))
     || (param_1->bExecuting != false)) {
    (**(code **)(GDynamicRHI->_padding_ + 0x450))(GDynamicRHI,param_1);
    goto LAB_145cbb4f7;
  }
  FLockTracker::Unlock(&GLockTracker,(FLockParams *)local_98,param_2);
  pTVar9 = CVarRHICmdBufferWriteLocks.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((0 < pTVar9->ShadowedValue[1]) && (EStack_80 != RLM_ReadOnly)) {
    pFStack_70 = (FRHICommandBase *)local_98._0_8_;
    pvStack_68 = (void *)local_98._8_8_;
    pFStack_60 = (FRHICommandBase *)local_98._16_8_;
    local_78 = param_2;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar15 = FMemStackBase::Alloc(&param_1->MemManager,0x40,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar15;
      param_1->CommandLink = &pFVar15->Next;
      pFVar15[1]._padding_ = (longlong)local_78;
      pFVar15[1].Next = pFStack_70;
      pFVar15->Next = (FRHICommandBase *)0x0;
      pFVar15->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FDynamicRHI::RHIUnlockBuffer'::`13'::<lambda_1>_>
            ::_vftable_;
      pFVar15[2]._padding_ = (longlong)pvStack_68;
      pFVar15[2].Next = pFStack_60;
      pFVar15[3].Next = (FRHICommandBase *)L"RHIUnlockBuffer";
      pFVar15[3]._padding_ = CONCAT44(uStack_7c,EStack_80);
    }
    else {
      `FDynamicRHI::RHIUnlockBuffer'::__l13::<lambda_1>::operator()(&local_78,param_1);
    }
    FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_d8,0));
    if (local_d8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_d8 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_d8)(local_d8,1);
      }
    }
    goto LAB_145cbb4f7;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_8_::FStat_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock>
          )0x0;
    pFVar13 = ::FName::FName(&local_40,"STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock,
               *pFVar13,L"STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar16 = StatPtr_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock;
  if (StatPtr_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_8_::FStat_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock>
       )0x0) {
    pFVar13 = ::FName::FName(local_38,"STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_8_::FStat_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock,*pFVar13,
                          L"STAT_RHIMETHOD_UnlockBuffer_FlushAndUnlock","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar10 = false;
  bVar7 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar12 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar12 == 0)) {
LAB_145cbb36b:
    bVar4 = false;
    FVar21 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar20.Value;
        local_108.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x839);
        bVar10 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145cbb36b;
    local_100 = FVar20.Value;
    uStack_fc = uVar12;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar4 = true;
  }
  if (__CsvProfilerStat2106 == false) {
    FCsvProfilerTrace::OutputInlineStat("UnlockBuffer_BottomOfPipe",_GCsvCategory_RHITFlushes.Index)
    ;
    __CsvProfilerStat2106 = true;
  }
  uVar12 = _GCsvCategory_RHITFlushes.Index;
  FCsvProfiler::BeginStat
            ("UnlockBuffer_BottomOfPipe",_GCsvCategory_RHITFlushes.Index,
             "CSV_UnlockBuffer_BottomOfPipe");
  if (((param_1->PersistentState).bImmediate == '\0') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsImmediate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                          ,0x17,L"This operation expects the immediate command list."), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRHICommandListScopedFlushAndExecute::FRHICommandListScopedFlushAndExecute
            (&local_d0,(FRHICommandListImmediate *)param_1);
  (**(code **)(GDynamicRHI->_padding_ + 0x450))(GDynamicRHI,param_1);
  (local_d0.RHICmdList)->field_0x64 = 0;
  FCsvProfiler::EndStat("UnlockBuffer_BottomOfPipe",uVar12);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_b8);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
LAB_145cbb4f7:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_a8);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  return;
}

// RHIUnlockStagingBuffer @ 145cbb5f0

void __thiscall FDynamicRHI::RHIUnlockStagingBuffer(FDynamicRHI *this,FRHIStagingBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x87e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIUnmapStagingSurface_RenderThread @ 145cbb630

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUnmapStagingSurface_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  atomic<int> aVar2;
  FRHICommandListImmediate *pFVar3;
  bool bVar4;
  
  if (GRHIGlobals.SupportsMultithreading) {
    UNRECOVERED_JUMPTABLE = *(code **)(GDynamicRHI->_padding_ + 0x238);
    if (param_3 == 0xffffffff) {
      uVar1 = 0;
      bVar4 = *(int *)&param_1->field_0x29c != 0;
      if (bVar4) {
        for (; (*(uint *)&param_1->field_0x29c >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      param_3 = 0x20;
      if (bVar4) {
        param_3 = uVar1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000145cbb68b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(GDynamicRHI,param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  pFVar3 = (FRHICommandListImmediate *)0x0;
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x29,L"");
      if (bVar4) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    bVar4 = FRHICommandListImmediate::StallRHIThread(param_1);
    if (bVar4) {
      pFVar3 = param_1;
    }
  }
  if (param_3 == 0xffffffff) {
    uVar1 = 0;
    bVar4 = *(int *)&param_1->field_0x29c != 0;
    if (bVar4) {
      for (; (*(uint *)&param_1->field_0x29c >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    param_3 = 0x20;
    if (bVar4) {
      param_3 = uVar1;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x238))(GDynamicRHI,param_2,param_3);
  if (pFVar3 != (FRHICommandListImmediate *)0x0) {
    bVar4 = IsInRenderingThread();
    if ((!bVar4) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x766,L"");
      if (bVar4) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    LOCK();
    aVar2 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
    UNLOCK();
    if ((int)GRHIThreadStallRequestCount + -1 < 0) {
      GRHIThreadStallRequestCount = aVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewStallCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x768,L"");
      if (bVar4) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else {
      bVar4 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
      GRHIThreadStallRequestCount = aVar2;
      if (bVar4) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
      }
    }
  }
  return;
}

// RHIWriteGPUFence_TopOfPipe @ 145cbb7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIWriteGPUFence_TopOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIGPUFence *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHIComputeContext *pIVar1;
  FRHICommandBase *pFVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((param_1->PersistentState).bImmediate != '\0')) {
    pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x000145cbb814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  pFVar2 = FMemStackBase::Alloc(&param_1->MemManager,0x18,8);
  param_1->NumCommands = param_1->NumCommands + 1;
  *param_1->CommandLink = pFVar2;
  param_1->CommandLink = &pFVar2->Next;
  pFVar2->Next = (FRHICommandBase *)0x0;
  pFVar2->_padding_ = (longlong)&___7FRHICommandWriteGPUFence__6B_;
  pFVar2[1]._padding_ = (longlong)param_2;
  if (param_2 != (FRHIGPUFence *)0x0) {
    LOCK();
    (param_2->NumPendingWriteCommands).Counter = (param_2->NumPendingWriteCommands).Counter + 1;
    UNLOCK();
  }
  return;
}

// UnlockStagingBuffer_RenderThread @ 145cc82e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FDynamicRHI::UnlockStagingBuffer_RenderThread
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2)

{
  int *piVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FRHICommandListImmediate *pFVar13;
  FColor_u_0 local_res20 [2];
  FName local_58;
  LARGE_INTEGER local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
           )0x0) {
        pFVar8 = ::FName::FName(&local_48,"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread,*pFVar8,
                   L"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread;
  if (StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
       )0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FDynamicRHI::UnlockStagingBuffer_RenderThread(FRHICommandListImmediate_&,FRHIStagingBuffer_*)_::_2_::FStat_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread,*pFVar8,
                         L"STAT_FDynamicRHI_UnlockStagingBuffer_RenderThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar11.Value;
        local_58.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x89a);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_50.s.LowPart = FVar11.Value;
      local_50.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_145cc8456;
    }
  }
  bVar5 = false;
  FVar12 = local_38;
LAB_145cc8456:
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x89b,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GRHIGlobals.SupportsMultithreading == false) {
    pFVar13 = (FRHICommandListImmediate *)0x0;
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      bVar7 = IsInRenderingThread();
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x29,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      bVar7 = FRHICommandListImmediate::StallRHIThread(param_1);
      if (bVar7) {
        pFVar13 = param_1;
      }
    }
    (**(code **)(GDynamicRHI->_padding_ + 0xf0))(GDynamicRHI,param_2);
    if (pFVar13 != (FRHICommandListImmediate *)0x0) {
      bVar7 = IsInRenderingThread();
      if ((!bVar7) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x766,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      aVar3 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
      UNLOCK();
      if ((int)GRHIThreadStallRequestCount + -1 < 0) {
        GRHIThreadStallRequestCount = aVar3;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewStallCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x768,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        bVar7 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
        GRHIThreadStallRequestCount = aVar3;
        if (bVar7) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
        }
      }
    }
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0xf0))(GDynamicRHI,param_2);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_50);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_50.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_50.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_50.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_50.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

