// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISShaders
// Functions: 32

// ShaderTypeRegistration'' @ 141400290

void __cdecl `dynamic_initializer_for_'FNISUpscaleCS::ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &FNISUpscaleCS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'FNISUpscaleCS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 141400390

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<1,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarNISHDRMode'' @ 141400450

void __cdecl _dynamic_initializer_for__CVarNISHDRMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNISHDRMode,L"r.NIS.HDRMode",local_res8,
             L"-1: Automatic. Determines the NIS HDR mode based on ETonemapperOutputDevice\n0: None\n1: Linear\n2: PQ\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISHDRMode__);
  return;
}

// `dynamic_initializer_for_'CVarNISHalfPrecision'' @ 1414004a0

void __cdecl _dynamic_initializer_for__CVarNISHalfPrecision__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNISHalfPrecision,L"r.NIS.HalfPrecision",local_res8,
             L"Enable/disable half precision in the NIS shaders and selects which permutation is used (default:-1)\n-1: automatic. Pick the appropriate FP16 permutation based on shader model and RHI\n 0: Float32,       disable half precision\n 1: Min16Float,    half precision, intended for UE4 DX11 SM5\n 2: Min16FloatDXC, half precision, intended for UE4 DX12 SM5\n 3: Float16DXC,    half precision, intended for UE5 DX12 SM6\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISHalfPrecision__);
  return;
}

// `dynamic_initializer_for_'CVarNISSharpness'' @ 1414004f0

void __cdecl _dynamic_initializer_for__CVarNISSharpness__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarNISSharpness,L"r.NIS.Sharpness",local_res8,
             L"0.0 to 1.0: Sharpening to apply to either primary NIS pass or the secondary NIS pass. If 0.0 the secondary NIS sharpening pass will not be executed (default: 0.0f)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISSharpness__);
  return;
}

// `dynamic_initializer_for_'GNISCoefficients'' @ 141400540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GNISCoefficients__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GNISCoefficients);
  GNISCoefficients._0_8_ = &___7__TGlobalResource_UFNISCoefficients___00__6B_;
  GNISCoefficients._32_8_ = 0;
  GNISCoefficients._40_8_ = 0;
  GNISCoefficients._48_8_ = 0;
  GNISCoefficients._56_8_ = 0;
  if (GNISCoefficients._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GNISCoefficients._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GNISCoefficients._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GNISCoefficients,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GNISCoefficients__);
    return;
  }
  BeginInitResource((FRenderResource *)&GNISCoefficients,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GNISCoefficients__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNISShaders'' @ 141400610

void __cdecl _dynamic_initializer_for__ModuleRegistrantNISShaders__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NISShaders";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NISShaders",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNISShadersModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de4a5f0

void * __thiscall
FNISShadersModule::_scalar_deleting_destructor_(FNISShadersModule *this,uint param_1)

{
  *this = (FNISShadersModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de4a660

void * __thiscall
FNISCoefficients::FNISCoefficientsResourceBulkData::_scalar_deleting_destructor_
          (FNISCoefficientsResourceBulkData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FResourceBulkDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de4ae70

void * __thiscall
FNISCoefficients::_scalar_deleting_destructor_(FNISCoefficients *this,uint param_1)

{
  FRHITexture *pFVar1;
  
  pFVar1 = (this->UsmHalfPrecisionRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ScalerHalfPrecisionRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->UsmRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ScalerRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de4aef0

void * __thiscall
TGlobalResource<FNISCoefficients,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNISCoefficients,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_UFNISCoefficients___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// AddPass<`FComputeShaderUtils::AddPass<FNISUpscaleCS>'::__l2::<lambda_1>_> @ 14de4af80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FNISUpscaleCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFNISUpscaleCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFNISUpscaleCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FNISUpscaleCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandsTextureCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FNISUpscaleCS>'::__l2::<lambda_1>_> @ 14de4b370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPassInternal<void,_FComputeShaderUtils::AddPass<FNISUpscaleCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFNISUpscaleCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFNISUpscaleCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FNISUpscaleCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandsTextureCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BindForLegacyShaderParameters<FNISUpscaleCS::FParameters> @ 14de4b640

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FNISUpscaleCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FNISUpscaleCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FNISUpscaleCS> @ 14de4b6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FNISUpscaleCS>
          (TShaderRefBase<FNISUpscaleCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FNISUpscaleCS> @ 14de4b720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FNISUpscaleCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FNISUpscaleCS,FShaderMapPointerTable> *param_2,FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FNISUpscaleCS *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14de4bf40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FNISUpscaleCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FNISUpscaleCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de4bf70

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNISUpscaleCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// AddSharpenOrUpscalePass @ 14de4bfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTexture * __cdecl
AddSharpenOrUpscalePass
          (FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,FViewInfo *param_2,
          FInputs *param_3)

{
  int *piVar1;
  NISHDRMode NVar2;
  ENISHalfPrecisionPermutation EVar3;
  undefined8 uVar4;
  FRDGTexture *pFVar5;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  NISHDRMode NVar12;
  NISGPUArchitecture NVar13;
  FScreenPassTexture *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  FShaderParametersMetadata *pFVar17;
  FShaderType *pFVar18;
  FName this;
  FRDGEventName *pFVar19;
  IConsoleManager *pIVar20;
  longlong *plVar21;
  TConsoleVariableData<int> *pTVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  TIntPoint<int>_u_0 TVar26;
  wchar_t *pwVar27;
  int iVar28;
  byte bVar29;
  ENISHalfPrecisionPermutation EVar30;
  FRDGBuilder *pFVar31;
  int iVar32;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStackY_408 [32];
  bool local_378;
  NISHDRMode local_374;
  undefined1 local_370 [4];
  uint local_36c;
  FRDGBuilder *local_368;
  FRDGTexture *local_360;
  longlong local_358;
  FRDGTexture *local_350;
  uint local_348;
  FViewInfo *local_340;
  TIntPoint<int>_u_0 local_338;
  FRDGTextureUAVDesc local_330;
  FSceneViewFamily *local_318;
  EUniformBufferBindingFlags EStack_310;
  undefined7 uStack_30f;
  int local_308;
  uint uStack_304;
  int local_300;
  int iStack_2fc;
  undefined8 *local_2f8;
  uint local_2f0;
  uint uStack_2ec;
  int local_2e8;
  int iStack_2e4;
  uint local_2e0;
  uint local_2dc;
  TIntPoint<int>_u_0 local_2d8;
  FInputs *local_2d0;
  TIntPoint<int>_u_0 local_2c8 [2];
  TIntVector3<int>_u_0 local_2b8;
  TIntVector3<int>_u_0 local_2a8;
  longlong local_29c;
  int local_294;
  longlong local_290;
  int local_288;
  undefined8 local_284;
  undefined8 local_27c;
  undefined4 local_274;
  undefined4 local_270;
  byte local_268;
  TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
  local_264;
  ulonglong local_248;
  FParameters *local_240;
  undefined8 local_230;
  TIntPoint<int>_u_0 local_228;
  FScreenPassTexture *local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_208;
  wchar_t *local_1f8 [3];
  undefined1 local_1e0 [8];
  FString local_1d8;
  TShaderRefBase<FNISUpscaleCS,FShaderMapPointerTable> local_1c8;
  FRDGEventName local_1b8;
  FTonemapperOutputDeviceParameters local_198;
  FRHITextureDesc local_178;
  FRHITextureDesc local_128;
  NISConfig local_d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pTVar22 = (TConsoleVariableData<int> *)0x0;
  local_368 = param_1;
  local_340 = param_2;
  local_2d0 = param_3;
  local_218 = __return_storage_ptr__;
  if ((((param_3->SceneColor).Texture == (FRDGTexture *)0x0) ||
      ((*(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 8) ==
        *(int *)&(param_3->SceneColor).ViewRect.field0_0x0 &&
       (*(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 4))))) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("Inputs.SceneColor.IsValid()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISShaders\\Private\\NISShaders.cpp"
                          ,0x1f9,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  if ((param_3->Stage == MAX) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("Inputs.Stage != EUpscaleStage::MAX",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISShaders\\Private\\NISShaders.cpp"
                          ,0x1fa,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  lVar25 = (param_3->OverrideOutput)._padding_;
  TVar26 = (TIntPoint<int>_u_0)(param_3->OverrideOutput)._padding_;
  local_350 = (FRDGTexture *)(param_3->OverrideOutput)._padding_;
  local_358 = lVar25;
  local_338 = TVar26;
  if ((local_350 == (FRDGTexture *)0x0) ||
     ((local_230 = lVar25, local_228 = TVar26, TVar26._s_0.X == (int)lVar25 &&
      (TVar26._s_0.Y == (int)((ulonglong)lVar25 >> 0x20))))) {
    FRHITextureDesc::FRHITextureDesc
              (&local_178,(FRHITextureDesc *)&((param_3->SceneColor).Texture)->Desc);
    local_178.NumSamples = '\x01';
    local_178.Flags =
         local_178.Flags & ~(DepthStencilResolveTarget|UAV|Memoryless|ResolveTargetable) |
         RenderTargetable;
    local_178.AliasableFormats.ArrayNum = 0;
    if (local_178.AliasableFormats.ArrayMax != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,0,&local_178.AliasableFormats.AllocatorInstance,0,
                 &local_178.AliasableFormats.ArrayMax);
    }
    if (param_3->Stage == PrimaryToSecondary) {
      FViewInfo::GetSecondaryViewRectSize(param_2);
      QuantizeSceneBufferSize((TIntPoint<int> *)&local_2c8[0]._s_0,&local_178.Extent,0);
      lVar25 = CONCAT44(UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y,
                        UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X);
      TVar26 = local_2c8[0];
    }
    else {
      TVar26 = (TIntPoint<int>_u_0)param_2->_padding_;
      lVar25 = param_2->_padding_;
      local_178.Extent.field0_0x0 = TVar26;
    }
    local_358 = lVar25;
    local_338 = TVar26;
    local_230 = lVar25;
    local_228 = TVar26;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      pIVar20 = IConsoleManager::Get();
      plVar21 = (longlong *)
                (**(code **)((longlong)*pIVar20 + 0xc0))(pIVar20,L"r.FastVRam.Upscale",1);
      if (plVar21 != (longlong *)0x0) {
        pTVar22 = (TConsoleVariableData<int> *)(**(code **)(*plVar21 + 0x68))(plVar21);
      }
      CVarFastVRamUpscale = pTVar22;
      _Init_thread_footer(&_TSS0);
    }
    pTVar22 = CVarFastVRamUpscale;
    if (CVarFastVRamUpscale != (TConsoleVariableData<int> *)0x0) {
      bVar11 = IsInParallelRenderingThread();
      if ((!bVar11) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FScreenPassTexture *)(*pcVar6)();
        return pFVar14;
      }
      if (pTVar22->ShadowedValue[1] == 1) {
        local_178.Flags = local_178.Flags | FastVRAM;
      }
      else if (pTVar22->ShadowedValue[1] == 2) {
        local_178.Flags = local_178.Flags | (FastVRAM|FastVRAMPartialAlloc);
      }
    }
    local_350 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)&local_178,L"NISSharpen",None)
    ;
    if (local_178.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_178.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  uVar16 = *(undefined8 *)&(param_3->SceneColor).ViewRect.field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_3->SceneColor).ViewRect.field0_0x0 + 8);
  local_308 = (int)lVar25;
  local_36c = local_338._0_4_ - local_308;
  uStack_2ec = (uint)((ulonglong)uVar16 >> 0x20);
  iStack_2e4 = (int)((ulonglong)uVar4 >> 0x20);
  local_300 = TVar26._s_0.X;
  iStack_2fc = TVar26._s_0.Y;
  local_248 = (ulonglong)(*(uint *)&local_350->Desc & 0x20000);
  uStack_304 = (uint)((ulonglong)lVar25 >> 0x20);
  iVar28 = iStack_2fc - uStack_304;
  local_360 = local_350;
  iVar32 = (int)uVar4;
  local_2f0 = (uint)uVar16;
  uVar23 = local_2f0;
  if ((iVar32 - local_2f0 == local_36c) && (iStack_2e4 - uStack_2ec == iVar28)) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  pFVar31 = local_368;
  local_2e8 = iVar32;
  if (local_248 == 0) {
    FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)&local_350->Desc);
    local_128.NumSamples = '\x01';
    local_128.Flags =
         local_128.Flags & ~(DepthStencilResolveTarget|UAV|Memoryless|ResolveTargetable) |
         RenderTargetable;
    local_128.AliasableFormats.ArrayNum = 0;
    if (local_128.AliasableFormats.ArrayMax != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,0,&local_128.AliasableFormats.AllocatorInstance,0,
                 &local_128.AliasableFormats.ArrayMax);
    }
    local_128.Flags = local_128.Flags & ~(Presentable|ShaderResource|RenderTargetable) | UAV;
    local_2d8._s_0.X = local_36c;
    local_2d8._s_0.Y = iVar28;
    QuantizeSceneBufferSize((TIntPoint<int> *)&local_2d8._s_0,&local_128.Extent,0);
    pFVar31 = local_368;
    lVar25 = CONCAT44(UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y,
                      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X);
    TVar26._s_0.Y = local_2d8._s_0.Y;
    TVar26._s_0.X = local_2d8._s_0.X;
    pwVar27 = L"NISSharpenIntermediateUAV";
    local_308 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
    uStack_304 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
    if (bVar29 != 0) {
      pwVar27 = L"NISUpscaleIntermediateUAV";
    }
    local_300 = local_2d8._s_0.X;
    iStack_2fc = local_2d8._s_0.Y;
    local_360 = FRDGBuilder::CreateTexture(local_368,(FRDGTextureDesc *)&local_128,pwVar27,None);
    if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  uVar16 = *(undefined8 *)&(((param_3->SceneColor).Texture)->Desc).field_0x24;
  uVar24 = (uint)lVar25;
  if ((((((uVar23 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
         (uStack_2ec != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        (iVar32 != (int)uVar16)) ||
       ((iStack_2e4 != (int)((ulonglong)uVar16 >> 0x20) ||
        (uVar16 = *(undefined8 *)&(local_360->Desc).field_0x24,
        uVar24 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X)))) ||
      (uStack_304 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) ||
     ((TVar26._s_0.X != (int)uVar16 ||
      (local_378 = false, iStack_2fc != (int)((ulonglong)uVar16 >> 0x20))))) {
    local_378 = true;
  }
  puVar15 = FMemStackBase::Alloc((FMemStackBase *)&pFVar31->_padding_,0xc0,0x10);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FScreenPassTexture *)(*pcVar6)();
      return pFVar14;
    }
  }
  else {
    *(undefined1 *)(puVar15 + 0x17) = 1;
    *puVar15 = &___7__TObject_VFParameters_FNISUpscaleCS___FRDGAllocator__6B_;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[0x14] = 0;
    puVar15[0x15] = 0;
    puVar15[0x16] = 0;
  }
  local_2f8 = puVar15;
  if ((((undefined8 **)pFVar31->_padding_ <= &local_2f8) &&
      (&local_2f8 < (undefined8 **)pFVar31->_padding_ + *(int *)((longlong)&pFVar31->_padding_ + 4))
      ) && (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  iVar28 = (int)pFVar31->_padding_;
  piVar1 = (int *)((longlong)&pFVar31->_padding_ + 4);
  if (iVar28 == *piVar1) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar31->_padding_,piVar1);
  }
  *(int *)&pFVar31->_padding_ = iVar28 + 1;
  *(undefined8 **)(pFVar31->_padding_ + (longlong)iVar28 * 8) = local_2f8;
  pTVar7 = CVarNISSharpness.Ref;
  local_240 = (FParameters *)(puVar15 + 2);
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  pTVar22 = CVarNISHDRMode.Ref;
  fVar35 = pTVar7->ShadowedValue[1];
  if (__real_3f800000 <= pTVar7->ShadowedValue[1]) {
    fVar35 = __real_3f800000;
  }
  local_318 = (FSceneViewFamily *)local_340->_padding_;
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  NVar2 = pTVar22->ShadowedValue[1];
  if (NVar2 == ~None) {
    GetTonemapperOutputDeviceParameters(&local_198,local_318);
    switch(local_198.OutputDevice) {
    case 0:
    case 1:
    case 2:
      local_374 = None;
      break;
    case 3:
    case 4:
      local_374 = PQ;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      local_374 = Linear;
      break;
    default:
      bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISShaders\\Private\\NISShaders.cpp"
                          ,0x1d2,
                          L"invalid EDisplayOutputFormat passed into GetNISHDRModeFromEngineToneMapper "
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FScreenPassTexture *)(*pcVar6)();
        return pFVar14;
      }
      local_374 = None;
    }
  }
  else {
    NVar12 = PQ;
    if ((int)NVar2 < 2) {
      NVar12 = NVar2;
    }
    local_374 = None;
    if (0 < (int)NVar12) {
      local_374 = NVar12;
    }
  }
  pTVar22 = CVarNISHalfPrecision.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  EVar3 = pTVar22->ShadowedValue[1];
  if (EVar3 == ~Float32) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
      pwVar27 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
      iVar28 = wcscmp(pwVar27,L"D3D12");
      bIsDx12 = iVar28 == 0;
      _Init_thread_footer(&_TSS1);
    }
    if (bIsDx12 != false) {
      EVar30 = ((int)local_340->_padding_ == 4) + Min16FloatDXC;
      goto LAB_14de4c769;
    }
  }
  else {
    EVar30 = Float32;
    if (EVar3 == Float32) goto LAB_14de4c769;
    if (EVar3 != Min16Float) {
      EVar30 = EVar3;
      if (((EVar3 != Min16FloatDXC) && (EVar30 = Float32, EVar3 == Float16DXC)) &&
         (EVar30 = Float32, (int)local_340->_padding_ == 4)) {
        EVar30 = EVar3;
      }
      goto LAB_14de4c769;
    }
  }
  EVar30 = Min16Float;
LAB_14de4c769:
  bVar34 = EVar30 != Float32;
  local_2e0 = iStack_2e4 - uStack_2ec;
  local_36c = TVar26._s_0.X - uVar24;
  local_348 = iStack_2fc - uStack_304;
  local_2dc = iVar32 - uVar23;
  pFVar5 = (param_3->SceneColor).Texture;
  local_d8.kDetectRatio = 0.0;
  local_d8.kDetectThres = 0.0;
  local_d8.kMinContrastRatio = 0.0;
  local_d8.kRatioNorm = 0.0;
  local_d8.kContrastBoost = 0.0;
  local_d8.kEps = 0.0;
  local_d8.kSharpStartY = 0.0;
  local_d8.kSharpScaleY = 0.0;
  local_d8.kSharpStrengthMin = 0.0;
  local_d8.kSharpStrengthScale = 0.0;
  local_d8.kSharpLimitMin = 0.0;
  local_d8.kSharpLimitScale = 0.0;
  local_d8.kScaleX = 0.0;
  local_d8.kScaleY = 0.0;
  local_d8.kDstNormX = 0.0;
  local_d8.kDstNormY = 0.0;
  local_d8.kSrcNormX = 0.0;
  local_d8.kSrcNormY = 0.0;
  local_d8.kInputViewportOriginX = 0;
  local_d8.kInputViewportOriginY = 0;
  local_d8.kInputViewportWidth = 0;
  local_d8.kInputViewportHeight = 0;
  local_d8.kOutputViewportOriginX = 0;
  local_d8.kOutputViewportOriginY = 0;
  local_d8.kOutputViewportWidth = 0;
  local_d8.kOutputViewportHeight = 0;
  local_d8.reserved0 = 0.0;
  local_d8.reserved1 = 0.0;
  bVar11 = NVScalerUpdateConfig
                     (&local_d8,fVar35,uVar23,uStack_2ec,local_2dc,local_2e0,
                      *(uint *)&(pFVar5->Desc).field_0x24,*(uint *)&(pFVar5->Desc).field_0x28,uVar24
                      ,uStack_304,local_36c,local_348,*(uint *)&(local_360->Desc).field_0x24,
                      *(uint *)&(local_360->Desc).field_0x28,local_374);
  if (!bVar11) {
    local_370[0] = bVar11;
    `AddSharpenOrUpscalePass'::__l2::<lambda_1>::operator()(local_370);
  }
  puVar15[6] = local_d8._0_8_;
  puVar15[7] = local_d8._8_8_;
  puVar15[8] = local_d8._16_8_;
  puVar15[9] = local_d8._24_8_;
  puVar15[10] = local_d8._32_8_;
  puVar15[0xb] = local_d8._40_8_;
  puVar15[0xc] = local_d8._48_8_;
  puVar15[0xd] = local_d8._56_8_;
  puVar15[0xe] = local_d8._64_8_;
  puVar15[0xf] = local_d8._72_8_;
  puVar15[0x10] = local_d8._80_8_;
  puVar15[0x11] = local_d8._88_8_;
  puVar15[0x12] = local_d8._96_8_;
  puVar15[0x13] = local_d8._104_8_;
  if (EVar30 == Float32) {
    puVar15[0x14] = GNISCoefficients._32_8_;
    uVar16 = GNISCoefficients._40_8_;
  }
  else {
    puVar15[0x14] = GNISCoefficients._48_8_;
    uVar16 = GNISCoefficients._56_8_;
  }
  puVar15[0x15] = uVar16;
  puVar15[2] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  puVar15[3] = (param_3->SceneColor).Texture;
  local_330._padding_._0_1_ = (local_360->Desc).field_0x34;
  local_330.Texture = local_360;
  local_330._padding_._1_1_ = 0;
  local_330._padding_._2_4_ = 0;
  local_330._padding_._6_1_ = 0;
  local_330._padding_._0_1_ = '\0';
  FRDGUserValidation::ValidateCreateUAV(&local_368->UserValidation,&local_330);
  pFVar5 = local_330.Texture;
  local_318 = FMemStackBase::Alloc((FMemStackBase *)&local_368->_padding_,0x50,8);
  pFVar31 = local_368;
  ((FRDGTextureUAV *)local_318)->_padding_ = pFVar5->_padding_;
  *(byte *)&((FRDGTextureUAV *)local_318)->_padding_ =
       (byte)((FRDGTextureUAV *)local_318)->_padding_ & 0xfe;
  ((FRDGTextureUAV *)local_318)->_padding_ = 0;
  *(undefined1 *)&((FRDGTextureUAV *)local_318)->_padding_ = 0;
  *(undefined1 *)&((FRDGTextureUAV *)local_318)->_padding_ = 0;
  ((FRDGTextureUAV *)local_318)->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined8 *)((longlong)&((FRDGTextureUAV *)local_318)->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ = (undefined1)local_330._padding_;
  *(undefined1 *)((longlong)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ + 1) =
       local_330._padding_._1_1_;
  *(undefined2 *)((longlong)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ + 2) =
       local_330._padding_._2_2_;
  *(undefined2 *)((longlong)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ + 4) =
       local_330._padding_._4_2_;
  *(undefined1 *)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ + 6) =
       local_330._padding_._6_1_;
  *(char *)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ = (char)local_330._padding_;
  if ((char)local_330._padding_ != '\0') {
    *(undefined1 *)((longlong)&(((FRDGTextureUAV *)local_318)->Desc)._padding_ + 7) =
         local_330._padding_._7_1_;
  }
  pTVar33 = &local_368->Views;
  (((FRDGTextureUAV *)local_318)->Desc).Texture = local_330.Texture;
  iVar28 = (local_368->Views).Array.ArrayNum;
  piVar1 = &(local_368->Views).Array.ArrayMax;
  if (iVar28 == *piVar1) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)pTVar33,piVar1);
  }
  (pFVar31->Views).Array.ArrayNum = iVar28 + 1;
  (pTVar33->Array).AllocatorInstance.Data[iVar28] = (FRDGView *)local_318;
  *(int *)((longlong)((longlong)local_318 + 0x20) + 4) = (pFVar31->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(&local_368->UserValidation,(FRDGTextureUAV *)local_318);
  puVar15[4] = local_318;
  pFVar17 = FViewUniformShaderParameters::GetStructMetadata();
  EStack_310 = Static;
  if (pFVar17->BindingFlags != StaticAndShader) {
    EStack_310 = pFVar17->BindingFlags;
  }
  local_318 = (FSceneViewFamily *)local_340->_padding_;
  puVar15[0x16] = local_318;
  puVar15[0x17] = CONCAT71(uStack_30f,EStack_310);
  local_264.DimensionValue = local_374;
  local_268 = bVar29;
  local_264.Tail.DimensionValue = EVar30;
  FNISUpscaleCS::GetNISGPUArchitecture(bVar34);
  iVar32 = 0x20;
  iVar28 = 0x20;
  local_264.Tail.Tail.DimensionValue = 0x20;
  NVar13 = FNISUpscaleCS::GetNISGPUArchitecture(bVar34);
  if (((NVar13 == NVIDIA_Generic) || (NVar13 == AMD_Generic)) ||
     ((NVar13 == Intel_Generic || (NVar13 != NVIDIA_Generic_fp16)))) {
    iVar28 = (bVar29 ^ 1) * 8 + 0x18;
  }
  local_264.Tail.Tail.Tail.DimensionValue = iVar28;
  NVar13 = FNISUpscaleCS::GetNISGPUArchitecture(bVar34);
  if ((NVar13 == NVIDIA_Generic) ||
     (((NVar13 != AMD_Generic && (NVar13 != Intel_Generic)) && (NVar13 == NVIDIA_Generic_fp16)))) {
    local_264.Tail.Tail.Tail.Tail.DimensionValue = 0x80;
  }
  else {
    local_264.Tail.Tail.Tail.Tail.DimensionValue = 0x100;
  }
  local_264.Tail.Tail.Tail.Tail.Tail.DimensionValue = local_378;
  local_318 = (FSceneViewFamily *)local_340->ShaderMap;
  iVar28 = TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
           ::ToDimensionValueId(&local_264);
  pFVar18 = (FShaderType *)FNISUpscaleCS::GetStaticType();
  FGlobalShaderMap::GetShader
            ((FGlobalShaderMap *)local_318,&local_208,pFVar18,(uint)bVar29 + iVar28 * 2);
  if (local_208.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1e0);
    FName::ToString((FName *)this,&local_1d8);
    FNISUpscaleCS::GetStaticType();
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FScreenPassTexture *)(*pcVar6)();
      return pFVar14;
    }
  }
  FNISUpscaleCS::GetStaticType();
  lVar8 = local_358;
  uVar23 = local_338._0_4_ - (int)local_358;
  local_1f8[0] = L"PrimaryToSecondary";
  local_1f8[1] = L"PrimaryToOutput";
  local_1f8[2] = L"SecondaryToOutput";
  local_1c8.ShaderContent = (FNISUpscaleCS *)local_208.ShaderContent;
  local_1c8.ShaderMap = local_208.ShaderMap;
  local_2d0 = (FInputs *)local_1f8[local_2d0->Stage];
  local_358 = CONCAT44(local_358._4_4_,local_228._4_4_ - local_230._4_4_);
  if (((local_36c != uVar23) || (local_348 != local_228._4_4_ - local_230._4_4_)) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IntermediateDestRect.Size() == OutputDestRect.Size()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISShaders\\Private\\NISShaders.cpp"
                          ,0x2a0,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FScreenPassTexture *)(*pcVar6)();
    return pFVar14;
  }
  NVar13 = FNISUpscaleCS::GetNISGPUArchitecture(bVar34);
  uVar10 = local_248;
  uVar9 = local_348;
  uVar24 = local_36c;
  if (((NVar13 == NVIDIA_Generic) || (NVar13 == AMD_Generic)) ||
     ((NVar13 == Intel_Generic || (NVar13 != NVIDIA_Generic_fp16)))) {
    iVar32 = (bVar29 ^ 1) * 8 + 0x18;
  }
  pFVar19 = FRDGEventName::FRDGEventName
                      (&local_1b8,
                       L"NIS %s %s %s (%s) (%dx%d -> %dx%d) = [%d,%d - %d,%d] -> [%d,%d - %d,%d]");
  pFVar17 = FNISUpscaleCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar31 = local_368;
  local_2b8._s_0.Z = 1;
  iVar28 = uVar23 + 0x1f;
  local_2b8._s_0.X = (int)(iVar28 + (iVar28 >> 0x1f & 0x1fU)) >> 5;
  local_2b8._s_0.Y = ((int)local_358 + -1 + iVar32) / iVar32;
  FComputeShaderUtils::AddPass<FNISUpscaleCS>
            (local_368,pFVar19,Compute,&local_1c8,pFVar17,local_240,
             (TIntVector3<int> *)&local_2b8._s_0);
  if (local_1b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (uVar10 == 0) {
    if ((local_360 == local_350) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("OutputOrIntermediateTexture != Output.Texture",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISShaders\\Private\\NISShaders.cpp"
                            ,0x2b7,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FScreenPassTexture *)(*pcVar6)();
      return pFVar14;
    }
    local_2a8._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_294 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_288 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_284 = 0;
    local_274 = 0;
    local_2a8._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_27c = 1;
    local_270 = 1;
    local_290 = lVar8;
    if ((uVar24 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (uVar9 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      local_2a8._s_0.Y = uVar9;
      local_2a8._s_0.X = uVar24;
      local_2a8._s_0.Z = 1;
    }
    local_29c = lVar25;
    AddCopyTexturePass(pFVar31,local_360,local_350,(FRHICopyTextureInfo *)&local_2a8._s_0);
  }
  local_218->Texture = local_350;
  (local_218->ViewRect).field0_0x0._s_0.Max.field0_0x0 = local_338;
  *(longlong *)&(local_218->ViewRect).field0_0x0 = lVar8;
  return local_218;
}

// GetNISMinRequiredFeatureLevel @ 14de4d650

Type __cdecl GetNISMinRequiredFeatureLevel(void)

{
  return SM5;
}

// NVScalerUpdateConfig @ 14de4dbd0

bool __cdecl
NVScalerUpdateConfig
          (NISConfig *param_1,float param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
          uint param_13,uint param_14,NISHDRMode param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res10;
  
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar3 = param_2 - __real_3f000000;
  fVar4 = __real_3f99999a;
  fVar6 = __real_40499999;
  fVar5 = __real_3ea3d70a;
  fVar12 = __real_3e8f5c29;
  fVar13 = __real_3f8ccccd;
  fVar14 = __real_3f19999a;
  if (0.0 <= fVar3) {
    fVar4 = __real_3fc00000;
    fVar6 = __real_40100000;
    fVar5 = __real_3ecccccc;
    fVar12 = __real_3eb33333;
    fVar13 = __real_3fb00000;
    fVar14 = __real_3f400000;
  }
  local_res10 = __real_3d800000;
  fVar4 = fVar3 * fVar4 + __real_3ecccccd;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = fVar3 * fVar5 + __real_3e0f5c29;
  fVar9 = fVar3 * fVar6 + __real_3fcccccd;
  fVar10 = fVar3 * fVar14 + __real_3f000000;
  if (fVar5 <= __real_3dcccccd) {
    fVar5 = __real_3dcccccd;
  }
  fVar7 = __real_3f666666;
  fVar8 = __real_3ee66666;
  fVar11 = __real_41200000;
  fVar15 = __real_40000000;
  if (param_15 - Linear < 2) {
    local_res10 = __real_3d000000;
    fVar4 = fVar3 * fVar13 + __real_3ecccccd;
    fVar9 = fVar3 * fVar6 + __real_400ccccd;
    fVar5 = fVar3 * fVar12 + __real_3dcccccd;
    fVar10 = fVar3 * fVar14 + __real_3f19999a;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar5 <= __real_3d75c28f) {
      fVar5 = __real_3d75c28f;
    }
    fVar7 = __real_3f000000;
    fVar8 = __real_3e99999a;
    fVar11 = __real_40a00000;
    fVar15 = __real_3fc00000;
    if (param_15 == PQ) {
      fVar7 = __real_3f0ccccd;
      fVar8 = __real_3eb33333;
    }
  }
  if (param_5 == 0) {
    param_5 = param_7;
  }
  param_1->kInputViewportWidth = param_5;
  if (param_6 == 0) {
    param_6 = param_8;
  }
  param_1->kInputViewportHeight = param_6;
  if (param_11 == 0) {
    param_11 = param_13;
  }
  param_1->kOutputViewportWidth = param_11;
  if (param_12 == 0) {
    param_12 = param_14;
  }
  param_1->kOutputViewportHeight = param_12;
  if ((((param_5 != 0) && (param_6 != 0)) && (param_11 != 0)) && (param_12 != 0)) {
    param_1->kOutputViewportOriginX = param_9;
    param_1->kOutputViewportOriginY = param_10;
    param_1->kInputViewportOriginX = param_3;
    param_1->kInputViewportOriginY = param_4;
    param_1->kMinContrastRatio = fVar15;
    param_1->kSharpStartY = fVar8;
    param_1->kDetectRatio = 2.2011719;
    param_1->kContrastBoost = 1.0;
    param_1->kEps = 0.003921569;
    param_1->kSharpStrengthMin = fVar4;
    param_1->kSrcNormX = fVar1 / (float)param_7;
    param_1->kSharpStrengthScale = fVar9 - fVar4;
    param_1->kSharpLimitMin = fVar5;
    param_1->kSrcNormY = fVar1 / (float)param_8;
    param_1->kSharpLimitScale = fVar10 - fVar5;
    param_1->kDstNormX = fVar1 / (float)param_13;
    param_1->kDstNormY = fVar1 / (float)param_14;
    fVar6 = (float)param_5 / (float)param_11;
    param_1->kScaleX = fVar6;
    fVar4 = (float)param_6 / (float)param_12;
    param_1->kDetectThres = local_res10;
    param_1->kScaleY = fVar4;
    param_1->kRatioNorm = fVar1 / (fVar11 - fVar15);
    param_1->kSharpScaleY = fVar1 / (fVar7 - fVar8);
    if (((fVar2 <= fVar6) && (fVar6 <= fVar1)) && ((fVar2 <= fVar4 && (fVar4 <= fVar1)))) {
      return true;
    }
  }
  return false;
}

// IMPLEMENT_MODULE_NISShaders @ 14de50da0

void __cdecl IMPLEMENT_MODULE_NISShaders(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15045f5d0

void __cdecl `dynamic_atexit_destructor_for_'FNISUpscaleCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 15045f5e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISHDRMode'' @ 15045f660

void __cdecl _dynamic_atexit_destructor_for__CVarNISHDRMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNISHDRMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISHalfPrecision'' @ 15045f680

void __cdecl _dynamic_atexit_destructor_for__CVarNISHalfPrecision__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNISHalfPrecision);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISSharpness'' @ 15045f6a0

void __cdecl _dynamic_atexit_destructor_for__CVarNISSharpness__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNISSharpness);
  return;
}

// `dynamic_atexit_destructor_for_'GNISCoefficients'' @ 15045f6c0

void __cdecl _dynamic_atexit_destructor_for__GNISCoefficients__(void)

{
  GNISCoefficients._0_8_ = &___7__TGlobalResource_UFNISCoefficients___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GNISCoefficients);
  if (GNISCoefficients._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GNISCoefficients._56_8_);
  }
  if (GNISCoefficients._48_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GNISCoefficients._48_8_);
  }
  if (GNISCoefficients._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GNISCoefficients._40_8_);
  }
  if (GNISCoefficients._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GNISCoefficients._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GNISCoefficients);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045f740

void __cdecl
`FNISConfigParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNISConfigParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045f760

void __cdecl
`FNISUpscaleCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNISUpscaleCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045f780

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FNISUpscaleCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// operator() @ 150590000

bool __thiscall `AddSharpenOrUpscalePass'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2363325386919510656>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2363325386919510656>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

