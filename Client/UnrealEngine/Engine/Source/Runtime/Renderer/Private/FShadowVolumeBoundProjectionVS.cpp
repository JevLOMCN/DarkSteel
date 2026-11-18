// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 1455887e0

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
FShadowVolumeBoundProjectionVS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    pFVar1 = param_1->ParameterMap;
    FStencilingGeometryShaderParameters::Bind
              ((FStencilingGeometryShaderParameters *)(this + 1),pFVar1);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               pFVar1,L"InvReceiverInnerMatrix",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.ArrayNum,pFVar1,
               L"PreShadowToPreViewTranslation",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558ab80

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

FShader * __cdecl FShadowVolumeBoundProjectionVS::ConstructSerializedInstance(void)

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
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1455acba0

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

FGlobalShaderType * __cdecl FShadowVolumeBoundProjectionVS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowVolumeBoundProjectionVS",
                 L"/Engine/Private/ShadowProjectionVertexShader.usf",
                 L"ShadowVolumeBoundProjectionVS",0,1,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionVertexShader.usf");
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
      atexit(`FShadowVolumeBoundProjectionVS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1455b0fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FShadowVolumeBoundProjectionVS::GetTypeLayout(FShadowVolumeBoundProjectionVS *this)

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
    ::TypeBuffer._8_8_ = u_FShadowVolumeBo;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadowVolumeBoundProjectionVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PreShadowToPreViewTranslation";
    DAT_155137a5a = Freeze::FindFieldNameLength(L"PreShadowToPreViewTranslation");
    _DAT_155137a38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155137a40 = ::TypeBuffer[0x10];
    DAT_155137a40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155137a40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155137a40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155137a40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155137a40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155137a40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155137a40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155137a48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155137a50 = 0xf8;
    _DAT_155137a54 = 1;
    _DAT_155137a58 = 0;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InvReceiverInnerMatrix";
    DAT_155137a2a = Freeze::FindFieldNameLength(L"InvReceiverInnerMatrix");
    _DAT_155137a08 = FShaderParameter::StaticGetTypeLayout();
    DAT_155137a10 = ::TypeBuffer[0x10];
    DAT_155137a10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155137a10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155137a10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155137a10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155137a10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155137a10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155137a10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155137a18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155137a20 = 0xf2;
    _DAT_155137a24 = 1;
    _DAT_155137a28 = 0;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilingGeometryParameters";
    DAT_1551379fa = Freeze::FindFieldNameLength(L"StencilingGeometryParameters");
    _DAT_1551379d8 = FStencilingGeometryShaderParameters::StaticGetTypeLayout();
    DAT_1551379e0 = ::TypeBuffer[0x10];
    DAT_1551379e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551379e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551379e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551379e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551379e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551379e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551379e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1551379e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551379f0 = 0xe0;
    _DAT_1551379f4 = 1;
    _DAT_1551379f8 = 0;
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

// InternalDestroy @ 1455b7700

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
FShadowVolumeBoundProjectionVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// SetParameters @ 1455d3ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FShadowVolumeBoundProjectionVS::SetParameters
          (FShadowVolumeBoundProjectionVS *this,FRHIBatchedShaderParameters *param_1,
          FSceneView *param_2,FProjectedShadowInfo *param_3,
          EShadowProjectionVertexShaderFlags param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 local_48 [64];
  
  if (param_3->bWholeSceneShadow != 0) {
    uVar7 = param_3->LightSceneInfo->Proxy->LightType;
    if ((uVar7 == '\x01') || (uVar7 == '\x03')) {
      FStencilingGeometryShaderParameters::Set
                (&this->StencilingGeometryParameters,param_1,param_2,param_3->LightSceneInfo);
      goto LAB_1455d3b52;
    }
  }
  local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_48._8_8_ = _UNK_150689648;
  FStencilingGeometryShaderParameters::Set
            (&this->StencilingGeometryParameters,param_1,(TVector4<float> *)local_48);
LAB_1455d3b52:
  uVar9 = (uint)(this->InvReceiverInnerMatrix).NumBytes;
  if ((param_4 & DrawingFrustum) == None) {
    if (0x40 < uVar9) {
      uVar9 = 0x40;
    }
    if (uVar9 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InvReceiverInnerMatrix).BufferIndex,
                 (uint)(this->InvReceiverInnerMatrix).BaseIndex,uVar9,
                 &UE::Math::TMatrix<float>::Identity);
    }
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
  }
  else {
    dVar1 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
    dVar2 = (param_3->PreShadowTranslation).field0_0x0._s_0.X;
    if (0x40 < uVar9) {
      uVar9 = 0x40;
    }
    dVar3 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
    dVar4 = (param_2->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
    dVar5 = (param_3->PreShadowTranslation).field0_0x0._s_0.Y;
    dVar6 = (param_3->PreShadowTranslation).field0_0x0._s_0.Z;
    if (uVar9 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InvReceiverInnerMatrix).BufferIndex,
                 (uint)(this->InvReceiverInnerMatrix).BaseIndex,uVar9,
                 &param_3->InvReceiverInnerMatrix);
    }
    local_48._12_4_ = 0;
    local_48._8_4_ = (float)(dVar4 - dVar6);
    local_48._4_4_ = (float)(dVar3 - dVar5);
    local_48._0_4_ = (float)(dVar1 - dVar2);
  }
  uVar8 = (this->PreShadowToPreViewTranslation).NumBytes;
  uVar9 = (uint)uVar8;
  if (0x10 < uVar8) {
    uVar9 = 0x10;
  }
  if (uVar9 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PreShadowToPreViewTranslation).BufferIndex,
               (uint)(this->PreShadowToPreViewTranslation).BaseIndex,uVar9,local_48);
  }
  return;
}

// ShouldCompilePermutationImpl @ 1455da310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FShadowVolumeBoundProjectionVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 1455daa80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FShadowVolumeBoundProjectionVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1455e70f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShadowVolumeBoundProjectionVS::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FShadowVolumeBo;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShadowVolumeBoundProjectionVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PreShadowToPreViewTranslation";
    DAT_155137a5a = Freeze::FindFieldNameLength(L"PreShadowToPreViewTranslation");
    _DAT_155137a38 = FShaderParameter::StaticGetTypeLayout();
    DAT_155137a40 = ::TypeBuffer[0x10];
    DAT_155137a40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155137a40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155137a40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155137a40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155137a40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155137a40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155137a40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155137a48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155137a50 = 0xf8;
    _DAT_155137a54 = 1;
    _DAT_155137a58 = 0;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InvReceiverInnerMatrix";
    DAT_155137a2a = Freeze::FindFieldNameLength(L"InvReceiverInnerMatrix");
    _DAT_155137a08 = FShaderParameter::StaticGetTypeLayout();
    DAT_155137a10 = ::TypeBuffer[0x10];
    DAT_155137a10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155137a10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155137a10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155137a10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155137a10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155137a10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155137a10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155137a18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155137a20 = 0xf2;
    _DAT_155137a24 = 1;
    _DAT_155137a28 = 0;
    `public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilingGeometryParameters";
    DAT_1551379fa = Freeze::FindFieldNameLength(L"StencilingGeometryParameters");
    _DAT_1551379d8 = FStencilingGeometryShaderParameters::StaticGetTypeLayout();
    DAT_1551379e0 = ::TypeBuffer[0x10];
    DAT_1551379e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551379e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551379e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551379e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551379e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551379e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551379e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShadowVolumeBoundProjectionVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1551379e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551379f0 = 0xe0;
    _DAT_1551379f4 = 1;
    _DAT_1551379f8 = 0;
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

