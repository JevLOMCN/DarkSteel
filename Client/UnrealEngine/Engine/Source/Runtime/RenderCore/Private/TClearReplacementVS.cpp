// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 24

// ConstructCompiledInstance @ 145d15aa0

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
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int *this;
  FShader *this_00;
  
  this_00 = ::operator_new(0x100);
  if (this_00 != (FShader *)0x0) {
    FShader::FShader(this_00,param_1);
    this = &this_00[1].Bindings.ResourceParameters.ArrayNum;
    this_00[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this_00[1].Bindings.Parameters.ArrayNum = 0;
    this_00[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this_00[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    *this = 0;
    *(undefined2 *)&this_00[1].Bindings.ResourceParameters.ArrayMax = 0;
    FShaderParameter::Bind((FShaderParameter *)this,param_1->ParameterMap,L"Depth",SPF_Mandatory);
    return this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145d15b30

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  undefined1 *this;
  FShader *this_00;
  
  this_00 = ::operator_new(0x100);
  if (this_00 != (FShader *)0x0) {
    FShader::FShader(this_00,param_1);
    this = &this_00[1].Bindings.Parameters.AllocatorInstance.field_0x6;
    *(undefined4 *)this = 0;
    *(undefined2 *)((longlong)&this_00[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined4 *)&this_00[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this_00[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    this_00[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this_00[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)this,param_1->ParameterMap,L"MinBounds",SPF_Mandatory);
    FShaderParameter::Bind
              ((FShaderParameter *)&this_00[1].Bindings.Parameters.ArrayMax,param_1->ParameterMap,
               L"MaxBounds",SPF_Mandatory);
    this_00[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined2 *)&this_00[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145d15c10

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this,param_1);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d19030

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
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d19090

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d190f0

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145d314e0

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

FGlobalShaderType * __cdecl
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FClearReplacementVS_Depth",
                 L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ClearReplacementShaders.usf");
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
      atexit(`TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 145d316e0

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

FGlobalShaderType * __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FClearReplacementVS_Bounds",
                 L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ClearReplacementShaders.usf");
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
      atexit(`TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 145d318e0

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

FGlobalShaderType * __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FClearReplacementVS",
                 L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ClearReplacementShaders.usf");
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
      atexit(`TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145d409e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::GetTypeLayout
          (TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_> *this)

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
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_155187092 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_155187070 = FShaderParameter::StaticGetTypeLayout();
    DAT_155187078 = ::TypeBuffer[0x10];
    DAT_155187078_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155187078_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155187078_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155187078_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155187078_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155187078_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155187078_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155187080 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155187088 = 0xf8;
    _DAT_15518708c = 1;
    _DAT_155187090 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = StaticGetTypeLayoutDesc<TClearReplacementBase<0,4,1,0>_>();
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

// GetTypeLayout @ 145d409f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::GetTypeLayout
          (TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_> *this)

{
  uchar **ppuVar1;
  
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>,0>::Do;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_1551870c2 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_1551870a0 = FShaderParameter::StaticGetTypeLayout();
    ::FieldBuffer._0_8_ = u_BASE;
    DAT_1551870a8 = ::TypeBuffer[0x10];
    DAT_1551870a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551870a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551870a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551870a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551870a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551870a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551870a8_1._6_1_ = ::TypeBuffer[0x17];
    ppuVar1 = &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551870b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551870b8 = 0xf8;
    _DAT_1551870bc = 1;
    _DAT_1551870c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_155188e97 & 2) == 0) {
      DAT_155188e97 = DAT_155188e97 | 2;
      _DAT_155188e50 = Freeze::DefaultWriteMemoryImage;
      _DAT_155188e38 = L"TClearReplacementBase";
      _DAT_155188e58 = Freeze::DefaultUnfrozenCopy;
      _DAT_155188e48 = TClearReplacementBase<0,4,1,1>::InternalDestroy;
      _DAT_155188e78 = TGetDefaultObjectHelper<TClearReplacementBase<0,4,1,1>,0>::Do;
      _DAT_155188e60 = Freeze::DefaultAppendHash;
      _DAT_155188e68 = Freeze::DefaultGetTargetAlignment;
      _DAT_155188e70 = Freeze::DefaultToString;
      _DAT_155188e88 = 0xf8;
      _DAT_155188e90 = 8;
      DAT_155188e94 = '\0';
      _DAT_155188e8c = 0xffffffff;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "MaxBoundsParam";
      DAT_1551898aa = Freeze::FindFieldNameLength(L"MaxBoundsParam");
      _DAT_155189888 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189890 = (uchar *)DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      _DAT_155189898 = Freeze::DefaultWriteMemoryImageField;
      _DAT_1551898a0 = 0xec;
      _DAT_1551898a4 = 1;
      _DAT_1551898a8 = 0;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "MinBoundsParam";
      DAT_15518948a = Freeze::FindFieldNameLength(L"MinBoundsParam");
      _DAT_155189468 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189470 = DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      _DAT_155189478 = Freeze::DefaultWriteMemoryImageField;
      _DAT_155189480 = 0xe6;
      _DAT_155189484 = 1;
      _DAT_155189488 = 0;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "ClearValueParam";
      DAT_15518927a = Freeze::FindFieldNameLength(L"ClearValueParam");
      _DAT_155189258 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189260 = DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      ::FieldBuffer._0_8_ = u_BASE;
      _DAT_155189268 = Freeze::DefaultWriteMemoryImageField;
      _DAT_155189270 = 0xe0;
      _DAT_155189274 = 1;
      _DAT_155189278 = 0;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
      DAT_155188e95 = DAT_155188e95 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155188e40;
      DAT_155188e40 = (uchar **)::FieldBuffer;
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
        DAT_155188e96 = DAT_155188e96 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TClearReplacementBase<0,4,1,1>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = (uchar **)::TypeBuffer._16_8_;
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TClearReplacementBase<0,4,1,1>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
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
    if (DAT_155188e94 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._16_8_ = ppuVar1;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 145d40a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::GetTypeLayout
          (TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_> *this)

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
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_1551870f2 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_1551870d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551870d8 = ::TypeBuffer[0x10];
    DAT_1551870d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551870d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551870d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551870d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551870d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551870d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551870d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1551870e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551870e8 = 0xf8;
    _DAT_1551870ec = 1;
    _DAT_1551870f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = StaticGetTypeLayoutDesc<TClearReplacementBase<0,4,1,0>_>();
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

// InternalDestroy @ 145d42860

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
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// InternalDestroy @ 145d428a0

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// InternalDestroy @ 145d428e0

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
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutationImpl @ 145d4efe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldCompilePermutationImpl @ 145d4eff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldCompilePermutationImpl @ 145d4f000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 145d502f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 145d50300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 145d50310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145d56c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_155187092 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_155187070 = FShaderParameter::StaticGetTypeLayout();
    DAT_155187078 = ::TypeBuffer[0x10];
    DAT_155187078_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155187078_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155187078_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155187078_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155187078_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155187078_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155187078_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<1,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155187080 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155187088 = 0xf8;
    _DAT_15518708c = 1;
    _DAT_155187090 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = StaticGetTypeLayoutDesc<TClearReplacementBase<0,4,1,0>_>();
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

// StaticGetTypeLayout @ 145d56e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::StaticGetTypeLayout(void)

{
  uchar **ppuVar1;
  
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>,0>::Do;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_1551870c2 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_1551870a0 = FShaderParameter::StaticGetTypeLayout();
    ::FieldBuffer._0_8_ = u_BASE;
    DAT_1551870a8 = ::TypeBuffer[0x10];
    DAT_1551870a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551870a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551870a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551870a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551870a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551870a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551870a8_1._6_1_ = ::TypeBuffer[0x17];
    ppuVar1 = &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
               ::__l2::FieldBuffer;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,1>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551870b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551870b8 = 0xf8;
    _DAT_1551870bc = 1;
    _DAT_1551870c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_155188e97 & 2) == 0) {
      DAT_155188e97 = DAT_155188e97 | 2;
      _DAT_155188e50 = Freeze::DefaultWriteMemoryImage;
      _DAT_155188e38 = L"TClearReplacementBase";
      _DAT_155188e58 = Freeze::DefaultUnfrozenCopy;
      _DAT_155188e48 = TClearReplacementBase<0,4,1,1>::InternalDestroy;
      _DAT_155188e78 = TGetDefaultObjectHelper<TClearReplacementBase<0,4,1,1>,0>::Do;
      _DAT_155188e60 = Freeze::DefaultAppendHash;
      _DAT_155188e68 = Freeze::DefaultGetTargetAlignment;
      _DAT_155188e70 = Freeze::DefaultToString;
      _DAT_155188e88 = 0xf8;
      _DAT_155188e90 = 8;
      DAT_155188e94 = '\0';
      _DAT_155188e8c = 0xffffffff;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "MaxBoundsParam";
      DAT_1551898aa = Freeze::FindFieldNameLength(L"MaxBoundsParam");
      _DAT_155189888 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189890 = (uchar *)DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      _DAT_155189898 = Freeze::DefaultWriteMemoryImageField;
      _DAT_1551898a0 = 0xec;
      _DAT_1551898a4 = 1;
      _DAT_1551898a8 = 0;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "MinBoundsParam";
      DAT_15518948a = Freeze::FindFieldNameLength(L"MinBoundsParam");
      _DAT_155189468 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189470 = DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      _DAT_155189478 = Freeze::DefaultWriteMemoryImageField;
      _DAT_155189480 = 0xe6;
      _DAT_155189484 = 1;
      _DAT_155189488 = 0;
      `public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
      ::__l2::FieldBuffer = "ClearValueParam";
      DAT_15518927a = Freeze::FindFieldNameLength(L"ClearValueParam");
      _DAT_155189258 = FShaderParameter::StaticGetTypeLayout();
      _DAT_155189260 = DAT_155188e40;
      DAT_155188e40 =
           &`public:_static_void___cdecl_TClearReplacementBase<0,4,1,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
            ::__l2::FieldBuffer;
      ::FieldBuffer._0_8_ = u_BASE;
      _DAT_155189268 = Freeze::DefaultWriteMemoryImageField;
      _DAT_155189270 = 0xe0;
      _DAT_155189274 = 1;
      _DAT_155189278 = 0;
      ::FieldBuffer[0x2a] = '\x04';
      ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
      DAT_155188e95 = DAT_155188e95 + '\x01';
      ::FieldBuffer._16_8_ = DAT_155188e40;
      DAT_155188e40 = (uchar **)::FieldBuffer;
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
        DAT_155188e96 = DAT_155188e96 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TClearReplacementBase<0,4,1,1>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
      ppuVar1 = (uchar **)::TypeBuffer._16_8_;
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TClearReplacementBase<0,4,1,1>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
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
    if (DAT_155188e94 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._16_8_ = ppuVar1;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 145d57250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = ::u_FClearReplaceme;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DepthParam";
    DAT_1551870f2 = Freeze::FindFieldNameLength(L"DepthParam");
    _DAT_1551870d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551870d8 = ::TypeBuffer[0x10];
    DAT_1551870d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551870d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551870d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551870d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551870d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551870d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551870d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TClearReplacementVS<0,TClearReplacementBase<0,4,1,0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1551870e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551870e8 = 0xf8;
    _DAT_1551870ec = 1;
    _DAT_1551870f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = StaticGetTypeLayoutDesc<TClearReplacementBase<0,4,1,0>_>();
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

