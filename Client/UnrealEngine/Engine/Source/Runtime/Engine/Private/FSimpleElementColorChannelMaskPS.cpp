// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FSimpleElementColorChannelMaskPS @ 1485a45f0

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

FSimpleElementColorChannelMaskPS * __thiscall
FSimpleElementColorChannelMaskPS::FSimpleElementColorChannelMaskPS
          (FSimpleElementColorChannelMaskPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->InTexture;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->InTextureSampler).BaseIndex = 0;
  *(undefined8 *)&(this->InTextureSampler).NumResources = 0;
  (this->Gamma).BufferIndex = 0;
  (this->Gamma).BaseIndex = 0;
  (this->Gamma).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"InTexture",SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->InTextureSampler,param_1->ParameterMap,L"InTextureSampler",SPF_Optional);
  FShaderParameter::Bind(&this->ColorWeights,param_1->ParameterMap,L"ColorWeights",SPF_Optional);
  FShaderParameter::Bind(&this->Gamma,param_1->ParameterMap,L"Gamma",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 1485af370

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
FSimpleElementColorChannelMaskPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this + 1),param_1->ParameterMap,L"InTexture",
               SPF_Mandatory);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4,
               param_1->ParameterMap,L"InTextureSampler",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayNum,param_1->ParameterMap,
               L"ColorWeights",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2),
               param_1->ParameterMap,L"Gamma",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1485af8a0

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

FShader * __cdecl FSimpleElementColorChannelMaskPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1485ca930

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

FGlobalShaderType * __cdecl FSimpleElementColorChannelMaskPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FSimpleElementColorChannelMaskPS",
                 L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf");
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
      atexit(`FSimpleElementColorChannelMaskPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1485cbbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FSimpleElementColorChannelMaskPS::GetTypeLayout(FSimpleElementColorChannelMaskPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementC;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementColorChannelMaskPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Gamma";
    DAT_1552438ba = Freeze::FindFieldNameLength(L"Gamma");
    _DAT_155243898 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552438a0 = ::TypeBuffer[0x10];
    DAT_1552438a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552438a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552438a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552438a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552438a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552438a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552438a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552438a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552438b0 = 0xee;
    _DAT_1552438b4 = 1;
    _DAT_1552438b8 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ColorWeights";
    DAT_15524388a = Freeze::FindFieldNameLength(L"ColorWeights");
    _DAT_155243868 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243870 = ::TypeBuffer[0x10];
    DAT_155243870_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243870_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243870_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243870_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243870_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243870_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243870_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243878 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243880 = 0xe8;
    _DAT_155243884 = 1;
    _DAT_155243888 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_15524385a = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_155243838 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243840 = ::TypeBuffer[0x10];
    DAT_155243840_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243840_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243840_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243840_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243840_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243840_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243840_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243848 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243850 = 0xe4;
    _DAT_155243854 = 1;
    _DAT_155243858 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_15524382a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155243808 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243810 = ::TypeBuffer[0x10];
    DAT_155243810_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243810_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243810_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243810_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243810_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243810_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243810_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243818 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243820 = 0xe0;
    _DAT_155243824 = 1;
    _DAT_155243828 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// InternalDestroy @ 1485cdc30

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
FSimpleElementColorChannelMaskPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 1485d9000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementColorChannelMaskPS::SetParameters
          (FSimpleElementColorChannelMaskPS *this,FRHIBatchedShaderParameters *param_1,
          FTexture *param_2,TMatrix<double> *param_3,float param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  SetTextureParameter(param_1,&this->InTexture,&this->InTextureSampler,param_2);
  uVar1 = (this->ColorWeights).NumBytes;
  uVar2 = (uint)uVar1;
  fStack_60 = (float)param_3->M[0][2];
  fStack_5c = (float)param_3->M[0][3];
  if (0x40 < uVar1) {
    uVar2 = 0x40;
  }
  local_68 = (float)param_3->M[0][0];
  fStack_64 = (float)param_3->M[0][1];
  fStack_50 = (float)param_3->M[1][2];
  fStack_4c = (float)param_3->M[1][3];
  local_58 = (float)param_3->M[1][0];
  fStack_54 = (float)param_3->M[1][1];
  fStack_40 = (float)param_3->M[2][2];
  fStack_3c = (float)param_3->M[2][3];
  local_48 = (float)param_3->M[2][0];
  fStack_44 = (float)param_3->M[2][1];
  fStack_30 = (float)param_3->M[3][2];
  fStack_2c = (float)param_3->M[3][3];
  local_38 = (float)param_3->M[3][0];
  fStack_34 = (float)param_3->M[3][1];
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ColorWeights).BufferIndex,(uint)(this->ColorWeights).BaseIndex,
               uVar2,&local_68);
  }
  uVar1 = (this->Gamma).NumBytes;
  uVar2 = (uint)uVar1;
  if (4 < uVar1) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->Gamma).BufferIndex,(uint)(this->Gamma).BaseIndex,uVar2,&param_4)
    ;
  }
  return;
}

// ShouldCompilePermutation @ 1485dbdb0

bool __cdecl
FSimpleElementColorChannelMaskPS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xf4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bIsPC;
}

// ShouldCompilePermutationImpl @ 1485dbec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FSimpleElementColorChannelMaskPS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xf4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bIsPC;
}

// ShouldPrecachePermutationImpl @ 1485dc030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FSimpleElementColorChannelMaskPS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1485dcbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSimpleElementColorChannelMaskPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSimpleElementC;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSimpleElementColorChannelMaskPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Gamma";
    DAT_1552438ba = Freeze::FindFieldNameLength(L"Gamma");
    _DAT_155243898 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552438a0 = ::TypeBuffer[0x10];
    DAT_1552438a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552438a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552438a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552438a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552438a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552438a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552438a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552438a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552438b0 = 0xee;
    _DAT_1552438b4 = 1;
    _DAT_1552438b8 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ColorWeights";
    DAT_15524388a = Freeze::FindFieldNameLength(L"ColorWeights");
    _DAT_155243868 = FShaderParameter::StaticGetTypeLayout();
    DAT_155243870 = ::TypeBuffer[0x10];
    DAT_155243870_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243870_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243870_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243870_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243870_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243870_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243870_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243878 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243880 = 0xe8;
    _DAT_155243884 = 1;
    _DAT_155243888 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTextureSampler";
    DAT_15524385a = Freeze::FindFieldNameLength(L"InTextureSampler");
    _DAT_155243838 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243840 = ::TypeBuffer[0x10];
    DAT_155243840_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243840_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243840_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243840_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243840_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243840_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243840_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155243848 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243850 = 0xe4;
    _DAT_155243854 = 1;
    _DAT_155243858 = 0;
    `public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InTexture";
    DAT_15524382a = Freeze::FindFieldNameLength(L"InTexture");
    _DAT_155243808 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155243810 = ::TypeBuffer[0x10];
    DAT_155243810_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155243810_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155243810_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155243810_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155243810_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155243810_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155243810_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSimpleElementColorChannelMaskPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155243818 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155243820 = 0xe0;
    _DAT_155243824 = 1;
    _DAT_155243828 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

