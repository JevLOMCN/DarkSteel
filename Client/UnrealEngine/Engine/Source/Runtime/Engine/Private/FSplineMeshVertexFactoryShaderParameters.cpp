// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Bind @ 1479b48e0

void __thiscall
FSplineMeshVertexFactoryShaderParameters::Bind
          (FSplineMeshVertexFactoryShaderParameters *this,FShaderParameterMap *param_1)

{
  FShaderParameter::Bind(&this->SplineMeshParams,param_1,L"SplineParams",SPF_Optional);
  return;
}

// GetElementShaderBindings @ 1479c9140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSplineMeshVertexFactoryShaderParameters::GetElementShaderBindings
          (FSplineMeshVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  FVertexBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FStaticShaderPlatform FVar5;
  longlong lVar6;
  FShaderParametersMetadata *pFVar7;
  FHashedName FVar8;
  FShaderUniformBufferParameter *pFVar9;
  FRHIUniformBuffer *pFVar10;
  undefined1 auStackY_138 [32];
  undefined4 local_108;
  ushort local_104;
  FHashedName local_f8;
  FSplineMeshVertexFactoryShaderParameters *local_f0;
  TArrayView<UE::Math::TVector4<float>,int> local_e8;
  FHashedName local_d8 [2];
  TVector4<float>_u_0 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f0 = this;
  if (param_1 == (FSceneInterface *)0x0) {
    if (param_2 == (FSceneView *)0x0) {
      if (param_5 == Num) {
        FVar5.Platform = SP_NumPlatforms;
      }
      else {
        FVar5.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_5];
      }
    }
    else {
      FVar5.Platform = FSceneView::GetShaderPlatform(param_2);
    }
  }
  else {
    FVar5.Platform = FSceneInterface::GetShaderPlatform(param_1);
  }
  bVar3 = UseGPUScene(FVar5,(FGenericStaticFeatureLevel)param_5);
  if (param_7->bUserDataIsColorVertexBuffer != 0) {
    pFVar1 = param_7->UserData;
    if ((pFVar1 == (FVertexBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OverrideColorVertexBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineMeshComponent.cpp"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar6 = (**(code **)(param_6->_padding_ + 0x30))(param_6);
    if (((*(uint *)(lVar6 + 0x38) & 0x4000) == 0) ||
       (bVar4 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5), !bVar4)) {
      FLocalVertexFactory::GetColorOverrideStream((FLocalVertexFactory *)param_6,pFVar1,param_9);
    }
  }
  lVar6 = (**(code **)(param_6->_padding_ + 0x30))(param_6);
  if ((((*(uint *)(lVar6 + 0x38) & 0x4000) != 0) &&
      (bVar4 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5), bVar4)) || (bVar3)) {
    pFVar10 = param_7->VertexFactoryUserData;
    if (pFVar10 == (FRHIUniformBuffer *)0x0) {
      pFVar10 = *(FRHIUniformBuffer **)&param_6[1].PositionStream.ArrayNum;
    }
    pFVar7 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_f8,&pFVar7->ShaderVariableHashedName);
    FVar8.Hash = (ulong64)FHashedName::FHashedName(local_d8,&local_f8);
    pFVar9 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar8);
    if (pFVar9->BaseIndex != 0xffff) {
      if ((pFVar10 == (FRHIUniformBuffer *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x8f,L"Attempted to set null uniform buffer"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar9->BaseIndex == 0xffff) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_8,pFVar10,(uint)pFVar9->BaseIndex);
    }
    if ((bVar3) && (param_5 != ES3_1)) {
      return;
    }
  }
  local_e8.DataPtr = (TVector4<float> *)&local_c8;
  local_c8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_c8._8_8_ = _UNK_150689648;
  local_b8 = ___xmm_3f800000000000000000000000000000;
  uStack_b0 = _UNK_150689648;
  local_a8 = ___xmm_3f800000000000000000000000000000;
  uStack_a0 = _UNK_150689648;
  local_98 = ___xmm_3f800000000000000000000000000000;
  uStack_90 = _UNK_150689648;
  local_88 = ___xmm_3f800000000000000000000000000000;
  uStack_80 = _UNK_150689648;
  local_78 = ___xmm_3f800000000000000000000000000000;
  uStack_70 = _UNK_150689648;
  local_68 = ___xmm_3f800000000000000000000000000000;
  uStack_60 = _UNK_150689648;
  local_e8.ArrayNum = 7;
  PackSplineMeshParams
            ((FSplineMeshShaderParams *)&((param_7->field5_0x30).SplineMeshSceneProxy)->_padding_,
             &local_e8);
  local_108._0_2_ = (local_f0->SplineMeshParams).BufferIndex;
  local_108._2_2_ = (local_f0->SplineMeshParams).BaseIndex;
  local_104 = (local_f0->SplineMeshParams).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[7]>
            (param_8,SUB86(&local_108,0),(TVector4<float> (*) [7])&local_c8);
  return;
}

// GetTypeLayout @ 148741330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FSplineMeshVertexFactoryShaderParameters::GetTypeLayout
          (FSplineMeshVertexFactoryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSplineMeshVert;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSplineMeshVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSplineMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SplineMeshParams";
    DAT_155248fc2 = Freeze::FindFieldNameLength(L"SplineMeshParams");
    _DAT_155248fa0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155248fa8 = ::TypeBuffer[0x10];
    DAT_155248fa8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155248fa8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155248fa8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155248fa8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155248fa8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155248fa8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155248fa8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSplineMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155248fb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155248fb8 = 4;
    _DAT_155248fbc = 1;
    _DAT_155248fc0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

// InternalDestroy @ 14874b450

void __cdecl
FSplineMeshVertexFactoryShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 14875cec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FSplineMeshVertexFactoryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FSplineMeshVert;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FSplineMeshVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FSplineMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SplineMeshParams";
    DAT_155248fc2 = Freeze::FindFieldNameLength(L"SplineMeshParams");
    _DAT_155248fa0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155248fa8 = ::TypeBuffer[0x10];
    DAT_155248fa8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155248fa8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155248fa8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155248fa8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155248fa8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155248fa8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155248fa8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FSplineMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155248fb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155248fb8 = 4;
    _DAT_155248fbc = 1;
    _DAT_155248fc0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

