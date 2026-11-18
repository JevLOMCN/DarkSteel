// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// FMaterialCacheShadeCS @ 144e72630

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

FMaterialCacheShadeCS * __thiscall
FMaterialCacheShadeCS::FMaterialCacheShadeCS
          (FMaterialCacheShadeCS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  this_00 = &this->PassDataParam;
  (this->PageIndirectionsParam).BaseIndex = 0;
  (this->PageIndirectionsParam).NumResources = '\0';
  (this->PageIndirectionsParam).Type = LooseData;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PassDataParam).NumBytes = 0;
  FShaderParameter::Bind(this_00,(FShaderParameterMap *)param_1->_padding_,L"PassData",SPF_Optional)
  ;
  FShaderResourceParameter::Bind
            (&this->PageIndirectionsParam,(FShaderParameterMap *)param_1->_padding_,
             L"PageIndirections",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 144e80f50

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
FMaterialCacheShadeCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x118);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderParameter *)((longlong)&this_00[1]._padding_ + 4);
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this->BufferIndex = 0;
    this->BaseIndex = 0;
    *(undefined2 *)&this_00[1]._padding_ = 0;
    FShaderParameter::Bind(this,param_1->ParameterMap,L"PassData",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(this_00 + 1),param_1->ParameterMap,L"PageIndirections",
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144e81ca0

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

FShader * __cdecl FMaterialCacheShadeCS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x118);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0x118);
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144e956b0

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

FMeshMaterialShaderType * __cdecl FMaterialCacheShadeCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"FMaterialCacheShadeCS",
                 L"/Engine/Private/MaterialCache/MaterialCacheShade.usf",L"Main",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x118,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MaterialCache/MaterialCacheShade.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FMaterialCacheShadeCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144e9af10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FMaterialCacheShadeCS::GetTypeLayout(FMaterialCacheShadeCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCacheS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCacheShadeCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_1550e36aa = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_1550e3688 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550e3690 = ::TypeBuffer[0x10];
    DAT_1550e3690_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550e3690_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550e3690_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550e3690_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550e3690_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550e3690_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550e3690_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550e3698 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550e36a0 = 0x10c;
    _DAT_1550e36a4 = 1;
    _DAT_1550e36a8 = 0;
    `public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PageIndirectionsParam";
    DAT_1550e367a = Freeze::FindFieldNameLength(L"PageIndirectionsParam");
    _DAT_1550e3658 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550e3660 = ::TypeBuffer[0x10];
    DAT_1550e3660_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550e3660_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550e3660_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550e3660_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550e3660_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550e3660_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550e3660_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550e3668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550e3670 = 0x108;
    _DAT_1550e3674 = 1;
    _DAT_1550e3678 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 144e9c4c0

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
FMaterialCacheShadeCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// ModifyCompilationEnvironment @ 144ea4d70

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
FMaterialCacheShadeCS::ModifyCompilationEnvironment
          (FMeshMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBSTRATE_INLINE_SHADING",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBSTRATE_USE_FULLYSIMPLIFIED_MATERIAL",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SCENE_TEXTURES_DISABLED",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_ANALYTIC_DERIVATIVES",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MATERIAL_CACHE",1);
  (param_2->CompilerFlags).Data = (param_2->CompilerFlags).Data | 0x6010100000;
  return;
}

// SetPassParameters @ 144eaaeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheShadeCS::SetPassParameters
          (FMaterialCacheShadeCS *this,FRHIBatchedShaderParameters *param_1,
          TIntVector4<unsigned_int> *param_2,FRHIShaderResourceView *param_3)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (this->PassDataParam).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PassDataParam).BufferIndex,(uint)(this->PassDataParam).BaseIndex
               ,uVar2,param_2);
  }
  SetSRVParameter(param_1,&this->PageIndirectionsParam,param_3);
  return;
}

// ShouldCompilePermutation @ 144eb0130

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

bool __cdecl
FMaterialCacheShadeCS::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if (((param_1->_padding_ & 2) == 0) && ((param_1->_padding_ & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
  if ((iVar1 == 0) || (iVar1 < (char)param_1->_padding_)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar4 = IsMaterialCacheSupported((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_);
  if ((((bVar4) && ((param_1->VertexFactoryType->Flags & SupportsComputeShading) != None)) &&
      (bVar2)) && (bVar3)) {
    return true;
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144eb0640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMaterialCacheShadeCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (((param_1[5].PermutationId & 2) == 0) && ((param_1[4].Flags & HasEditorOnlyData) == None)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_1->PermutationId == 0) || (param_1->PermutationId < (int)(char)param_1[4].Platform)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  bVar3 = IsMaterialCacheSupported((FStaticShaderPlatform)param_1->Platform);
  if ((((bVar3) && ((*(uint *)(*(longlong *)&param_1[7].PermutationId + 0x38) & 0x20000) != 0)) &&
      (bVar1)) && (bVar2)) {
    return true;
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144eb0f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FMaterialCacheShadeCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144eb29b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialCacheShadeCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialCacheS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialCacheShadeCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassDataParam";
    DAT_1550e36aa = Freeze::FindFieldNameLength(L"PassDataParam");
    _DAT_1550e3688 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550e3690 = ::TypeBuffer[0x10];
    DAT_1550e3690_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550e3690_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550e3690_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550e3690_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550e3690_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550e3690_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550e3690_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550e3698 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550e36a0 = 0x10c;
    _DAT_1550e36a4 = 1;
    _DAT_1550e36a8 = 0;
    `public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PageIndirectionsParam";
    DAT_1550e367a = Freeze::FindFieldNameLength(L"PageIndirectionsParam");
    _DAT_1550e3658 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1550e3660 = ::TypeBuffer[0x10];
    DAT_1550e3660_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550e3660_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550e3660_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550e3660_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550e3660_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550e3660_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550e3660_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialCacheShadeCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550e3668 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550e3670 = 0x108;
    _DAT_1550e3674 = 1;
    _DAT_1550e3678 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
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

