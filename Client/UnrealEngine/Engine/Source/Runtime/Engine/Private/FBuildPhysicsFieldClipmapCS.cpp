// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FBuildPhysicsFieldClipmapCS @ 14834a1a0

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

FBuildPhysicsFieldClipmapCS * __thiscall
FBuildPhysicsFieldClipmapCS::FBuildPhysicsFieldClipmapCS
          (FBuildPhysicsFieldClipmapCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->NodesParams;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->NodesOffsets).BaseIndex = 0;
  *(undefined8 *)&(this->NodesOffsets).NumResources = 0;
  *(undefined8 *)&(this->FieldClipmap).NumResources = 0;
  *(undefined8 *)&(this->CellsMin).NumResources = 0;
  *(undefined8 *)&(this->ClipmapResolution).BaseIndex = 0;
  *(undefined8 *)&(this->ClipmapDistance).NumBytes = 0;
  (this->ClipmapCount).BufferIndex = 0;
  (this->ClipmapCount).BaseIndex = 0;
  (this->ClipmapCount).NumBytes = 0;
  (this->ClipmapExponent).BufferIndex = 0;
  *(undefined8 *)&(this->ClipmapExponent).BaseIndex = 0;
  *(undefined8 *)&(this->TargetsIndex).NumBytes = 0;
  (this->ValidCount).BufferIndex = 0;
  (this->ValidCount).BaseIndex = 0;
  (this->ValidCount).NumBytes = 0;
  (this->TimeSeconds).BufferIndex = 0;
  *(undefined8 *)&(this->TimeSeconds).BaseIndex = 0;
  *(undefined8 *)&(this->NumCells).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"NodesParams",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->NodesOffsets,param_1->ParameterMap,L"NodesOffsets",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->TargetsOffsets,param_1->ParameterMap,L"TargetsOffsets",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->FieldClipmap,param_1->ParameterMap,L"FieldClipmap",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->CellsOffsets,param_1->ParameterMap,L"CellsOffsets",SPF_Optional);
  FShaderResourceParameter::Bind(&this->CellsMin,param_1->ParameterMap,L"CellsMin",SPF_Optional);
  FShaderResourceParameter::Bind(&this->CellsMax,param_1->ParameterMap,L"CellsMax",SPF_Optional);
  FShaderParameter::Bind
            (&this->ClipmapResolution,param_1->ParameterMap,L"ClipmapResolution",SPF_Optional);
  FShaderParameter::Bind
            (&this->ClipmapDistance,param_1->ParameterMap,L"ClipmapDistance",SPF_Optional);
  FShaderParameter::Bind(&this->ClipmapCenter,param_1->ParameterMap,L"ClipmapCenter",SPF_Optional);
  FShaderParameter::Bind(&this->ClipmapCount,param_1->ParameterMap,L"ClipmapCount",SPF_Optional);
  FShaderParameter::Bind
            (&this->ClipmapExponent,param_1->ParameterMap,L"ClipmapExponent",SPF_Optional);
  FShaderParameter::Bind(&this->TargetsIndex,param_1->ParameterMap,L"TargetsIndex",SPF_Optional);
  FShaderParameter::Bind(&this->ValidTargets,param_1->ParameterMap,L"ValidTargets",SPF_Optional);
  FShaderParameter::Bind(&this->ValidCount,param_1->ParameterMap,L"ValidCount",SPF_Optional);
  FShaderParameter::Bind(&this->TimeSeconds,param_1->ParameterMap,L"TimeSeconds",SPF_Optional);
  FShaderParameter::Bind(&this->NumCells,param_1->ParameterMap,L"NumCells",SPF_Optional);
  FShaderParameter::Bind(&this->TargetCount,param_1->ParameterMap,L"TargetCount",SPF_Optional);
  return this;
}

// FBuildPhysicsFieldClipmapCS @ 14834a480

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

FBuildPhysicsFieldClipmapCS * __thiscall
FBuildPhysicsFieldClipmapCS::FBuildPhysicsFieldClipmapCS(FBuildPhysicsFieldClipmapCS *this)

{
  FShader::FShader((FShader *)this);
  (this->NodesParams).BaseIndex = 0;
  *(undefined8 *)&(this->NodesParams).NumResources = 0;
  *(undefined8 *)&(this->TargetsOffsets).NumResources = 0;
  *(undefined8 *)&(this->CellsOffsets).NumResources = 0;
  *(undefined8 *)&(this->CellsMax).NumResources = 0;
  (this->ClipmapDistance).BufferIndex = 0;
  (this->ClipmapDistance).BaseIndex = 0;
  (this->ClipmapDistance).NumBytes = 0;
  (this->ClipmapCenter).BufferIndex = 0;
  *(undefined8 *)&(this->ClipmapCenter).BaseIndex = 0;
  *(undefined8 *)&(this->ClipmapCount).NumBytes = 0;
  (this->TargetsIndex).BufferIndex = 0;
  (this->TargetsIndex).BaseIndex = 0;
  (this->TargetsIndex).NumBytes = 0;
  (this->ValidTargets).BufferIndex = 0;
  *(undefined8 *)&(this->ValidTargets).BaseIndex = 0;
  *(undefined8 *)&(this->ValidCount).NumBytes = 0;
  (this->NumCells).BufferIndex = 0;
  (this->NumCells).BaseIndex = 0;
  (this->NumCells).NumBytes = 0;
  (this->TargetCount).BufferIndex = 0;
  (this->TargetCount).BaseIndex = 0;
  (this->TargetCount).NumBytes = 0;
  return this;
}

// ConstructCompiledInstance @ 1483683b0

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
FBuildPhysicsFieldClipmapCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FBuildPhysicsFieldClipmapCS *pFVar1;
  
  pFVar1 = ::operator_new(0x140);
  if (pFVar1 != (FBuildPhysicsFieldClipmapCS *)0x0) {
    pFVar1 = FBuildPhysicsFieldClipmapCS(pFVar1,param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1483686b0

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

FShader * __cdecl FBuildPhysicsFieldClipmapCS::ConstructSerializedInstance(void)

{
  FBuildPhysicsFieldClipmapCS *pFVar1;
  
  pFVar1 = ::operator_new(0x140);
  if (pFVar1 != (FBuildPhysicsFieldClipmapCS *)0x0) {
    pFVar1 = FBuildPhysicsFieldClipmapCS(pFVar1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 148388d60

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

FGlobalShaderType * __cdecl FBuildPhysicsFieldClipmapCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FBuildPhysicsFieldClipmapCS",
                 L"/Engine/Private/PhysicsFieldBuilder.usf",L"BuildPhysicsFieldClipmapCS",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x140,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/PhysicsFieldBuilder.usf");
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
      atexit(`FBuildPhysicsFieldClipmapCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14838ae50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FBuildPhysicsFieldClipmapCS::GetTypeLayout(FBuildPhysicsFieldClipmapCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '@';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FBuildPhysicsFi;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FBuildPhysicsFieldClipmapCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<3>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NodesOffsets";
    DAT_155233892 = Freeze::FindFieldNameLength(L"NodesOffsets");
    _DAT_155233870 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233878 = ::TypeBuffer[0x10];
    DAT_155233878_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233878_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233878_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233878_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233878_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233878_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233878_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233880 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233888 = 0xe4;
    _DAT_15523388c = 1;
    _DAT_155233890 = 0;
    `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NodesParams";
    DAT_155233862 = Freeze::FindFieldNameLength(L"NodesParams");
    _DAT_155233840 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233848 = ::TypeBuffer[0x10];
    DAT_155233848_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233848_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233848_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233848_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233848_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233848_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233848_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155233850 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233858 = 0xe0;
    _DAT_15523385c = 1;
    _DAT_155233860 = 0;
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
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// Initialize @ 14838e260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FBuildPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc *param_1)

{
  FBuildPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(param_1);
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapCenter";
  DAT_155233a12 = Freeze::FindFieldNameLength(L"ClipmapCenter");
  _DAT_1552339f0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233a08 = 0x108;
  _DAT_155233a00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233a0c = 1;
  _DAT_155233a10 = 0;
  _DAT_1552339f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapDistance";
  DAT_1552339e2 = Freeze::FindFieldNameLength(L"ClipmapDistance");
  _DAT_1552339c0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552339d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552339d8 = 0x102;
  _DAT_1552339dc = 1;
  _DAT_1552339e0 = 0;
  _DAT_1552339c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapResolution";
  DAT_1552339b2 = Freeze::FindFieldNameLength(L"ClipmapResolution");
  _DAT_155233990 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1552339a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552339a8 = 0xfc;
  _DAT_1552339ac = 1;
  _DAT_1552339b0 = 0;
  _DAT_155233998 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CellsMax";
  DAT_155233982 = Freeze::FindFieldNameLength(L"CellsMax");
  _DAT_155233960 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155233970 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233978 = 0xf8;
  _DAT_15523397c = 1;
  _DAT_155233980 = 0;
  _DAT_155233968 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CellsMin";
  DAT_155233952 = Freeze::FindFieldNameLength(L"CellsMin");
  _DAT_155233930 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155233940 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233948 = 0xf4;
  _DAT_15523394c = 1;
  _DAT_155233950 = 0;
  _DAT_155233938 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CellsOffsets";
  DAT_155233922 = Freeze::FindFieldNameLength(L"CellsOffsets");
  _DAT_155233900 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155233910 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233918 = 0xf0;
  _DAT_15523391c = 1;
  _DAT_155233920 = 0;
  _DAT_155233908 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "FieldClipmap";
  DAT_1552338f2 = Freeze::FindFieldNameLength(L"FieldClipmap");
  _DAT_1552338d0 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1552338e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552338e8 = 0xec;
  _DAT_1552338ec = 1;
  _DAT_1552338f0 = 0;
  _DAT_1552338d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TargetsOffsets";
  DAT_1552338c2 = Freeze::FindFieldNameLength(L"TargetsOffsets");
  _DAT_1552338a0 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_1552338b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552338b8 = 0xe8;
  _DAT_1552338bc = 1;
  _DAT_1552338c0 = 0;
  _DAT_1552338a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 14838e8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FBuildPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<18>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TargetCount";
  DAT_155233b92 = Freeze::FindFieldNameLength(L"TargetCount");
  _DAT_155233b70 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233b88 = 0x138;
  _DAT_155233b80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233b8c = 1;
  _DAT_155233b90 = 0;
  _DAT_155233b78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<18>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<17>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "NumCells";
  DAT_155233b62 = Freeze::FindFieldNameLength(L"NumCells");
  _DAT_155233b40 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233b50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233b58 = 0x132;
  _DAT_155233b5c = 1;
  _DAT_155233b60 = 0;
  _DAT_155233b48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<17>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<16>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TimeSeconds";
  DAT_155233b32 = Freeze::FindFieldNameLength(L"TimeSeconds");
  _DAT_155233b10 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233b20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233b28 = 300;
  _DAT_155233b2c = 1;
  _DAT_155233b30 = 0;
  _DAT_155233b18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<16>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ValidCount";
  DAT_155233b02 = Freeze::FindFieldNameLength(L"ValidCount");
  _DAT_155233ae0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233af0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233af8 = 0x126;
  _DAT_155233afc = 1;
  _DAT_155233b00 = 0;
  _DAT_155233ae8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<15>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ValidTargets";
  DAT_155233ad2 = Freeze::FindFieldNameLength(L"ValidTargets");
  _DAT_155233ab0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233ac0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233ac8 = 0x120;
  _DAT_155233acc = 1;
  _DAT_155233ad0 = 0;
  _DAT_155233ab8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<14>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TargetsIndex";
  DAT_155233aa2 = Freeze::FindFieldNameLength(L"TargetsIndex");
  _DAT_155233a80 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233a90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233a98 = 0x11a;
  _DAT_155233a9c = 1;
  _DAT_155233aa0 = 0;
  _DAT_155233a88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapExponent";
  DAT_155233a72 = Freeze::FindFieldNameLength(L"ClipmapExponent");
  _DAT_155233a50 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233a60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233a68 = 0x114;
  _DAT_155233a6c = 1;
  _DAT_155233a70 = 0;
  _DAT_155233a58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapCount";
  DAT_155233a42 = Freeze::FindFieldNameLength(L"ClipmapCount");
  _DAT_155233a20 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233a30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233a38 = 0x10e;
  _DAT_155233a3c = 1;
  _DAT_155233a40 = 0;
  _DAT_155233a28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 1483914e0

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
FBuildPhysicsFieldClipmapCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x140);
  return;
}

// SetParameters @ 1483a9b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBuildPhysicsFieldClipmapCS::SetParameters
          (FBuildPhysicsFieldClipmapCS *this,FRHIBatchedShaderParameters *param_1,
          FPhysicsFieldResource *param_2,float param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  float local_res20 [2];
  float local_28;
  float local_24;
  float local_20;
  
  if (param_2 != (FPhysicsFieldResource *)0x0) {
    local_res20[0] = param_3;
    SetSRVParameter(param_1,&this->NodesParams,(param_2->NodesParams).SRV.Reference);
    SetSRVParameter(param_1,&this->NodesOffsets,(param_2->NodesOffsets).SRV.Reference);
    SetSRVParameter(param_1,&this->TargetsOffsets,(param_2->TargetsOffsets).SRV.Reference);
    SetUAVParameter(param_1,&this->FieldClipmap,(param_2->ClipmapBuffer).UAV.Reference);
    SetSRVParameter(param_1,&this->CellsOffsets,(param_2->CellsOffsets).SRV.Reference);
    SetSRVParameter(param_1,&this->CellsMin,(param_2->CellsMin).SRV.Reference);
    SetSRVParameter(param_1,&this->CellsMax,(param_2->CellsMax).SRV.Reference);
    uVar1 = (this->ClipmapResolution).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ClipmapResolution).BufferIndex,
                 (uint)(this->ClipmapResolution).BaseIndex,uVar2,
                 &(param_2->FieldInfos).ClipmapResolution);
    }
    uVar1 = (this->ClipmapDistance).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ClipmapDistance).BufferIndex,
                 (uint)(this->ClipmapDistance).BaseIndex,uVar2,
                 &(param_2->FieldInfos).ClipmapDistance);
    }
    uVar1 = (this->ClipmapCount).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ClipmapCount).BufferIndex,(uint)(this->ClipmapCount).BaseIndex
                 ,uVar2,&(param_2->FieldInfos).ClipmapCount);
    }
    uVar1 = (this->ClipmapCenter).NumBytes;
    uVar2 = (uint)uVar1;
    local_28 = (float)(param_2->FieldInfos).ClipmapCenter.field0_0x0._s_0.X;
    if (0xc < uVar1) {
      uVar2 = 0xc;
    }
    local_24 = (float)(param_2->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y;
    local_20 = (float)(param_2->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z;
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ClipmapCenter).BufferIndex,
                 (uint)(this->ClipmapCenter).BaseIndex,uVar2,&local_28);
    }
    uVar1 = (this->ClipmapExponent).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ClipmapExponent).BufferIndex,
                 (uint)(this->ClipmapExponent).BaseIndex,uVar2,
                 &(param_2->FieldInfos).ClipmapExponent);
    }
    uVar1 = (this->ValidTargets).NumBytes;
    uVar2 = (uint)uVar1;
    if (0x200 < uVar1) {
      uVar2 = 0x200;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ValidTargets).BufferIndex,(uint)(this->ValidTargets).BaseIndex
                 ,uVar2,&(param_2->FieldInfos).ValidTargets);
    }
    uVar1 = (this->ValidCount).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->ValidCount).BufferIndex,(uint)(this->ValidCount).BaseIndex,
                 uVar2,&(param_2->FieldInfos).ValidCount);
    }
    uVar1 = (this->TargetsIndex).NumBytes;
    uVar2 = (uint)uVar1;
    if (0x200 < uVar1) {
      uVar2 = 0x200;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->TargetsIndex).BufferIndex,(uint)(this->TargetsIndex).BaseIndex
                 ,uVar2,&(param_2->FieldInfos).PhysicsTargets);
    }
    uVar1 = (this->TimeSeconds).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->TimeSeconds).BufferIndex,(uint)(this->TimeSeconds).BaseIndex,
                 uVar2,local_res20);
    }
    uVar1 = (this->NumCells).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->NumCells).BufferIndex,(uint)(this->NumCells).BaseIndex,uVar2,
                 &param_4);
    }
    uVar1 = (this->TargetCount).NumBytes;
    uVar2 = (uint)uVar1;
    if (4 < uVar1) {
      uVar2 = 4;
    }
    if (uVar2 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->TargetCount).BufferIndex,(uint)(this->TargetCount).BaseIndex,
                 uVar2,&param_2->FieldInfos);
    }
  }
  return;
}

// ShouldCompilePermutationImpl @ 1483ac0e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FBuildPhysicsFieldClipmapCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutationImpl @ 1483ac510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FBuildPhysicsFieldClipmapCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1483aea50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FBuildPhysicsFieldClipmapCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '@';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FBuildPhysicsFi;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FBuildPhysicsFieldClipmapCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<3>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NodesOffsets";
    DAT_155233892 = Freeze::FindFieldNameLength(L"NodesOffsets");
    _DAT_155233870 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233878 = ::TypeBuffer[0x10];
    DAT_155233878_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233878_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233878_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233878_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233878_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233878_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233878_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233880 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233888 = 0xe4;
    _DAT_15523388c = 1;
    _DAT_155233890 = 0;
    `public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NodesParams";
    DAT_155233862 = Freeze::FindFieldNameLength(L"NodesParams");
    _DAT_155233840 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233848 = ::TypeBuffer[0x10];
    DAT_155233848_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233848_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233848_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233848_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233848_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233848_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233848_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FBuildPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155233850 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233858 = 0xe0;
    _DAT_15523385c = 1;
    _DAT_155233860 = 0;
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
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

