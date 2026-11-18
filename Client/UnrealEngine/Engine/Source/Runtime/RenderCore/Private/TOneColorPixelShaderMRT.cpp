// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 13

// TOneColorPixelShaderMRT @ 145d0b0d0

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

TOneColorPixelShaderMRT * __thiscall
TOneColorPixelShaderMRT::TOneColorPixelShaderMRT
          (TOneColorPixelShaderMRT *this,FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShaderParametersMetadata *pFVar3;
  
  FShader::FShader((FShader *)this,param_1);
  pFVar2 = param_1->ParameterMap;
  iVar1 = param_1->PermutationId;
  pFVar3 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            ((FShaderParameterBindings *)this,(FShader *)this,iVar1,pFVar2,pFVar3,true);
  return this;
}

// TOneColorPixelShaderMRT @ 145d0b130

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

TOneColorPixelShaderMRT * __thiscall
TOneColorPixelShaderMRT::TOneColorPixelShaderMRT(TOneColorPixelShaderMRT *this)

{
  FShader::FShader((FShader *)this);
  return this;
}

// ConstructCompiledInstance @ 145d17fc0

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
TOneColorPixelShaderMRT::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d1ace0

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

FShader * __cdecl TOneColorPixelShaderMRT::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145d3cd60

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

FGlobalShaderType * __cdecl TOneColorPixelShaderMRT::GetStaticType(void)

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
      pFVar4 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,L"TOneColorPixelShaderMRT",
                 L"/Engine/Private/OneColorShader.usf",L"MainPixelShaderMRT",3,0x80,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/OneColorShader.usf");
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
      atexit(`TOneColorPixelShaderMRT::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145d40fb0

FTypeLayoutDesc * __thiscall TOneColorPixelShaderMRT::GetTypeLayout(TOneColorPixelShaderMRT *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TOneColorPixelS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOneColorPixelShaderMRT,0>::Do;
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
    ::FieldBuffer._8_8_ = FOneColorPS::StaticGetTypeLayout();
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

// InternalDestroy @ 145d43ff0

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
TOneColorPixelShaderMRT::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ModifyCompilationEnvironment @ 145d468c0

void __cdecl
TOneColorPixelShaderMRT::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  int local_res18 [4];
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  local_38;
  int *local_28;
  undefined1 *local_20;
  
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  ::
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
            (&local_38,*(int *)&param_1->field_0x4);
  iVar1 = 0;
  if (local_38.Tail.DimensionValue != false) {
    local_28 = local_res18;
    local_res18[0] = 0;
    local_20 = local_res8;
    local_res8[0] = 1;
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_&&>_>
              ((TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
                *)&param_2->RenderTargetOutputFormatsMap,
               (TPairInitializer<unsigned_int_const_&,unsigned_char_&&> *)(local_res18 + 2),
               (bool *)&local_28);
  }
  if (0 < local_38.Tail.Tail.DimensionValue) {
    local_28 = local_res18;
    local_20 = local_res8;
    do {
      local_res18[0] = iVar1 + (local_38.DimensionValue - local_38.Tail.Tail.DimensionValue);
      local_res8[0] = 0x1c;
      TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
                  *)&param_2->RenderTargetOutputFormatsMap,
                 (TPairInitializer<unsigned_int_const_&,unsigned_char_&&> *)(local_res18 + 2),
                 (bool *)&local_28);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_38.Tail.Tail.DimensionValue);
  }
  return;
}

// SetColors @ 145d4a2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
TOneColorPixelShaderMRT::SetColors
          (FRHICommandList *param_1,TShaderMapRef<TOneColorPixelShaderMRT> *param_2,
          FLinearColor *param_3,int param_4)

{
  FRHIPixelShader *pFVar1;
  FShaderParametersMetadata *pFVar2;
  undefined1 auStackY_1e8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  FParameters local_1a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FRenderTargetBindingSlots::FRenderTargetBindingSlots(&local_1a8.RenderTargets);
  FOneColorPS::FillParameters(*(FOneColorPS **)param_2,&local_1a8,param_3,param_4);
  pFVar1 = TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<TOneColorPixelShaderMRT,FShaderMapPointerTable> *)param_2,true
                     );
  pFVar2 = FOneColorPS::FParameters::FTypeInfo::GetStructMetadata();
  local_1b8.ShaderContent = *(FShader **)param_2;
  local_1b8.ShaderMap = *(FShaderMapBase **)&param_2->field_0x8;
  ValidateShaderParameters(&local_1b8,pFVar2,&local_1a8);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar1,*(FShaderParameterBindings **)param_2,pFVar2,
             &local_1a8);
  return;
}

// ShouldCompilePermutation @ 145d4ec90

bool __cdecl
TOneColorPixelShaderMRT::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  local_18;
  
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  ::
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
            (&local_18,*(int *)&param_1->field_0x4);
  if (local_18.DimensionValue < local_18.Tail.Tail.DimensionValue) {
    return false;
  }
  if ((local_18.DimensionValue != 0) && (local_18.Tail.DimensionValue != false)) {
    uVar1 = *(ushort *)param_1;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x1f0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bRequiresExplicit128bitRT;
  }
  return true;
}

// ShouldCompilePermutationImpl @ 145d4ff00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOneColorPixelShaderMRT::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  local_18;
  
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  ::
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
            (&local_18,param_1->PermutationId);
  if (local_18.DimensionValue < local_18.Tail.Tail.DimensionValue) {
    return false;
  }
  if ((local_18.DimensionValue != 0) && (local_18.Tail.DimensionValue != false)) {
    EVar1 = param_1->Platform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x1f0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bRequiresExplicit128bitRT;
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 145d508a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOneColorPixelShaderMRT::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145d5f530

FTypeLayoutDesc * __cdecl TOneColorPixelShaderMRT::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TOneColorPixelS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOneColorPixelShaderMRT,0>::Do;
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
    ::FieldBuffer._8_8_ = FOneColorPS::StaticGetTypeLayout();
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

