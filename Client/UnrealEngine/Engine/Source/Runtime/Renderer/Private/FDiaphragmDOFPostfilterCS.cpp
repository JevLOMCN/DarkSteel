// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ConstructCompiledInstance @ 14513cf10

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
_anon_85C081EE::FDiaphragmDOFPostfilterCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14513dd70

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

FShader * __cdecl _anon_85C081EE::FDiaphragmDOFPostfilterCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145150ca0

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

FGlobalShaderType * __cdecl _anon_85C081EE::FDiaphragmDOFPostfilterCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::_TSS0);
    if (`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0) {
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ = u_FDiaphragmDOFPo;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ = InternalDestroy;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FDiaphragmDOFPostfilterCS,0>::Do;
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer.
        _0_8_ = u_BASE;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x2a] = '\x04';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer.
        _8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer.
        _24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x10] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x11] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x12] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x13] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x14] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x15] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x16] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x17] = `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x20] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x21] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x22] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x23] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x24] = '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x25] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x26] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::FieldBuffer
        [0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FDiaphragmDOFPostfilterCS,FGlobalShader>'::`2'::
            FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::StaticType,Global,
                 (FTypeLayoutDesc *)
                 `FDiaphragmDOFPostfilterCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FDiaphragmDOFPostfilterCS",L"/Engine/Private/DiaphragmDOF/DOFPostfiltering.usf",
                 L"PostfilterMainCS",5,0x3c,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::StaticType._0_8_ = FGlobalShaderType::vftable
      ;
      ::FString::FString(&local_28,L"/Engine/Private/DiaphragmDOF/DOFPostfiltering.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
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
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(``anonymous_namespace'::FDiaphragmDOFPostfilterCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::_TSS0);
      return &`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FDiaphragmDOFPostfilterCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145159f20

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
_anon_85C081EE::FDiaphragmDOFPostfilterCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 145160f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFPostfilterCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  TShaderPermutationDomain<_anonymous_namespace_::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFPostfilterMethodDim,A0x85c081ee::FDiaphragmDOFPostfilterCS::FTileOptimization>
  TStack_14;
  
  uVar1 = param_1->PermutationId;
  if ((((int)uVar1 % 2 != 0) && ((int)uVar1 % 2 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<`anonymous_namespace'::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFPostfilterMethodDim,A0x85c081ee::FDiaphragmDOFPostfilterCS::FTileOptimization>
  ::
  TShaderPermutationDomain<_anonymous_namespace_::FDDOFLayerProcessingDim,A0x85c081ee::FDDOFPostfilterMethodDim,A0x85c081ee::FDiaphragmDOFPostfilterCS::FTileOptimization>
            (&TStack_14,(int)uVar1 / 2);
  if ((0x3b < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  cVar3 = TStack_14.Tail.Tail.DimensionValue;
  if (TStack_14.Tail.DimensionValue != RGBMax3x3) {
    cVar3 = '\0';
  }
  if ((((bool)cVar3 == TStack_14.Tail.Tail.DimensionValue) &&
      (TStack_14.Tail.DimensionValue != None)) &&
     ((TStack_14.DimensionValue & ~BackgroundOnly) == ForegroundOnly)) {
    bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation
                      ((FGlobalShaderPermutationParameters *)param_1);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ShouldPrecachePermutationImpl @ 145161c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_85C081EE::FDiaphragmDOFPostfilterCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

