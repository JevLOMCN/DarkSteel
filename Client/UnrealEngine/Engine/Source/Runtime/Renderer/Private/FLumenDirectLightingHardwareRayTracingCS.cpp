// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// AddLumenRayTracingDispatchIndirect @ 144d569a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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

void __cdecl
FLumenDirectLightingHardwareRayTracingCS::AddLumenRayTracingDispatchIndirect
          (FRDGBuilder *param_1,FRDGEventName *param_2,FViewInfo *param_3,
          TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
          *param_4,FParameters *param_5,FRDGBuffer *param_6,uint param_7,ERDGPassFlags param_8)

{
  TShaderPermutationDomain<FLumenDirectLightingHardwareRayTracing::FStochastic> TVar1;
  FGlobalShaderMap *this;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ERayTracingMode EVar6;
  EShaderPermutationPrecacheRequest EVar7;
  EShaderPlatform EVar8;
  FShaderType *pFVar9;
  FName this_00;
  FGlobalShaderType *pFVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined8 local_d8 [2];
  FRDGBuffer *local_c8;
  FGlobalShaderPermutationParameters local_c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  FString local_98;
  TShaderRefBase<FLumenDirectLightingHardwareRayTracingCS,FShaderMapPointerTable> local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_d8[0]._0_1_ = (param_4->DimensionValue).DimensionValue;
  local_d8[0]._1_1_ = (param_4->DimensionValue).Tail.DimensionValue;
  local_d8[0]._2_1_ = (param_4->DimensionValue).Tail.Tail.DimensionValue;
  local_d8[0]._3_1_ = (param_4->DimensionValue).Tail.Tail.Tail;
  local_d8[0]._4_1_ = (param_4->Tail).DimensionValue;
  local_d8[0]._5_1_ = (param_4->Tail).Tail.DimensionValue;
  local_d8[0]._6_1_ = (param_4->Tail).Tail.Tail.DimensionValue;
  local_d8[0]._7_1_ = (param_4->Tail).Tail.Tail.Tail.DimensionValue;
  this = param_3->ShaderMap;
  TVar1 = (param_4->Tail).Tail.Tail.Tail.Tail;
  local_c8 = param_6;
  EVar8 = FSceneView::GetShaderPlatform((FSceneView *)param_3);
  bVar5 = FLumenHardwareRayTracingShaderBase::UseThreadGroupSize64(EVar8);
  local_e4._0_2_ = CONCAT11(param_3->bRayTracingFeedbackEnabled,bVar5);
  EVar6 = Nanite::GetRayTracingMode();
  uVar4 = local_d8[0];
  uVar3 = local_e4;
  local_e4._0_3_ = CONCAT12(EVar6 != Fallback,(undefined2)local_e4);
  local_d8[0] = CONCAT44(local_d8[0]._4_4_,local_e4);
  iVar12 = (uint)bVar5 +
           (-(uint)((char)((ulonglong)uVar4 >> 0x38) != '\0') & 0x40) +
           (-(uint)((char)((ulonglong)uVar4 >> 0x30) != '\0') & 0x20) +
           (-(uint)((char)((ulonglong)uVar4 >> 0x28) != '\0') & 0x10) +
           (-(uint)((char)((ulonglong)uVar4 >> 0x20) != '\0') & 8) +
           (-(uint)(EVar6 != Fallback) & 4) + (-(uint)((char)((uint)uVar3 >> 8) != '\0') & 2) +
           (-(uint)(TVar1.DimensionValue != false) & 0x80);
  pFVar9 = (FShaderType *)GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_a8,pFVar9,iVar12);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d8);
    ::FName::ToString((FName *)this_00,&local_98);
    GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar8 = this->Platform;
  pFVar10 = GetStaticType();
  local_c0._8_4_ = 1;
  local_c0.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar10->field_0x20;
  local_c0.GlobalShaderName.Number = *(uint *)&pFVar10->field_0x24;
  local_c0._0_2_ = EVar8;
  local_c0._4_4_ = iVar12;
  EVar7 = FLumenDirectLightingHardwareRayTracing::ShouldPrecachePermutation(&local_c0);
  if (EVar7 == NotUsed) {
    `FGlobalShaderMap::GetShader<FLumenDirectLightingHardwareRayTracingCS>'::__l2::<lambda_1>::
    operator()(local_e8);
  }
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  local_88.ShaderContent = (FLumenDirectLightingHardwareRayTracingCS *)local_a8.ShaderContent;
  local_88.ShaderMap = local_a8.ShaderMap;
  FComputeShaderUtils::AddPass<FLumenDirectLightingHardwareRayTracingCS>
            (param_1,param_2,param_8,&local_88,param_5,local_c8,param_7,
             (TFunction<void___cdecl(void)> *)local_78);
  if (local_78._0_8_ != 0) {
    plVar11 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// ConstructCompiledInstance @ 144d65a30

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

FShader * __cdecl
FLumenDirectLightingHardwareRayTracingCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
              ((FLumenHardwareRayTracingShaderBase *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FLumenDirectLightingHardwareRayTracing::FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144d66d00

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

FShader * __cdecl FLumenDirectLightingHardwareRayTracingCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
              ((FLumenHardwareRayTracingShaderBase *)this);
    return this;
  }
  return (FShader *)0x0;
}

// GetRayTracingPayloadType @ 144d802f0

ERayTracingPayloadType __cdecl
FLumenDirectLightingHardwareRayTracingCS::GetRayTracingPayloadType(int param_1)

{
  return None;
}

// GetStaticType @ 144d831b0

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

FGlobalShaderType * __cdecl FLumenDirectLightingHardwareRayTracingCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FLumenDirectLightingHardwareRayTracing::FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,
                 L"FLumenDirectLightingHardwareRayTracingCS",
                 L"/Engine/Private/Lumen/LumenSceneDirectLightingHardwareRayTracing.usf",
                 L"LumenSceneDirectLightingHardwareRayTracingCS",5,0x100,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,
                         L"/Engine/Private/Lumen/LumenSceneDirectLightingHardwareRayTracing.usf");
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FLumenDirectLightingHardwareRayTracingCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144d8afa0

FTypeLayoutDesc * __thiscall
FLumenDirectLightingHardwareRayTracingCS::GetTypeLayout
          (FLumenDirectLightingHardwareRayTracingCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLumenDirectLig;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLumenDirectLightingHardwareRayTracingCS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144d8be80

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
FLumenDirectLightingHardwareRayTracingCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144d9b630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenDirectLightingHardwareRayTracingCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
            (&local_18,param_1->PermutationId);
  if (local_18.DimensionValue.DimensionValue != false) {
    bVar1 = RHISupportsWaveSize64((FStaticShaderPlatform)param_1->Platform);
    if (!bVar1) {
      return false;
    }
  }
  bVar1 = FLumenDirectLightingHardwareRayTracing::ShouldCompilePermutation
                    ((FGlobalShaderPermutationParameters *)param_1,Inline);
  return bVar1;
}

// ShouldPrecachePermutationImpl @ 144d9c2d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FLumenDirectLightingHardwareRayTracingCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  TStack_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
            (&TStack_18,param_1->PermutationId);
  pTVar1 = CVarLumenSceneDirectLightingHardwareRayTracingForceTwoSided.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = CVarLumenSceneDirectLightingHardwareRayTracingFarField.Ref;
  if (TStack_18.Tail.DimensionValue != (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0)) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar1 = CVarLumenSceneDirectLightingHardwareRayTracingHeightfieldProjectionBias.Ref;
  if ((TStack_18.Tail.Tail.DimensionValue != false) &&
     (*(int *)((longlong)pTVar2->ShadowedValue + lVar4) == 0)) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (TStack_18.Tail.Tail.Tail.DimensionValue !=
      (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != 0)) {
    return NotPrecached;
  }
  bVar3 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
  return TStack_18.Tail.Tail.Tail.Tail.DimensionValue != bVar3;
}

// StaticGetTypeLayout @ 144d9e940

FTypeLayoutDesc * __cdecl FLumenDirectLightingHardwareRayTracingCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLumenDirectLig;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLumenDirectLightingHardwareRayTracingCS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

