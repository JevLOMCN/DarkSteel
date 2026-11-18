// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FResetPhysicsFieldClipmapCS @ 14834bcb0

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

FResetPhysicsFieldClipmapCS * __thiscall
FResetPhysicsFieldClipmapCS::FResetPhysicsFieldClipmapCS
          (FResetPhysicsFieldClipmapCS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->FieldClipmap;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->NumCells).BufferIndex = 0;
  (this->NumCells).BaseIndex = 0;
  (this->NumCells).NumBytes = 0;
  (this->CellsOffsets).BaseIndex = 0;
  *(undefined8 *)&(this->CellsOffsets).NumResources = 0;
  *(undefined8 *)&(this->CellsMax).NumResources = 0;
  (this->ClipmapCount).BufferIndex = 0;
  (this->ClipmapCount).BaseIndex = 0;
  (this->ClipmapCount).NumBytes = 0;
  (this->TargetsIndex).BufferIndex = 0;
  *(undefined8 *)&(this->TargetsIndex).BaseIndex = 0;
  *(undefined8 *)&(this->ValidTargets).NumBytes = 0;
  (this->TargetCount).BufferIndex = 0;
  (this->TargetCount).BaseIndex = 0;
  (this->TargetCount).NumBytes = 0;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"FieldClipmap",SPF_Optional);
  FShaderParameter::Bind(&this->NumCells,param_1->ParameterMap,L"NumCells",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->CellsOffsets,param_1->ParameterMap,L"CellsOffsets",SPF_Optional);
  FShaderResourceParameter::Bind(&this->CellsMin,param_1->ParameterMap,L"CellsMin",SPF_Optional);
  FShaderResourceParameter::Bind(&this->CellsMax,param_1->ParameterMap,L"CellsMax",SPF_Optional);
  FShaderParameter::Bind
            (&this->ClipmapResolution,param_1->ParameterMap,L"ClipmapResolution",SPF_Optional);
  FShaderParameter::Bind(&this->ClipmapCount,param_1->ParameterMap,L"ClipmapCount",SPF_Optional);
  FShaderParameter::Bind(&this->TargetsIndex,param_1->ParameterMap,L"TargetsIndex",SPF_Optional);
  FShaderParameter::Bind(&this->ValidTargets,param_1->ParameterMap,L"ValidTargets",SPF_Optional);
  FShaderParameter::Bind(&this->ValidCount,param_1->ParameterMap,L"ValidCount",SPF_Optional);
  FShaderParameter::Bind(&this->TargetCount,param_1->ParameterMap,L"TargetCount",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 148368670

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
FResetPhysicsFieldClipmapCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FResetPhysicsFieldClipmapCS *pFVar1;
  
  pFVar1 = ::operator_new(0x120);
  if (pFVar1 != (FResetPhysicsFieldClipmapCS *)0x0) {
    pFVar1 = FResetPhysicsFieldClipmapCS(pFVar1,param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 148368870

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

FShader * __cdecl FResetPhysicsFieldClipmapCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    *(undefined8 *)&this[1].Bindings.BindlessResourceParameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    *(undefined4 *)&this[1].Bindings.GraphUniformBuffers.AllocatorInstance.field_0x4 = 0;
    *(undefined2 *)&this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1483899b0

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

FGlobalShaderType * __cdecl FResetPhysicsFieldClipmapCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FResetPhysicsFieldClipmapCS",
                 L"/Engine/Private/PhysicsFieldReset.usf",L"ResetPhysicsFieldClipmapCS",5,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/PhysicsFieldReset.usf");
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
      atexit(`FResetPhysicsFieldClipmapCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14838aeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FResetPhysicsFieldClipmapCS::GetTypeLayout(FResetPhysicsFieldClipmapCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResetPhysicsFi;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResetPhysicsFieldClipmapCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CellsOffsets";
    DAT_155233d3a = Freeze::FindFieldNameLength(L"CellsOffsets");
    _DAT_155233d18 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233d20 = ::TypeBuffer[0x10];
    DAT_155233d20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233d20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233d20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233d20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233d20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233d20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233d20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233d28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233d30 = 0xea;
    _DAT_155233d34 = 1;
    _DAT_155233d38 = 0;
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumCells";
    DAT_155233d0a = Freeze::FindFieldNameLength(L"NumCells");
    _DAT_155233ce8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155233cf0 = ::TypeBuffer[0x10];
    DAT_155233cf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233cf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233cf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233cf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233cf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233cf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233cf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233cf8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233d00 = 0xe4;
    _DAT_155233d04 = 1;
    _DAT_155233d08 = 0;
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FieldClipmap";
    DAT_155233cda = Freeze::FindFieldNameLength(L"FieldClipmap");
    _DAT_155233cb8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233cc0 = ::TypeBuffer[0x10];
    DAT_155233cc0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233cc0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233cc0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233cc0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233cc0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233cc0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233cc0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155233cc8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233cd0 = 0xe0;
    _DAT_155233cd4 = 1;
    _DAT_155233cd8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 14838e590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FResetPhysicsFieldClipmapCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TargetCount";
  DAT_155233eba = Freeze::FindFieldNameLength(L"TargetCount");
  _DAT_155233e98 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233eb0 = 0x114;
  _DAT_155233ea8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233eb4 = 1;
  _DAT_155233eb8 = 0;
  _DAT_155233ea0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ValidCount";
  DAT_155233e8a = Freeze::FindFieldNameLength(L"ValidCount");
  _DAT_155233e68 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233e78 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233e80 = 0x10e;
  _DAT_155233e84 = 1;
  _DAT_155233e88 = 0;
  _DAT_155233e70 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ValidTargets";
  DAT_155233e5a = Freeze::FindFieldNameLength(L"ValidTargets");
  _DAT_155233e38 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233e48 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233e50 = 0x108;
  _DAT_155233e54 = 1;
  _DAT_155233e58 = 0;
  _DAT_155233e40 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "TargetsIndex";
  DAT_155233e2a = Freeze::FindFieldNameLength(L"TargetsIndex");
  _DAT_155233e08 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233e18 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233e20 = 0x102;
  _DAT_155233e24 = 1;
  _DAT_155233e28 = 0;
  _DAT_155233e10 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapCount";
  DAT_155233dfa = Freeze::FindFieldNameLength(L"ClipmapCount");
  _DAT_155233dd8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233de8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233df0 = 0xfc;
  _DAT_155233df4 = 1;
  _DAT_155233df8 = 0;
  _DAT_155233de0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ClipmapResolution";
  DAT_155233dca = Freeze::FindFieldNameLength(L"ClipmapResolution");
  _DAT_155233da8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155233db8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233dc0 = 0xf6;
  _DAT_155233dc4 = 1;
  _DAT_155233dc8 = 0;
  _DAT_155233db0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CellsMax";
  DAT_155233d9a = Freeze::FindFieldNameLength(L"CellsMax");
  _DAT_155233d78 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155233d88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233d90 = 0xf2;
  _DAT_155233d94 = 1;
  _DAT_155233d98 = 0;
  _DAT_155233d80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CellsMin";
  DAT_155233d6a = Freeze::FindFieldNameLength(L"CellsMin");
  _DAT_155233d48 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155233d58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155233d60 = 0xee;
  _DAT_155233d64 = 1;
  _DAT_155233d68 = 0;
  _DAT_155233d50 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 148391660

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
FResetPhysicsFieldClipmapCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// SetParameters @ 1483a9ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FResetPhysicsFieldClipmapCS::SetParameters
          (FResetPhysicsFieldClipmapCS *this,FRHIBatchedShaderParameters *param_1,
          FPhysicsFieldResource *param_2,float param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_2 != (FPhysicsFieldResource *)0x0) {
    SetUAVParameter(param_1,&this->FieldClipmap,(param_2->ClipmapBuffer).UAV.Reference);
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

// ShouldCompilePermutationImpl @ 1483ac3c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FResetPhysicsFieldClipmapCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutationImpl @ 1483ac570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FResetPhysicsFieldClipmapCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1483af310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FResetPhysicsFieldClipmapCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FResetPhysicsFi;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FResetPhysicsFieldClipmapCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CellsOffsets";
    DAT_155233d3a = Freeze::FindFieldNameLength(L"CellsOffsets");
    _DAT_155233d18 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233d20 = ::TypeBuffer[0x10];
    DAT_155233d20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233d20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233d20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233d20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233d20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233d20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233d20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233d28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233d30 = 0xea;
    _DAT_155233d34 = 1;
    _DAT_155233d38 = 0;
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumCells";
    DAT_155233d0a = Freeze::FindFieldNameLength(L"NumCells");
    _DAT_155233ce8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155233cf0 = ::TypeBuffer[0x10];
    DAT_155233cf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233cf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233cf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233cf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233cf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233cf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233cf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155233cf8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233d00 = 0xe4;
    _DAT_155233d04 = 1;
    _DAT_155233d08 = 0;
    `public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FieldClipmap";
    DAT_155233cda = Freeze::FindFieldNameLength(L"FieldClipmap");
    _DAT_155233cb8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155233cc0 = ::TypeBuffer[0x10];
    DAT_155233cc0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155233cc0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155233cc0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155233cc0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155233cc0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155233cc0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155233cc0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FResetPhysicsFieldClipmapCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155233cc8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155233cd0 = 0xe0;
    _DAT_155233cd4 = 1;
    _DAT_155233cd8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

