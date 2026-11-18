// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// FFakeStereoRenderingDevice @ 148b1d6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FFakeStereoRenderingDevice * __thiscall
FFakeStereoRenderingDevice::FFakeStereoRenderingDevice
          (FFakeStereoRenderingDevice *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  TConsoleVariableData<float> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  FStereoShaderAspects local_res10 [8];
  float local_res18 [2];
  
  this->_padding_ = (longlong)&_vftable__for__IStereoRendering__;
  this->_padding_ = (longlong)&_vftable__for__IStereoRenderTargetManager__;
  pUVar8 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  this->FOVInDegrees = *(float *)&(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x14;
  pUVar8 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  this->TopFOVRatio = *(float *)&(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x18;
  pUVar8 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pvVar5 = ThreadLocalStoragePointer;
  lVar12 = 4;
  this->DifferenceBetweenEyes =
       *(float *)&(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x1c;
  uVar11 = (ulonglong)_tls_index;
  this->Height = param_2;
  this->NumViews = param_3;
  this->Width = param_1;
  lVar9 = *(longlong *)((longlong)pvVar5 + uVar11 * 8);
  this->bLayeredRTs = true;
  if (*(int *)(lVar9 + 0x9d4c) <
      `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      local_res18[0] = 0.0;
      TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
                (&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                  ::__l2::CVarEmulateStereoFOV,L"r.StereoEmulationFOV",local_res18,
                 L"FOV in degrees, of the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::FFakeStereoRenderingDevice'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoFOV__);
      _Init_thread_footer(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar9 + 0x9d4c) <
      `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      local_res18[0] = 0.0;
      TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
                (&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                  ::__l2::CVarEmulateStereoWidth,L"r.StereoEmulationWidth",(int *)local_res18,
                 L"Width of the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::FFakeStereoRenderingDevice'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoWidth__);
      _Init_thread_footer(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*(int *)(lVar9 + 0x9d4c) <
      `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
      ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      local_res18[0] = 0.0;
      TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
                (&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                  ::__l2::CVarEmulateStereoHeight,L"r.StereoEmulationHeight",(int *)local_res18,
                 L"Height of the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::FFakeStereoRenderingDevice'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoHeight__);
      _Init_thread_footer(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if (*(int *)(lVar9 + 0x9d4c) <
      `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
      ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      local_res18[0] = 0.0;
      TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
                (&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                  ::__l2::CVarEmulateStereoViews,L"r.StereoEmulationViews",(int *)local_res18,
                 L"Number of views in the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::FFakeStereoRenderingDevice'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoViews__);
      _Init_thread_footer(&`public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  pTVar2 = `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
           ::__l2::CVarEmulateStereoFOV.Ref;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_148b1d7de:
    lVar9 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    if (bVar6) goto LAB_148b1d7de;
    lVar9 = 4;
  }
  fVar14 = *(float *)((longlong)pTVar2->ShadowedValue + lVar9);
  if (fVar14 != 0.0) {
    if (__real_43960000 <= fVar14) {
      fVar14 = __real_43960000;
    }
    if (fVar14 <= __real_41a00000) {
      fVar14 = __real_41a00000;
    }
    this->FOVInDegrees = fVar14;
  }
  pTVar3 = `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
           ::__l2::CVarEmulateStereoWidth.Ref;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_148b1d81d:
    lVar9 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    if (bVar6) goto LAB_148b1d81d;
    lVar9 = 4;
  }
  pTVar4 = `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
           ::__l2::CVarEmulateStereoHeight.Ref;
  iVar7 = *(int *)((longlong)pTVar3->ShadowedValue + lVar9);
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_148b1d840:
    lVar9 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    if (bVar6) goto LAB_148b1d840;
    lVar9 = 4;
  }
  pTVar3 = `public:___cdecl_FFakeStereoRenderingDevice::FFakeStereoRenderingDevice(int,int,int)___ptr64'
           ::__l2::CVarEmulateStereoViews.Ref;
  iVar13 = *(int *)((longlong)pTVar4->ShadowedValue + lVar9);
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) goto LAB_148b1d861;
  }
  lVar12 = 0;
LAB_148b1d861:
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar12);
  if (iVar7 != 0) {
    iVar10 = 10000;
    if (iVar7 < 10000) {
      iVar10 = iVar7;
    }
    iVar7 = 100;
    if (100 < iVar10) {
      iVar7 = iVar10;
    }
    this->Width = iVar7;
  }
  if (iVar13 != 0) {
    iVar7 = 10000;
    if (iVar13 < 10000) {
      iVar7 = iVar13;
    }
    iVar13 = 100;
    if (100 < iVar7) {
      iVar13 = iVar7;
    }
    this->Height = iVar13;
  }
  if (iVar1 != 0) {
    iVar7 = 0x20;
    if (iVar1 < 0x20) {
      iVar7 = iVar1;
    }
    iVar13 = 1;
    if (1 < iVar7) {
      iVar13 = iVar7;
    }
    this->NumViews = iVar13;
  }
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
            (local_res10,GMaxRHIShaderPlatform);
  this->bLayeredRTs = ZPULL(local_res10[0],1,1);
  return this;
}

// ~FFakeStereoRenderingDevice @ 148b1ed80

void __thiscall
FFakeStereoRenderingDevice::~FFakeStereoRenderingDevice(FFakeStereoRenderingDevice *this)

{
  this->_padding_ = (longlong)&_vftable__for__IStereoRenderTargetManager__;
  this->_padding_ = (longlong)&___7IStereoRendering__6B_;
  return;
}

// operator() @ 148b20cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FFakeStereoRenderingDevice::RenderTexture_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FShaderMapResource *this_00;
  longlong *plVar1;
  FRDGResource *this_01;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar5;
  FName FVar6;
  atomic<FRHIShader_*> aVar7;
  FRHIPixelShader *pFVar8;
  FName *pFVar9;
  FModuleManager *this_03;
  IModuleInterface *pIVar10;
  undefined1 auStackY_258 [32];
  FName local_1e8;
  FRHITexture *local_1e0;
  FRHISamplerState *local_1d8;
  FRHICommandListImmediate *local_1d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c0;
  TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable> local_1a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  FShader *local_188;
  FShaderMapBase *local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_128.RenderTargetsEnabled = 0;
  local_128.RenderTargetFormats.Elements[0] = '\0';
  local_128.RenderTargetFormats.Elements[1] = '\0';
  local_128.RenderTargetFormats.Elements[2] = '\0';
  local_128.RenderTargetFormats.Elements[3] = '\0';
  local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_128.BlendState = (FRHIBlendState *)0x0;
  local_128.RasterizerState = (FRHIRasterizerState *)0x0;
  local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_128.RenderTargetFormats.Elements[4] = '\0';
  local_128.RenderTargetFormats.Elements[5] = '\0';
  local_128.RenderTargetFormats.Elements[6] = '\0';
  local_128.RenderTargetFormats.Elements[7] = '\0';
  local_128.RenderTargetFlags.Elements[0] = None;
  local_128.RenderTargetFlags.Elements[1] = None;
  local_128.RenderTargetFlags.Elements[2] = None;
  local_128.RenderTargetFlags.Elements[3] = None;
  local_128.RenderTargetFlags.Elements[4] = None;
  local_128.RenderTargetFlags.Elements[5] = None;
  local_128.RenderTargetFlags.Elements[6] = None;
  local_128.RenderTargetFlags.Elements[7] = None;
  local_128.DepthStencilTargetFormat = PF_Unknown;
  local_128.DepthStencilTargetFlag = None;
  local_128.DepthTargetLoadAction = ENoAction;
  local_128.DepthTargetStoreAction = ENoAction;
  local_128.StencilTargetLoadAction = ENoAction;
  local_128.StencilTargetStoreAction = ENoAction;
  local_128.DepthStencilAccess.Value = DepthNop;
  local_128.NumSamples = 0;
  local_128.SubpassHint = None;
  local_128.SubpassIndex = '\0';
  local_128.ConservativeRasterization = Disabled;
  local_128.bDepthBounds = false;
  local_128.MultiViewCount = '\0';
  local_128.bHasFragmentDensityAttachment = false;
  local_128.bAllowVariableRateShading = true;
  local_128.ShadingRate = VRSSR_1x1;
  local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_128.StatePrecachePSOHash = 0;
  local_1d0 = param_1;
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_128);
  local_128.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  this_02 = GetGlobalShaderMap(GMaxRHIShaderPlatform);
  pFVar5 = (FShaderType *)FScreenVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_1c0,pFVar5,0);
  if (local_1c0.ShaderContent == (FShader *)0x0) {
    FVar6 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_178);
    ::FName::ToString((FName *)FVar6,&local_160);
    FScreenVS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FScreenVS::GetStaticType();
  pFVar5 = (FShaderType *)FScreenUnwrapSlicesPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_198,pFVar5,0);
  if ((FScreenUnwrapSlicesPS *)local_198.ShaderContent == (FScreenUnwrapSlicesPS *)0x0) {
    FVar6 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_170);
    ::FName::ToString((FName *)FVar6,&local_150);
    FScreenUnwrapSlicesPS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FScreenUnwrapSlicesPS::GetStaticType();
  local_128.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  aVar7 = (atomic<FRHIShader_*>)0x0;
  local_1a8.ShaderContent = (FScreenUnwrapSlicesPS *)local_198.ShaderContent;
  local_1a8.ShaderMap = local_198.ShaderMap;
  if (local_1c0.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_1c0.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    aVar7 = (this_00->RHIShaders).Ptr[(local_1c0.ShaderContent)->ResourceIndex];
    if ((aVar7 == (atomic<FRHIShader_*>)0x0) &&
       (aVar7 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this_00,(local_1c0.ShaderContent)->ResourceIndex,true),
       aVar7 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_1c0.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FShader::GetType(local_1c0.ShaderContent,(local_1c0.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar7 = (atomic<FRHIShader_*>)0x0;
    }
  }
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar7;
  local_128.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable>::GetPixelShader(&local_1a8,true)
  ;
  local_128.PrimitiveType = PT_TriangleList;
  SetGraphicsPipelineState((FRHICommandList *)param_1,&local_128,0,CheckApply,true);
  plVar1 = *(longlong **)this;
  if ((*plVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x1c7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (FRDGResource *)*plVar1;
  FRDGResource::ValidateRHIAccess(this_01);
  local_1e0 = (FRHITexture *)this_01->ResourceRHI;
  local_1d8 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  pFVar8 = TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable>::GetPixelShader
                     (&local_1a8,true);
  SetShaderParametersLegacy<FRHICommandListImmediate,FScreenUnwrapSlicesPS,FRHIPixelShader,FRHISamplerState_*,FRHITexture_*>
            (param_1,&local_1a8,pFVar8,&local_1d8,&local_1e0);
  uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x1c);
  pFVar9 = ::FName::FName(&local_168,"Renderer");
  local_1e8 = *pFVar9;
  this_03 = FModuleManager::Get();
  bVar4 = FModuleManager::IsModuleLoaded(this_03,local_1e8);
  if (!bVar4) {
    ::FName::ToString(&local_1e8,&local_140);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar10 = FModuleManager::GetModule(this_03,local_1e8);
  local_188 = local_1c0.ShaderContent;
  local_180 = local_1c0.ShaderMap;
  (**(code **)((longlong)*pIVar10 + 0xe8))(pIVar10,local_1d0,uVar3,0);
  return;
}

// AdjustViewRect @ 148b25630

void __thiscall
FFakeStereoRenderingDevice::AdjustViewRect
          (FFakeStereoRenderingDevice *this,int param_1,int *param_2,int *param_3,uint *param_4,
          uint *param_5)

{
  *param_4 = *param_4 >> 1;
  *param_5 = *param_5 / (uint)(this->NumViews / 2);
  *param_2 = *param_2 + (param_1 % 2) * *param_4;
  *param_3 = *param_3 + (param_1 / 2) * *param_5;
  return;
}

// AllocateRenderTargetTextures @ 148b25c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FFakeStereoRenderingDevice::AllocateRenderTargetTextures
          (FFakeStereoRenderingDevice *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ETextureCreateFlags param_6,
          TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *param_8,uint param_9)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8 [24];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  wchar_t *local_168;
  ERHIAccess local_160;
  ERHITextureInitAction local_15c;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FResourceBulkDataInterface *local_d8;
  uint local_d0;
  uint local_cc;
  FName local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FResourceBulkDataInterface *local_58;
  uint local_50;
  uint local_4c;
  FName local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                       ,0x1064,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((char)this->Height == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLayeredRTs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                       ,0x1065,L"Non-layered stereo can use the backbuffer directly");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1a0 = 1;
  local_184 = 1;
  local_180 = 1;
  local_15c = BulkData;
  local_158 = (FResourceBulkDataInterface *)0x151c5a1c0;
  local_1b8._16_8_ = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_17c = 0x20001;
  local_178 = 0x10101;
  local_174 = 0xff00;
  local_168 = (wchar_t *)0x0;
  local_160 = None;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_140 = 0;
  local_138 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1b8 + 0x10));
  local_d8 = local_158;
  local_d0 = local_150.ComparisonIndex.Value;
  local_cc = local_150.Number;
  local_c8 = local_148;
  local_c0 = local_140;
  local_b8 = local_138;
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
  local_58 = local_d8;
  local_50 = local_d0;
  local_4c = local_cc;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free(local_168);
  }
  local_a8.Extent.field0_0x0._s_0.X = (int)this->TopFOVRatio;
  local_a8.Extent.field0_0x0._s_0.Y = (int)this->DifferenceBetweenEyes;
  local_a8.Flags = param_5 | param_6 | (SRGB|ShaderResource|RenderTargetable);
  local_a8.Format = param_3;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_1b8);
  pFVar2 = (param_7->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_1b8) &&
     ((FScriptContainerElement *)local_1b8 < pFVar2 + (longlong)param_7->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = param_7->ArrayNum;
  if (iVar6 == param_7->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_7->AllocatorInstance,&param_7->ArrayMax);
  }
  pFVar2 = (param_7->AllocatorInstance).Data;
  param_7->ArrayNum = iVar6 + 1;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = local_1b8._0_8_;
  if ((FRHIResource *)local_1b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_1b8._0_8_);
  }
  if (param_8 != param_7) {
    DestructItems<TRefCountPtr<FRHITexture>,int>
              ((TRefCountPtr<FRHITexture> *)(param_8->AllocatorInstance).Data,param_8->ArrayNum);
    iVar6 = param_7->ArrayNum;
    piVar1 = &param_8->ArrayMax;
    pFVar2 = (param_7->AllocatorInstance).Data;
    param_8->ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar1,&param_8->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,int>
                ((param_8->AllocatorInstance).Data,(TRefCountPtr<FRHITexture> *)pFVar2,iVar6);
    }
  }
  if ((FRHIResource *)local_1b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1b8._0_8_);
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return true;
}

// CalculateRenderTargetSize @ 148b27db0

void __thiscall
FFakeStereoRenderingDevice::CalculateRenderTargetSize
          (FFakeStereoRenderingDevice *this,FViewport *param_1,uint *param_2,uint *param_3)

{
  *param_2 = (uint)this->TopFOVRatio;
  *param_3 = (uint)this->DifferenceBetweenEyes;
  return;
}

// CalculateStereoViewOffset @ 148b27dd0

void __thiscall
FFakeStereoRenderingDevice::CalculateStereoViewOffset
          (FFakeStereoRenderingDevice *this,int param_1,TRotator<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  UClass *this_00;
  TQuat<double> *this_01;
  TVector<double> *pTVar1;
  float fVar2;
  float fVar3;
  TVector<double>_u_0 local_78;
  TVector<double> local_58;
  TQuat<double> local_38;
  
  this_00 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  fVar3 = param_3 * *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x10;
  if (param_1 == -1) {
    fVar2 = tanf((this->DifferenceBetweenEyes + __real_3f800000) * this->FOVInDegrees *
                 __real_3c0efa35);
    this_01 = UE::Math::TRotator<double>::Quaternion(param_2,&local_38);
    local_78._s_0.X =
         (double)(float)((uint)(fVar3 / fVar2) ^ __xmm_80000000800000008000000080000000);
    local_78._s_0.Y = 0.0;
  }
  else {
    if ((param_1 & 1U) == 0) {
      fVar3 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    }
    this_01 = UE::Math::TRotator<double>::Quaternion(param_2,&local_38);
    local_78._s_0.Y = (double)fVar3;
    local_78._s_0.X = 0.0;
  }
  local_78._s_0.Z = 0.0;
  pTVar1 = UE::Math::TQuat<double>::RotateVector
                     (this_01,&local_58,(TVector<double> *)&local_78._s_0);
  (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X + (pTVar1->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (pTVar1->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.Z = (pTVar1->field0_0x0)._s_0.Z + (param_4->field0_0x0)._s_0.Z;
  return;
}

// EnableStereo @ 148b38c20

bool __thiscall
FFakeStereoRenderingDevice::EnableStereo(FFakeStereoRenderingDevice *this,bool param_1)

{
  return true;
}

// GetDesiredNumberOfViews @ 148b40030

int __thiscall
FFakeStereoRenderingDevice::GetDesiredNumberOfViews(FFakeStereoRenderingDevice *this,bool param_1)

{
  if (param_1) {
    return this->NumViews;
  }
  return 1;
}

// GetRenderTargetManager @ 148b422b0

IStereoRenderTargetManager * __thiscall
FFakeStereoRenderingDevice::GetRenderTargetManager(FFakeStereoRenderingDevice *this)

{
  IStereoRenderTargetManager *pIVar1;
  
  pIVar1 = (IStereoRenderTargetManager *)&this->_padding_;
  if (this == (FFakeStereoRenderingDevice *)0x0) {
    pIVar1 = (IStereoRenderTargetManager *)0x0;
  }
  return pIVar1;
}

// GetStereoProjectionMatrix @ 148b42f50

TMatrix<double> * __thiscall
FFakeStereoRenderingDevice::GetStereoProjectionMatrix
          (FFakeStereoRenderingDevice *this,TMatrix<double> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f800000;
  fVar3 = this->FOVInDegrees;
  fVar5 = fVar3 * __real_bf000000;
  fVar7 = fVar3 * __real_3f000000;
  fVar6 = __real_3f800000 - this->TopFOVRatio;
  fVar4 = (this->DifferenceBetweenEyes + __real_3f800000) * __real_3f000000;
  fVar2 = __real_3f800000 - fVar4;
  if (param_1 == 0) {
    fVar5 = fVar3 * fVar4;
    fVar7 = fVar3 * fVar2;
  }
  else if (param_1 == 1) {
    fVar5 = fVar3 * fVar2;
    fVar7 = fVar3 * fVar4;
  }
  else {
    if (param_1 != -1) goto LAB_148b43026;
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    fVar5 = fVar2 * fVar3;
    fVar7 = fVar5;
  }
  fVar5 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
LAB_148b43026:
  fVar2 = tanf(this->TopFOVRatio * fVar3 * __real_3c8efa35);
  fVar3 = tanf(fVar6 * fVar3 * __real_bc8efa35);
  fVar4 = tanf(fVar5 * __real_3c8efa35);
  fVar7 = tanf(fVar7 * __real_3c8efa35);
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  fVar5 = fVar8 / (fVar7 - fVar4);
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 1.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][2] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][3] = 0.0;
  fVar8 = fVar8 / (fVar2 - fVar3);
  __return_storage_ptr__->M[1][1] = (double)(fVar8 + fVar8);
  __return_storage_ptr__->M[0][0] = (double)(fVar5 + fVar5);
  __return_storage_ptr__->M[2][0] = (double)(float)((uint)((fVar7 + fVar4) * fVar5) ^ uVar1);
  __return_storage_ptr__->M[2][1] = (double)(float)((uint)((fVar3 + fVar2) * fVar8) ^ uVar1);
  __return_storage_ptr__->M[3][2] = (double)GNearClippingPlane_RenderThread;
  return __return_storage_ptr__;
}

// GetViewPassForIndex @ 148b43530

EStereoscopicPass __thiscall
FFakeStereoRenderingDevice::GetViewPassForIndex
          (FFakeStereoRenderingDevice *this,bool param_1,int param_2)

{
  if (!param_1) {
    return eSSP_FULL;
  }
  if (1 < GNumExplicitGPUsForRendering) {
    return eSSP_PRIMARY;
  }
  return (param_2 & 1U) + eSSP_PRIMARY;
}

// InitCanvasFromView @ 148b60b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFakeStereoRenderingDevice::InitCanvasFromView
          (FFakeStereoRenderingDevice *this,FSceneView *param_1,UCanvas *param_2)

{
  return;
}

// IsStereoEnabled @ 148b642a0

bool __thiscall FFakeStereoRenderingDevice::IsStereoEnabled(FFakeStereoRenderingDevice *this)

{
  return true;
}

// NeedReAllocateViewportRenderTarget @ 148b69470

bool __thiscall
FFakeStereoRenderingDevice::NeedReAllocateViewportRenderTarget
          (FFakeStereoRenderingDevice *this,FViewport *param_1)

{
  return false;
}

// RenderTexture_RenderThread @ 148b73d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FFakeStereoRenderingDevice::RenderTexture_RenderThread
          (FFakeStereoRenderingDevice *this,FRDGBuilder *param_1,FRDGTexture *param_2,
          FRDGTexture *param_3,TVector2<float> param_4)

{
  code *pcVar1;
  bool bVar2;
  FScreenUnwrapSlicesPass *pFVar3;
  FRDGEventName *pFVar4;
  <lambda_1> local_78;
  FRenderTargetBinding local_68;
  FRDGTextureAccess local_50;
  FRDGEventName local_38;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                       ,0x1029,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bLayeredRTs == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLayeredRTs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                       ,0x102a,L"Non-layered stereo can use the backbuffer directly");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRDGAllocator::Alloc<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass>
                     ((FRDGAllocator *)&param_1->_padding_);
  FRDGTextureAccess::FRDGTextureAccess(&local_50,param_3,SRVGraphics);
  *(FRDGTexture **)&pFVar3->SrcTexture = local_50.Texture;
  (pFVar3->SrcTexture).field_0x8 = local_50.SubresourceRange.MipIndex;
  (pFVar3->SrcTexture).field_0x9 = local_50.SubresourceRange.PlaneSlice;
  *(ushort *)&(pFVar3->SrcTexture).field_0xa = local_50.SubresourceRange.ArraySlice;
  (pFVar3->SrcTexture).field_0xc = local_50.SubresourceRange.NumMips;
  (pFVar3->SrcTexture).field_0xd = local_50.SubresourceRange.NumPlaneSlices;
  *(ushort *)&(pFVar3->SrcTexture).field_0xe = local_50.SubresourceRange.NumArraySlices;
  local_68.ResolveTexture = (FRDGTexture *)0x0;
  *(ERHIAccess *)&(pFVar3->SrcTexture).field_0x10 = local_50.Access;
  *(undefined4 *)&(pFVar3->SrcTexture).field_0x14 = local_50._20_4_;
  local_68.LoadAction = EClear;
  local_68.MipIndex = '\0';
  local_68.ArraySlice = -1;
  local_68.Texture = param_2;
  bVar2 = FRenderTargetBinding::Validate(&local_68);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (pFVar3->RenderTargets).Output.Elements[0].Texture = local_68.Texture;
  (pFVar3->RenderTargets).Output.Elements[0].ResolveTexture = local_68.ResolveTexture;
  (pFVar3->RenderTargets).Output.Elements[0].LoadAction = local_68.LoadAction;
  (pFVar3->RenderTargets).Output.Elements[0].MipIndex = local_68.MipIndex;
  (pFVar3->RenderTargets).Output.Elements[0].ArraySlice = local_68.ArraySlice;
  *(undefined4 *)&(pFVar3->RenderTargets).Output.Elements[0].field_0x14 = local_68._20_4_;
  local_78.Params = pFVar3;
  local_78.__this = this;
  pFVar4 = FRDGEventName::FRDGEventName(&local_38,1,L"RenderTexture_RenderThread");
  FRDGBuilder::
  AddPass<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass,_FFakeStereoRenderingDevice::RenderTexture_RenderThread_::__l2::<lambda_1>_>
            (param_1,pFVar4,pFVar3,Raster,&local_78);
  if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFinalViewRect @ 148b75e90

void __thiscall
FFakeStereoRenderingDevice::SetFinalViewRect
          (FFakeStereoRenderingDevice *this,FRHICommandListImmediate *param_1,int param_2,
          TIntRect<int> *param_3)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int local_res18 [2];
  
  lVar7 = 4;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      local_res18[0] = 0;
      TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
                (&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                  ::__l2::CVarEmulateStereoWidth,L"r.StereoEmulationWidth",local_res18,
                 L"Width of the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::SetFinalViewRect'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoWidth__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      local_res18[0] = 0;
      TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
                (&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                  ::__l2::CVarEmulateStereoHeight,L"r.StereoEmulationHeight",local_res18,
                 L"Height of the imaginable HMD for stereo emulation",4);
      atexit(`FFakeStereoRenderingDevice::SetFinalViewRect'::__l2::
             _dynamic_atexit_destructor_for__CVarEmulateStereoHeight__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pTVar1 = `public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
           ::__l2::CVarEmulateStereoWidth.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_148b75f0b:
    lVar5 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    if (bVar3) goto LAB_148b75f0b;
    lVar5 = 4;
  }
  pTVar2 = `public:_virtual_void___cdecl_FFakeStereoRenderingDevice::SetFinalViewRect(FRHICommandListImmediate&___ptr64,int,UE::Math::TIntRect<int>_const&___ptr64)___ptr64'
           ::__l2::CVarEmulateStereoHeight.Ref;
  iVar4 = *(int *)((longlong)pTVar1->ShadowedValue + lVar5);
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) goto LAB_148b75f2b;
  }
  lVar7 = 0;
LAB_148b75f2b:
  iVar9 = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  bVar3 = false;
  if (iVar4 != 0) {
    iVar6 = 10000;
    if (iVar4 < 10000) {
      iVar6 = iVar4;
    }
    iVar4 = 100;
    if (100 < iVar6) {
      iVar4 = iVar6;
    }
    this->Width = iVar4;
    bVar3 = true;
  }
  if (iVar9 != 0) {
    bVar3 = true;
    iVar4 = 10000;
    if (iVar9 < 10000) {
      iVar4 = iVar9;
    }
    iVar9 = 100;
    if (100 < iVar4) {
      iVar9 = iVar4;
    }
    this->Height = iVar9;
  }
  if ((param_2 == 0) && (!bVar3)) {
    this->Width = *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0;
    this->Height = *(int *)((longlong)&param_3->field0_0x0 + 0xc) -
                   *(int *)((longlong)&param_3->field0_0x0 + 4);
  }
  return;
}

// ShouldUseSeparateRenderTarget @ 148b77da0

bool __thiscall
FFakeStereoRenderingDevice::ShouldUseSeparateRenderTarget(FFakeStereoRenderingDevice *this)

{
  char cVar1;
  
  if ((char)this->Height != '\0') {
    cVar1 = (**(code **)(*(longlong *)&this[-1].bLayeredRTs + 8))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// UpdateViewport @ 148b7f3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFakeStereoRenderingDevice::UpdateViewport
          (FFakeStereoRenderingDevice *this,bool param_1,FViewport *param_2,SViewport *param_3)

{
  return;
}

