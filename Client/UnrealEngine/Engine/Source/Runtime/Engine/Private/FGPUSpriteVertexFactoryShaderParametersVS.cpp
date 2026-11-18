// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Bind @ 1480feaf0

void __thiscall
FGPUSpriteVertexFactoryShaderParametersVS::Bind
          (FGPUSpriteVertexFactoryShaderParametersVS *this,FShaderParameterMap *param_1)

{
  FShaderResourceParameter::Bind(&this->ParticleIndices,param_1,L"ParticleIndices",SPF_Optional);
  FShaderParameter::Bind(&this->ParticleIndicesOffset,param_1,L"ParticleIndicesOffset",SPF_Optional)
  ;
  FShaderParameter::Bind(&this->TilePageScale,param_1,L"TilePageScale",SPF_Optional);
  FShaderResourceParameter::Bind(&this->PositionTexture,param_1,L"PositionTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->PositionTextureSampler,param_1,L"PositionTextureSampler",SPF_Optional);
  FShaderResourceParameter::Bind(&this->VelocityTexture,param_1,L"VelocityTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->VelocityTextureSampler,param_1,L"VelocityTextureSampler",SPF_Optional);
  FShaderResourceParameter::Bind(&this->AttributesTexture,param_1,L"AttributesTexture",SPF_Optional)
  ;
  FShaderResourceParameter::Bind
            (&this->AttributesTextureSampler,param_1,L"AttributesTextureSampler",SPF_Optional);
  FShaderResourceParameter::Bind(&this->CurveTexture,param_1,L"CurveTexture",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->CurveTextureSampler,param_1,L"CurveTextureSampler",SPF_Optional);
  return;
}

// GetElementShaderBindings @ 148115c80

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSpriteVertexFactoryShaderParametersVS::GetElementShaderBindings
          (FGPUSpriteVertexFactoryShaderParametersVS *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  FRHIUniformBuffer *pFVar1;
  void *pvVar2;
  code *pcVar3;
  TRefCountPtr<FRHISamplerState> TVar4;
  TRefCountPtr<FRHISamplerState> TVar5;
  FVertexFactory *pFVar6;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar7;
  FShaderParametersMetadata *pFVar8;
  FHashedName FVar9;
  FShaderUniformBufferParameter *pFVar10;
  undefined4 *puVar11;
  FRHIShaderResourceView *pFVar12;
  FVertexFactory **ppFVar13;
  undefined4 local_res8;
  ushort local_resc;
  undefined4 local_68;
  ushort local_64;
  undefined4 local_58;
  ushort local_54;
  FHashedName local_48;
  FHashedName local_40;
  FHashedName local_38;
  FHashedName local_30;
  
  pFVar6 = param_6;
  TVar5.Reference =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  TVar4.Reference =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar1 = (FRHIUniformBuffer *)param_6[1]._padding_;
  pFVar8 = FGPUSpriteEmitterUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_48,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_38,&local_48);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
  this_00 = param_8;
  if (pFVar10->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar10->BaseIndex == 0xffff) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,pFVar1,(uint)pFVar10->BaseIndex);
  }
  pFVar1 = (FRHIUniformBuffer *)pFVar6[1]._padding_;
  pFVar8 = FGPUSpriteEmitterDynamicUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_40,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_40);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
  if (pFVar10->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar10->BaseIndex == 0xffff) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,pFVar1,(uint)pFVar10->BaseIndex);
  }
  pvVar2 = param_7->UserData;
  if (pvVar2 == (void *)0x0) {
    pFVar12 = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    if ((FRHIShaderResourceView *)pFVar6[1]._padding_ != (FRHIShaderResourceView *)0x0) {
      pFVar12 = (FRHIShaderResourceView *)pFVar6[1]._padding_;
    }
    FMeshDrawSingleShaderBindings::Add(this_00,this->ParticleIndices,pFVar12);
    local_68._0_2_ = (this->ParticleIndicesOffset).BufferIndex;
    local_68._2_2_ = (this->ParticleIndicesOffset).BaseIndex;
    ppFVar13 = &param_6;
    puVar11 = &local_68;
    local_64 = (this->ParticleIndicesOffset).NumBytes;
    param_6 = (FVertexFactory *)((ulonglong)param_6 & 0xffffffff00000000);
  }
  else {
    FMeshDrawSingleShaderBindings::Add
              (this_00,this->ParticleIndices,*(FRHIShaderResourceView **)((longlong)pvVar2 + 0x10));
    local_res8._0_2_ = (this->ParticleIndicesOffset).BufferIndex;
    local_res8._2_2_ = (this->ParticleIndicesOffset).BaseIndex;
    ppFVar13 = (FVertexFactory **)((longlong)pvVar2 + 8);
    puVar11 = &local_res8;
    local_resc = (this->ParticleIndicesOffset).NumBytes;
  }
  FMeshDrawSingleShaderBindings::Add<int>(this_00,SUB86(puVar11,0),(int *)ppFVar13);
  FMeshDrawSingleShaderBindings::AddTexture
            (this_00,this->PositionTexture,this->PositionTextureSampler,TVar4.Reference,
             *(FRHITexture **)pFVar6[1].Streams.AllocatorInstance.InlineData);
  FMeshDrawSingleShaderBindings::AddTexture
            (this_00,this->VelocityTexture,this->VelocityTextureSampler,TVar4.Reference,
             *(FRHITexture **)(pFVar6[1].Streams.AllocatorInstance.InlineData + 8));
  FMeshDrawSingleShaderBindings::AddTexture
            (this_00,this->AttributesTexture,this->AttributesTextureSampler,TVar4.Reference,
             *(FRHITexture **)(pFVar6[1].Streams.AllocatorInstance.InlineData + 0x10));
  FMeshDrawSingleShaderBindings::AddTexture
            (this_00,this->CurveTexture,this->CurveTextureSampler,TVar5.Reference,
             (FRHITexture *)GParticleCurveTexture._32_8_);
  local_58._0_2_ = (this->TilePageScale).BufferIndex;
  local_58._2_2_ = (this->TilePageScale).BaseIndex;
  local_54 = (this->TilePageScale).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            (this_00,SUB86(&local_58,0),
             (TVector<float> *)(pFVar6[1].Streams.AllocatorInstance.InlineData + 0x24));
  return;
}

// GetTypeLayout @ 14811c540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FGPUSpriteVertexFactoryShaderParametersVS::GetTypeLayout
          (FGPUSpriteVertexFactoryShaderParametersVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '4';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUSpriteVerte;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUSpriteVertexFactoryShaderParametersVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TilePageScale";
    DAT_15522c102 = Freeze::FindFieldNameLength(L"TilePageScale");
    _DAT_15522c0e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522c0e8 = ::TypeBuffer[0x10];
    DAT_15522c0e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c0e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c0e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c0e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c0e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c0e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c0e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522c0f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c0f8 = 0xe;
    _DAT_15522c0fc = 1;
    _DAT_15522c100 = 0;
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParticleIndicesOffset";
    DAT_15522c0d2 = Freeze::FindFieldNameLength(L"ParticleIndicesOffset");
    _DAT_15522c0b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522c0b8 = ::TypeBuffer[0x10];
    DAT_15522c0b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c0b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c0b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c0b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c0b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c0b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c0b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522c0c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c0c8 = 8;
    _DAT_15522c0cc = 1;
    _DAT_15522c0d0 = 0;
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParticleIndices";
    DAT_15522c0a2 = Freeze::FindFieldNameLength(L"ParticleIndices");
    _DAT_15522c080 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522c088 = ::TypeBuffer[0x10];
    DAT_15522c088_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c088_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c088_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c088_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c088_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c088_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c088_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522c090 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c098 = 4;
    _DAT_15522c09c = 1;
    _DAT_15522c0a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

// Initialize @ 1481213d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CurveTextureSampler";
  DAT_15522c282 = Freeze::FindFieldNameLength(L"CurveTextureSampler");
  _DAT_15522c260 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c278 = 0x30;
  _DAT_15522c270 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c27c = 1;
  _DAT_15522c280 = 0;
  _DAT_15522c268 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<11>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "CurveTexture";
  DAT_15522c252 = Freeze::FindFieldNameLength(L"CurveTexture");
  _DAT_15522c230 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c240 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c248 = 0x2c;
  _DAT_15522c24c = 1;
  _DAT_15522c250 = 0;
  _DAT_15522c238 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<10>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "AttributesTextureSampler";
  DAT_15522c222 = Freeze::FindFieldNameLength(L"AttributesTextureSampler");
  _DAT_15522c200 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c210 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c218 = 0x28;
  _DAT_15522c21c = 1;
  _DAT_15522c220 = 0;
  _DAT_15522c208 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "AttributesTexture";
  DAT_15522c1f2 = Freeze::FindFieldNameLength(L"AttributesTexture");
  _DAT_15522c1d0 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c1e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c1e8 = 0x24;
  _DAT_15522c1ec = 1;
  _DAT_15522c1f0 = 0;
  _DAT_15522c1d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VelocityTextureSampler";
  DAT_15522c1c2 = Freeze::FindFieldNameLength(L"VelocityTextureSampler");
  _DAT_15522c1a0 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c1b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c1b8 = 0x20;
  _DAT_15522c1bc = 1;
  _DAT_15522c1c0 = 0;
  _DAT_15522c1a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "VelocityTexture";
  DAT_15522c192 = Freeze::FindFieldNameLength(L"VelocityTexture");
  _DAT_15522c170 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c180 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c188 = 0x1c;
  _DAT_15522c18c = 1;
  _DAT_15522c190 = 0;
  _DAT_15522c178 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PositionTextureSampler";
  DAT_15522c162 = Freeze::FindFieldNameLength(L"PositionTextureSampler");
  _DAT_15522c140 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c150 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c158 = 0x18;
  _DAT_15522c15c = 1;
  _DAT_15522c160 = 0;
  _DAT_15522c148 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PositionTexture";
  DAT_15522c132 = Freeze::FindFieldNameLength(L"PositionTexture");
  _DAT_15522c110 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15522c120 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15522c128 = 0x14;
  _DAT_15522c12c = 1;
  _DAT_15522c130 = 0;
  _DAT_15522c118 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 148123090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGPUSpriteVertexFactoryShaderParametersVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _UNK_1506d61ec;
  uVar3 = _UNK_1506d61e8;
  uVar2 = _UNK_1506d61e4;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x30) = uVar1;
  return;
}

// StaticGetTypeLayout @ 148136ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FGPUSpriteVertexFactoryShaderParametersVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '4';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGPUSpriteVerte;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGPUSpriteVertexFactoryShaderParametersVS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TilePageScale";
    DAT_15522c102 = Freeze::FindFieldNameLength(L"TilePageScale");
    _DAT_15522c0e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522c0e8 = ::TypeBuffer[0x10];
    DAT_15522c0e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c0e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c0e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c0e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c0e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c0e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c0e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522c0f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c0f8 = 0xe;
    _DAT_15522c0fc = 1;
    _DAT_15522c100 = 0;
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParticleIndicesOffset";
    DAT_15522c0d2 = Freeze::FindFieldNameLength(L"ParticleIndicesOffset");
    _DAT_15522c0b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15522c0b8 = ::TypeBuffer[0x10];
    DAT_15522c0b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c0b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c0b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c0b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c0b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c0b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c0b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15522c0c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c0c8 = 8;
    _DAT_15522c0cc = 1;
    _DAT_15522c0d0 = 0;
    `public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParticleIndices";
    DAT_15522c0a2 = Freeze::FindFieldNameLength(L"ParticleIndices");
    _DAT_15522c080 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15522c088 = ::TypeBuffer[0x10];
    DAT_15522c088_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15522c088_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15522c088_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15522c088_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15522c088_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15522c088_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15522c088_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGPUSpriteVertexFactoryShaderParametersVS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15522c090 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15522c098 = 4;
    _DAT_15522c09c = 1;
    _DAT_15522c0a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

