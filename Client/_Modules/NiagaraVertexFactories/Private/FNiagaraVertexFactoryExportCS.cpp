// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 13

// FNiagaraVertexFactoryExportCS @ 148dcd710

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

FNiagaraVertexFactoryExportCS * __thiscall
FNiagaraVertexFactoryExportCS::FNiagaraVertexFactoryExportCS
          (FNiagaraVertexFactoryExportCS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParametersMetadata *pFVar1;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->IsIndirectDraw).BufferIndex = 0;
  (this->IsIndirectDraw).BaseIndex = 0;
  (this->IsIndirectDraw).NumBytes = 0;
  (this->NumInstances).BufferIndex = 0;
  *(undefined8 *)&(this->NumInstances).BaseIndex = 0;
  *(undefined8 *)&(this->NumVerticesPerInstance).NumBytes = 0;
  (this->SectionInfoOutputOffset).BufferIndex = 0;
  (this->SectionInfoOutputOffset).BaseIndex = 0;
  (this->SectionInfoOutputOffset).NumBytes = 0;
  (this->VertexStride).BufferIndex = 0;
  *(undefined8 *)&(this->VertexStride).BaseIndex = 0;
  *(undefined8 *)&(this->VertexPositionOffset).NumBytes = 0;
  (this->VertexTangentBasisOffset).BufferIndex = 0;
  (this->VertexTangentBasisOffset).BaseIndex = 0;
  (this->VertexTangentBasisOffset).NumBytes = 0;
  (this->VertexTexCoordOffset).BufferIndex = 0;
  *(undefined8 *)&(this->VertexTexCoordOffset).BaseIndex = 0;
  *(undefined8 *)&(this->VertexTexCoordNum).NumBytes = 0;
  (this->RWVertexData).BaseIndex = 0;
  (this->RWVertexData).NumResources = '\0';
  (this->RWVertexData).Type = LooseData;
  pFVar1 = FSceneTextureUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,
             (FShaderParameterMap *)param_1->_padding_,pFVar1->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            (&this->IsIndirectDraw,(FShaderParameterMap *)param_1->_padding_,L"IsIndirectDraw",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->NumInstances,(FShaderParameterMap *)param_1->_padding_,L"NumInstances",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->NumVerticesPerInstance,(FShaderParameterMap *)param_1->_padding_,
             L"NumVerticesPerInstance",SPF_Optional);
  FShaderParameter::Bind
            (&this->bApplyWPO,(FShaderParameterMap *)param_1->_padding_,L"bApplyWPO",SPF_Optional);
  FShaderParameter::Bind
            (&this->SectionInfoOutputOffset,(FShaderParameterMap *)param_1->_padding_,
             L"SectionInfoOutputOffset",SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexStride,(FShaderParameterMap *)param_1->_padding_,L"VertexStride",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexPositionOffset,(FShaderParameterMap *)param_1->_padding_,
             L"VertexPositionOffset",SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexColorOffset,(FShaderParameterMap *)param_1->_padding_,L"VertexColorOffset"
             ,SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexTangentBasisOffset,(FShaderParameterMap *)param_1->_padding_,
             L"VertexTangentBasisOffset",SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexTexCoordOffset,(FShaderParameterMap *)param_1->_padding_,
             L"VertexTexCoordOffset",SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexTexCoordNum,(FShaderParameterMap *)param_1->_padding_,L"VertexTexCoordNum"
             ,SPF_Optional);
  FShaderParameter::Bind
            (&this->VertexOutputOffset,(FShaderParameterMap *)param_1->_padding_,
             L"VertexOutputOffset",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->RWVertexData,(FShaderParameterMap *)param_1->_padding_,L"RWVertexData",
             SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 148dcde80

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
FNiagaraVertexFactoryExportCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FNiagaraVertexFactoryExportCS *pFVar1;
  
  pFVar1 = ::operator_new(0x158);
  if (pFVar1 != (FNiagaraVertexFactoryExportCS *)0x0) {
    pFVar1 = FNiagaraVertexFactoryExportCS(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 148dce0a0

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

FShader * __cdecl FNiagaraVertexFactoryExportCS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x158);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0x158);
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 148dcf4e0

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

FMeshMaterialShaderType * __cdecl FNiagaraVertexFactoryExportCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"FNiagaraVertexFactoryExportCS",
                 L"/Plugin/FX/Niagara/Private/NiagaraVertexFactoryExport.usf",
                 L"VertexFactoryExportCS",5,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0x158,
                 (FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Plugin/FX/Niagara/Private/NiagaraVertexFactoryExport.usf");
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
      atexit(`FNiagaraVertexFactoryExportCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 148dd06f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FNiagaraVertexFactoryExportCS::GetTypeLayout(FNiagaraVertexFactoryExportCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'X';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraVertexF;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraVertexFactoryExportCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<6>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SectionInfoOutputOffset";
    DAT_155265c1a = Freeze::FindFieldNameLength(L"SectionInfoOutputOffset");
    _DAT_155265bf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265c00 = ::TypeBuffer[0x10];
    DAT_155265c00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265c00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265c00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265c00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265c00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265c00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265c00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265c08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265c10 = 0x120;
    _DAT_155265c14 = 1;
    _DAT_155265c18 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bApplyWPO";
    DAT_155265bea = Freeze::FindFieldNameLength(L"bApplyWPO");
    _DAT_155265bc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265bd0 = ::TypeBuffer[0x10];
    DAT_155265bd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265bd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265bd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265bd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265bd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265bd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265bd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265bd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265be0 = 0x11a;
    _DAT_155265be4 = 1;
    _DAT_155265be8 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVerticesPerInstance";
    DAT_155265bba = Freeze::FindFieldNameLength(L"NumVerticesPerInstance");
    _DAT_155265b98 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265ba0 = ::TypeBuffer[0x10];
    DAT_155265ba0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265ba0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265ba0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265ba0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265ba0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265ba0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265ba0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265ba8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265bb0 = 0x114;
    _DAT_155265bb4 = 1;
    _DAT_155265bb8 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumInstances";
    DAT_155265b8a = Freeze::FindFieldNameLength(L"NumInstances");
    _DAT_155265b68 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265b70 = ::TypeBuffer[0x10];
    DAT_155265b70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265b70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265b70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265b70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265b70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265b70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265b70_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155265b78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265b80 = 0x10e;
    _DAT_155265b84 = 1;
    _DAT_155265b88 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IsIndirectDraw";
    DAT_155265b5a = Freeze::FindFieldNameLength(L"IsIndirectDraw");
    _DAT_155265b38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265b40 = ::TypeBuffer[0x10];
    DAT_155265b40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265b40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265b40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265b40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265b40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265b40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265b40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155265b48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265b50 = 0x108;
    _DAT_155265b54 = 1;
    _DAT_155265b58 = 0;
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

// Initialize @ 148dd1570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraVertexFactoryExportCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "RWVertexData";
  DAT_155265d9a = Freeze::FindFieldNameLength(L"RWVertexData");
  _DAT_155265d78 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_155265d90 = 0x150;
  _DAT_155265d88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265d94 = 1;
  _DAT_155265d98 = 0;
  _DAT_155265d80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<13>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexOutputOffset";
  DAT_155265d6a = Freeze::FindFieldNameLength(L"VertexOutputOffset");
  _DAT_155265d48 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265d58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265d60 = 0x14a;
  _DAT_155265d64 = 1;
  _DAT_155265d68 = 0;
  _DAT_155265d50 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexTexCoordNum";
  DAT_155265d3a = Freeze::FindFieldNameLength(L"VertexTexCoordNum");
  _DAT_155265d18 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265d28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265d30 = 0x144;
  _DAT_155265d34 = 1;
  _DAT_155265d38 = 0;
  _DAT_155265d20 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexTexCoordOffset";
  DAT_155265d0a = Freeze::FindFieldNameLength(L"VertexTexCoordOffset");
  _DAT_155265ce8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265cf8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265d00 = 0x13e;
  _DAT_155265d04 = 1;
  _DAT_155265d08 = 0;
  _DAT_155265cf0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexTangentBasisOffset";
  DAT_155265cda = Freeze::FindFieldNameLength(L"VertexTangentBasisOffset");
  _DAT_155265cb8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265cc8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265cd0 = 0x138;
  _DAT_155265cd4 = 1;
  _DAT_155265cd8 = 0;
  _DAT_155265cc0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexColorOffset";
  DAT_155265caa = Freeze::FindFieldNameLength(L"VertexColorOffset");
  _DAT_155265c88 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265c98 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265ca0 = 0x132;
  _DAT_155265ca4 = 1;
  _DAT_155265ca8 = 0;
  _DAT_155265c90 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexPositionOffset";
  DAT_155265c7a = Freeze::FindFieldNameLength(L"VertexPositionOffset");
  _DAT_155265c58 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265c68 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265c70 = 300;
  _DAT_155265c74 = 1;
  _DAT_155265c78 = 0;
  _DAT_155265c60 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VertexStride";
  DAT_155265c4a = Freeze::FindFieldNameLength(L"VertexStride");
  _DAT_155265c28 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155265c38 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155265c40 = 0x126;
  _DAT_155265c44 = 1;
  _DAT_155265c48 = 0;
  _DAT_155265c30 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 148dd1aa0

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
FNiagaraVertexFactoryExportCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x158);
  return;
}

// ModifyCompilationEnvironment @ 148dd2070

void __cdecl
FNiagaraVertexFactoryExportCS::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"THREAD_GROUP_SIZE",0x40);
  FShaderCompilerEnvironment::SetDefine(param_2,L"WITH_NIAGARA_VERTEX_FACTORY_EXPORT",1);
  return;
}

// ShouldCompilePermutation @ 148dd2650

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
FNiagaraVertexFactoryExportCS::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  int iVar1;
  FVertexFactoryType *pFVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FVertexFactoryType *pFVar6;
  FHashedName local_res10;
  FHashedName local_res18 [2];
  
  pTVar3 = CVarNiagarVertexFactoryExportEnabledMode.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  if ((iVar1 != 2) && ((iVar1 != 1 || ((param_1->_padding_ & 1) == 0)))) {
    return false;
  }
  pFVar2 = param_1->VertexFactoryType;
  FHashedName::FHashedName(&local_res10,L"FNiagaraRibbonVertexFactory");
  pFVar6 = FindVertexFactoryType(&local_res10);
  if (pFVar2 != pFVar6) {
    FHashedName::FHashedName(local_res18,L"FNiagaraSpriteVertexFactory");
    pFVar6 = FindVertexFactoryType(local_res18);
    if (pFVar2 != pFVar6) {
      return false;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 148dd28b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

bool __cdecl
FNiagaraVertexFactoryExportCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  int iVar1;
  FVertexFactoryType *pFVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FVertexFactoryType *pFVar6;
  FHashedName local_res10;
  FHashedName local_res18 [2];
  
  pTVar3 = CVarNiagarVertexFactoryExportEnabledMode.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  if ((iVar1 != 2) && ((iVar1 != 1 || ((param_1->Flags & HasEditorOnlyData) == None)))) {
    return false;
  }
  pFVar2 = *(FVertexFactoryType **)&param_1[7].PermutationId;
  FHashedName::FHashedName(&local_res10,L"FNiagaraRibbonVertexFactory");
  pFVar6 = FindVertexFactoryType(&local_res10);
  if (pFVar2 != pFVar6) {
    FHashedName::FHashedName(local_res18,L"FNiagaraSpriteVertexFactory");
    pFVar6 = FindVertexFactoryType(local_res18);
    if (pFVar2 != pFVar6) {
      return false;
    }
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 148dd29c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FNiagaraVertexFactoryExportCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 148dd3990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FNiagaraVertexFactoryExportCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'X';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraVertexF;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraVertexFactoryExportCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<6>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SectionInfoOutputOffset";
    DAT_155265c1a = Freeze::FindFieldNameLength(L"SectionInfoOutputOffset");
    _DAT_155265bf8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265c00 = ::TypeBuffer[0x10];
    DAT_155265c00_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265c00_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265c00_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265c00_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265c00_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265c00_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265c00_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265c08 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265c10 = 0x120;
    _DAT_155265c14 = 1;
    _DAT_155265c18 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bApplyWPO";
    DAT_155265bea = Freeze::FindFieldNameLength(L"bApplyWPO");
    _DAT_155265bc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265bd0 = ::TypeBuffer[0x10];
    DAT_155265bd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265bd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265bd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265bd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265bd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265bd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265bd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265bd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265be0 = 0x11a;
    _DAT_155265be4 = 1;
    _DAT_155265be8 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVerticesPerInstance";
    DAT_155265bba = Freeze::FindFieldNameLength(L"NumVerticesPerInstance");
    _DAT_155265b98 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265ba0 = ::TypeBuffer[0x10];
    DAT_155265ba0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265ba0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265ba0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265ba0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265ba0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265ba0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265ba0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155265ba8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265bb0 = 0x114;
    _DAT_155265bb4 = 1;
    _DAT_155265bb8 = 0;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumInstances";
    DAT_155265b8a = Freeze::FindFieldNameLength(L"NumInstances");
    _DAT_155265b68 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265b70 = ::TypeBuffer[0x10];
    DAT_155265b70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265b70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265b70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265b70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265b70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265b70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265b70_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155265b78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265b80 = 0x10e;
    _DAT_155265b84 = 1;
    _DAT_155265b88 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    `public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IsIndirectDraw";
    DAT_155265b5a = Freeze::FindFieldNameLength(L"IsIndirectDraw");
    _DAT_155265b38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155265b40 = ::TypeBuffer[0x10];
    DAT_155265b40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155265b40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155265b40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155265b40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155265b40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155265b40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155265b40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraVertexFactoryExportCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155265b48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155265b50 = 0x108;
    _DAT_155265b54 = 1;
    _DAT_155265b58 = 0;
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

// SupportsVertexFactoryType @ 148dd3e40

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

bool __cdecl FNiagaraVertexFactoryExportCS::SupportsVertexFactoryType(FVertexFactoryType *param_1)

{
  FVertexFactoryType *pFVar1;
  FHashedName local_res8;
  FHashedName local_res10 [3];
  
  FHashedName::FHashedName(&local_res8,L"FNiagaraRibbonVertexFactory");
  pFVar1 = FindVertexFactoryType(&local_res8);
  if (param_1 != pFVar1) {
    FHashedName::FHashedName(local_res10,L"FNiagaraSpriteVertexFactory");
    pFVar1 = FindVertexFactoryType(local_res10);
    if (param_1 != pFVar1) {
      return false;
    }
  }
  return true;
}

