// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FRayTracingDynamicGeometryConverterCS @ 1452fe4a0

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

FRayTracingDynamicGeometryConverterCS * __thiscall
FRayTracingDynamicGeometryConverterCS::FRayTracingDynamicGeometryConverterCS
          (FRayTracingDynamicGeometryConverterCS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParametersMetadata *pFVar1;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  (this->RWVertexPositions).BaseIndex = 0;
  *(undefined8 *)&(this->RWVertexPositions).NumResources = 0;
  (this->MaxNumThreads).BufferIndex = 0;
  (this->MaxNumThreads).BaseIndex = 0;
  (this->MaxNumThreads).NumBytes = 0;
  (this->NumVertices).BufferIndex = 0;
  *(undefined8 *)&(this->NumVertices).BaseIndex = 0;
  *(undefined8 *)&(this->MinVertexIndex).NumBytes = 0;
  (this->bApplyWorldPositionOffset).BufferIndex = 0;
  (this->bApplyWorldPositionOffset).BaseIndex = 0;
  (this->bApplyWorldPositionOffset).NumBytes = 0;
  (this->OutputVertexBaseIndex).BufferIndex = 0;
  *(undefined8 *)&(this->OutputVertexBaseIndex).BaseIndex = 0;
  *(undefined8 *)&(this->InstanceId).NumBytes = 0;
  (this->IndexBuffer).BaseIndex = 0;
  *(undefined8 *)&(this->IndexBuffer).NumResources = 0;
  pFVar1 = FSceneTextureUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->_padding_,
             (FShaderParameterMap *)param_1->_padding_,pFVar1->ShaderVariableName,SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->RWVertexPositions,(FShaderParameterMap *)param_1->_padding_,L"RWVertexPositions"
             ,SPF_Optional);
  FShaderParameter::Bind
            (&this->UsingIndirectDraw,(FShaderParameterMap *)param_1->_padding_,L"UsingIndirectDraw"
             ,SPF_Optional);
  FShaderParameter::Bind
            (&this->NumVertices,(FShaderParameterMap *)param_1->_padding_,L"NumVertices",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->MaxNumThreads,(FShaderParameterMap *)param_1->_padding_,L"MaxNumThreads",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->MinVertexIndex,(FShaderParameterMap *)param_1->_padding_,L"MinVertexIndex",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->PrimitiveId,(FShaderParameterMap *)param_1->_padding_,L"PrimitiveId",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->OutputVertexBaseIndex,(FShaderParameterMap *)param_1->_padding_,
             L"OutputVertexBaseIndex",SPF_Optional);
  FShaderParameter::Bind
            (&this->bApplyWorldPositionOffset,(FShaderParameterMap *)param_1->_padding_,
             L"bApplyWorldPositionOffset",SPF_Optional);
  FShaderParameter::Bind
            (&this->InstanceId,(FShaderParameterMap *)param_1->_padding_,L"InstanceId",SPF_Optional)
  ;
  FShaderParameter::Bind
            (&this->WorldToInstance,(FShaderParameterMap *)param_1->_padding_,L"WorldToInstance",
             SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->IndexBuffer,(FShaderParameterMap *)param_1->_padding_,L"IndexBuffer",
             SPF_Optional);
  FShaderParameter::Bind
            (&this->IndexBufferOffset,(FShaderParameterMap *)param_1->_padding_,L"IndexBufferOffset"
             ,SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 1453147a0

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
FRayTracingDynamicGeometryConverterCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FRayTracingDynamicGeometryConverterCS *pFVar1;
  
  pFVar1 = ::operator_new(0x150);
  if (pFVar1 != (FRayTracingDynamicGeometryConverterCS *)0x0) {
    pFVar1 = FRayTracingDynamicGeometryConverterCS(pFVar1,(CompiledShaderInitializerType *)param_1);
    return (FShader *)pFVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145315220

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

FShader * __cdecl FRayTracingDynamicGeometryConverterCS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x150);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0x150);
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 14532b1b0

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

FMeshMaterialShaderType * __cdecl FRayTracingDynamicGeometryConverterCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FRayTracingDynamicGeometryConverterCS",
                 L"/Engine/Private/RayTracing/RayTracingDynamicMesh.usf",
                 L"RayTracingDynamicGeometryConverterCS",5,2,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/RayTracing/RayTracingDynamicMesh.usf");
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
      atexit(`FRayTracingDynamicGeometryConverterCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14532e4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRayTracingDynamicGeometryConverterCS::GetTypeLayout(FRayTracingDynamicGeometryConverterCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FRayTracingDyna;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingDynamicGeometryConverterCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<5>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVertices";
    DAT_15511f50a = Freeze::FindFieldNameLength(L"NumVertices");
    _DAT_15511f4e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f4f0 = ::TypeBuffer[0x10];
    DAT_15511f4f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f4f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f4f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f4f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f4f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f4f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f4f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f4f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f500 = 0x118;
    _DAT_15511f504 = 1;
    _DAT_15511f508 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaxNumThreads";
    DAT_15511f4da = Freeze::FindFieldNameLength(L"MaxNumThreads");
    _DAT_15511f4b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f4c0 = ::TypeBuffer[0x10];
    DAT_15511f4c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f4c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f4c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f4c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f4c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f4c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f4c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f4c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f4d0 = 0x112;
    _DAT_15511f4d4 = 1;
    _DAT_15511f4d8 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UsingIndirectDraw";
    DAT_15511f4aa = Freeze::FindFieldNameLength(L"UsingIndirectDraw");
    _DAT_15511f488 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f490 = ::TypeBuffer[0x10];
    DAT_15511f490_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f490_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f490_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f490_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f490_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f490_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f490_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f498 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f4a0 = 0x10c;
    _DAT_15511f4a4 = 1;
    _DAT_15511f4a8 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RWVertexPositions";
    DAT_15511f47a = Freeze::FindFieldNameLength(L"RWVertexPositions");
    _DAT_15511f458 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15511f460 = ::TypeBuffer[0x10];
    DAT_15511f460_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f460_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f460_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f460_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f460_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f460_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f460_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15511f468 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f470 = 0x108;
    _DAT_15511f474 = 1;
    _DAT_15511f478 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
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

// Initialize @ 14532ecd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRayTracingDynamicGeometryConverterCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "IndexBufferOffset";
  DAT_15511f68a = Freeze::FindFieldNameLength(L"IndexBufferOffset");
  _DAT_15511f668 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f680 = 0x146;
  _DAT_15511f678 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f684 = 1;
  _DAT_15511f688 = 0;
  _DAT_15511f670 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<12>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "IndexBuffer";
  DAT_15511f65a = Freeze::FindFieldNameLength(L"IndexBuffer");
  _DAT_15511f638 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15511f648 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f650 = 0x142;
  _DAT_15511f654 = 1;
  _DAT_15511f658 = 0;
  _DAT_15511f640 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "WorldToInstance";
  DAT_15511f62a = Freeze::FindFieldNameLength(L"WorldToInstance");
  _DAT_15511f608 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f618 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f620 = 0x13c;
  _DAT_15511f624 = 1;
  _DAT_15511f628 = 0;
  _DAT_15511f610 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "InstanceId";
  DAT_15511f5fa = Freeze::FindFieldNameLength(L"InstanceId");
  _DAT_15511f5d8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f5e8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f5f0 = 0x136;
  _DAT_15511f5f4 = 1;
  _DAT_15511f5f8 = 0;
  _DAT_15511f5e0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "OutputVertexBaseIndex";
  DAT_15511f5ca = Freeze::FindFieldNameLength(L"OutputVertexBaseIndex");
  _DAT_15511f5a8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f5b8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f5c0 = 0x130;
  _DAT_15511f5c4 = 1;
  _DAT_15511f5c8 = 0;
  _DAT_15511f5b0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bApplyWorldPositionOffset";
  DAT_15511f59a = Freeze::FindFieldNameLength(L"bApplyWorldPositionOffset");
  _DAT_15511f578 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f588 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f590 = 0x12a;
  _DAT_15511f594 = 1;
  _DAT_15511f598 = 0;
  _DAT_15511f580 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PrimitiveId";
  DAT_15511f56a = Freeze::FindFieldNameLength(L"PrimitiveId");
  _DAT_15511f548 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f558 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f560 = 0x124;
  _DAT_15511f564 = 1;
  _DAT_15511f568 = 0;
  _DAT_15511f550 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MinVertexIndex";
  DAT_15511f53a = Freeze::FindFieldNameLength(L"MinVertexIndex");
  _DAT_15511f518 = FShaderParameter::StaticGetTypeLayout();
  _DAT_15511f528 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15511f530 = 0x11e;
  _DAT_15511f534 = 1;
  _DAT_15511f538 = 0;
  _DAT_15511f520 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 14532f970

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
FRayTracingDynamicGeometryConverterCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// ShouldCompilePermutationImpl @ 14533ce10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRayTracingDynamicGeometryConverterCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  uVar1 = param_1->PermutationId;
  iVar5 = (int)uVar1 % 2;
  if ((iVar5 != 0) && (iVar5 != 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((int)uVar1 / 2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (1 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = IsRayTracingEnabledForProject(param_1->Platform);
  if ((bVar3) && ((*(uint *)(*(longlong *)&param_1[7].PermutationId + 0x38) & 0x400) != 0)) {
    if (iVar5 == 1) {
      bVar3 = *(int *)(param_1 + 2) == 1;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// ShouldPrecachePermutationImpl @ 14533d460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRayTracingDynamicGeometryConverterCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 14533f9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRayTracingDynamicGeometryConverterCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FRayTracingDyna;
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
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRayTracingDynamicGeometryConverterCS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<5>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumVertices";
    DAT_15511f50a = Freeze::FindFieldNameLength(L"NumVertices");
    _DAT_15511f4e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f4f0 = ::TypeBuffer[0x10];
    DAT_15511f4f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f4f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f4f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f4f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f4f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f4f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f4f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f4f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f500 = 0x118;
    _DAT_15511f504 = 1;
    _DAT_15511f508 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaxNumThreads";
    DAT_15511f4da = Freeze::FindFieldNameLength(L"MaxNumThreads");
    _DAT_15511f4b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f4c0 = ::TypeBuffer[0x10];
    DAT_15511f4c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f4c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f4c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f4c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f4c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f4c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f4c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f4c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f4d0 = 0x112;
    _DAT_15511f4d4 = 1;
    _DAT_15511f4d8 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UsingIndirectDraw";
    DAT_15511f4aa = Freeze::FindFieldNameLength(L"UsingIndirectDraw");
    _DAT_15511f488 = FShaderParameter::StaticGetTypeLayout();
    DAT_15511f490 = ::TypeBuffer[0x10];
    DAT_15511f490_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f490_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f490_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f490_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f490_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f490_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f490_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15511f498 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f4a0 = 0x10c;
    _DAT_15511f4a4 = 1;
    _DAT_15511f4a8 = 0;
    `public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "RWVertexPositions";
    DAT_15511f47a = Freeze::FindFieldNameLength(L"RWVertexPositions");
    _DAT_15511f458 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15511f460 = ::TypeBuffer[0x10];
    DAT_15511f460_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15511f460_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15511f460_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15511f460_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15511f460_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15511f460_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15511f460_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15511f468 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15511f470 = 0x108;
    _DAT_15511f474 = 1;
    _DAT_15511f478 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRayTracingDynamicGeometryConverterCS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
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

