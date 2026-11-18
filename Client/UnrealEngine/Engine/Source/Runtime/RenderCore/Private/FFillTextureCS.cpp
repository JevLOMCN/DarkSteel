// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// FFillTextureCS @ 145d09a20

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

FFillTextureCS * __thiscall
FFillTextureCS::FFillTextureCS(FFillTextureCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FShader::FShader((FShader *)this,param_1);
  this_00 = &this->FillValue;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->FillValue).NumBytes = 0;
  (this->Params0).BufferIndex = 0;
  (this->Params0).BaseIndex = 0;
  (this->Params0).NumBytes = 0;
  (this->Params1).BufferIndex = 0;
  *(undefined8 *)&(this->Params1).BaseIndex = 0;
  *(undefined4 *)&(this->Params2).NumBytes = 0;
  (this->FillTexture).NumResources = '\0';
  (this->FillTexture).Type = LooseData;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"FillValue",SPF_Mandatory);
  FShaderParameter::Bind(&this->Params0,param_1->ParameterMap,L"Params0",SPF_Mandatory);
  FShaderParameter::Bind(&this->Params1,param_1->ParameterMap,L"Params1",SPF_Mandatory);
  FShaderParameter::Bind(&this->Params2,param_1->ParameterMap,L"Params2",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->FillTexture,param_1->ParameterMap,L"FillTexture",SPF_Mandatory);
  return this;
}

// FFillTextureCS @ 145d09b20

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

FFillTextureCS * __thiscall FFillTextureCS::FFillTextureCS(FFillTextureCS *this)

{
  FShader::FShader((FShader *)this);
  (this->FillValue).BufferIndex = 0;
  (this->FillValue).BaseIndex = 0;
  (this->FillValue).NumBytes = 0;
  (this->Params0).BufferIndex = 0;
  *(undefined8 *)&(this->Params0).BaseIndex = 0;
  *(undefined8 *)&(this->Params1).NumBytes = 0;
  (this->FillTexture).BaseIndex = 0;
  (this->FillTexture).NumResources = '\0';
  (this->FillTexture).Type = LooseData;
  return this;
}

// ConstructCompiledInstance @ 145d16bf0

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
FFillTextureCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined4 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"FillValue",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"Params0",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayMax,param_1->ParameterMap,
               L"Params1",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               param_1->ParameterMap,L"Params2",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters.ArrayNum,
               param_1->ParameterMap,L"FillTexture",SPF_Mandatory);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d1a040

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

FShader * __cdecl FFillTextureCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    this[1].Bindings.ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.ResourceParameters.ArrayNum = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145d37280

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

FGlobalShaderType * __cdecl FFillTextureCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FFillTextureCS",
                 L"/Engine/Private/OneColorShader.usf",L"MainFillTextureCS",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/OneColorShader.usf");
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
      atexit(`FFillTextureCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145d40cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FFillTextureCS::GetTypeLayout(FFillTextureCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFillTextureCS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFillTextureCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FillTexture";
    DAT_15517bc2a = Freeze::FindFieldNameLength(L"FillTexture");
    _DAT_15517bc08 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517bc10 = ::TypeBuffer[0x10];
    DAT_15517bc10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bc10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bc10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bc10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bc10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bc10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bc10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bc18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bc20 = 0xf8;
    _DAT_15517bc24 = 1;
    _DAT_15517bc28 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params2";
    DAT_15517bbfa = Freeze::FindFieldNameLength(L"Params2");
    _DAT_15517bbd8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bbe0 = ::TypeBuffer[0x10];
    DAT_15517bbe0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bbe0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bbe0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bbe0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bbe0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bbe0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bbe0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bbe8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bbf0 = 0xf2;
    _DAT_15517bbf4 = 1;
    _DAT_15517bbf8 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params1";
    DAT_15517bbca = Freeze::FindFieldNameLength(L"Params1");
    _DAT_15517bba8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bbb0 = ::TypeBuffer[0x10];
    DAT_15517bbb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bbb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bbb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bbb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bbb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bbb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bbb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bbb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bbc0 = 0xec;
    _DAT_15517bbc4 = 1;
    _DAT_15517bbc8 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params0";
    DAT_15517bb9a = Freeze::FindFieldNameLength(L"Params0");
    _DAT_15517bb78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bb80 = ::TypeBuffer[0x10];
    DAT_15517bb80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bb80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bb80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bb80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bb80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bb80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bb80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bb88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bb90 = 0xe6;
    _DAT_15517bb94 = 1;
    _DAT_15517bb98 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FillValue";
    DAT_15517bb6a = Freeze::FindFieldNameLength(L"FillValue");
    _DAT_15517bb48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bb50 = ::TypeBuffer[0x10];
    DAT_15517bb50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bb50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bb50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bb50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bb50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bb50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bb50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517bb58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bb60 = 0xe0;
    _DAT_15517bb64 = 1;
    _DAT_15517bb68 = 0;
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

// InternalDestroy @ 145d43420

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
FFillTextureCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutation @ 145d4eb70

bool __cdecl FFillTextureCS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 145d4fb30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FFillTextureCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldPrecachePermutationImpl @ 145d505d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FFillTextureCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145d5b040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FFillTextureCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FFillTextureCS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FFillTextureCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FillTexture";
    DAT_15517bc2a = Freeze::FindFieldNameLength(L"FillTexture");
    _DAT_15517bc08 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15517bc10 = ::TypeBuffer[0x10];
    DAT_15517bc10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bc10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bc10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bc10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bc10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bc10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bc10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bc18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bc20 = 0xf8;
    _DAT_15517bc24 = 1;
    _DAT_15517bc28 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params2";
    DAT_15517bbfa = Freeze::FindFieldNameLength(L"Params2");
    _DAT_15517bbd8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bbe0 = ::TypeBuffer[0x10];
    DAT_15517bbe0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bbe0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bbe0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bbe0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bbe0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bbe0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bbe0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bbe8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bbf0 = 0xf2;
    _DAT_15517bbf4 = 1;
    _DAT_15517bbf8 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params1";
    DAT_15517bbca = Freeze::FindFieldNameLength(L"Params1");
    _DAT_15517bba8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bbb0 = ::TypeBuffer[0x10];
    DAT_15517bbb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bbb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bbb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bbb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bbb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bbb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bbb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bbb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bbc0 = 0xec;
    _DAT_15517bbc4 = 1;
    _DAT_15517bbc8 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Params0";
    DAT_15517bb9a = Freeze::FindFieldNameLength(L"Params0");
    _DAT_15517bb78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bb80 = ::TypeBuffer[0x10];
    DAT_15517bb80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bb80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bb80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bb80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bb80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bb80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bb80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15517bb88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bb90 = 0xe6;
    _DAT_15517bb94 = 1;
    _DAT_15517bb98 = 0;
    `public:_static_void___cdecl_FFillTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FillValue";
    DAT_15517bb6a = Freeze::FindFieldNameLength(L"FillValue");
    _DAT_15517bb48 = FShaderParameter::StaticGetTypeLayout();
    DAT_15517bb50 = ::TypeBuffer[0x10];
    DAT_15517bb50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15517bb50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15517bb50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15517bb50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15517bb50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15517bb50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15517bb50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FFillTextureCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15517bb58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15517bb60 = 0xe0;
    _DAT_15517bb64 = 1;
    _DAT_15517bb68 = 0;
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

