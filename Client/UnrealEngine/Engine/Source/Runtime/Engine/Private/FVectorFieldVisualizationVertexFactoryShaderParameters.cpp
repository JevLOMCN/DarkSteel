// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetElementShaderBindings @ 148958780

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
FVectorFieldVisualizationVertexFactoryShaderParameters::GetElementShaderBindings
          (FVectorFieldVisualizationVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  void *pvVar1;
  code *pcVar2;
  TRefCountPtr<FRHISamplerState> TVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  
  TVar3.Reference =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pvVar1 = param_7->UserData;
  if (pvVar1 != (void *)0x0) {
    pFVar5 = FVectorFieldVisualizationParameters::GetStructMetadata();
    FHashedName::FHashedName((FHashedName *)&param_7,&pFVar5->ShaderVariableHashedName);
    FVar6.Hash = (ulong64)FHashedName::FHashedName((FHashedName *)&param_6,(FHashedName *)&param_7);
    pFVar7 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar6);
    if (pFVar7->BaseIndex != 0xffff) {
      if (*(longlong *)((longlong)pvVar1 + 8) == 0) {
        FVectorFieldVisualizationParameters::GetStructMetadata();
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x78,L"Attempted to set null uniform buffer for type %s");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pFVar7->BaseIndex == 0xffff) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_8,*(FRHIUniformBuffer **)((longlong)pvVar1 + 8),(uint)pFVar7->BaseIndex);
    }
    FMeshDrawSingleShaderBindings::AddTexture
              (param_8,this->VectorFieldTexture,this->VectorFieldTextureSampler,TVar3.Reference,
               *(FRHITexture **)((longlong)pvVar1 + 0x10));
  }
  return;
}

// GetTypeLayout @ 14895eef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FVectorFieldVisualizationVertexFactoryShaderParameters::GetTypeLayout
          (FVectorFieldVisualizationVertexFactoryShaderParameters *this)

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
    ::TypeBuffer._8_8_ = u_FVectorFieldVis;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FVectorFieldVisualizationVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VectorFieldTextureSampler";
    DAT_155258a12 = Freeze::FindFieldNameLength(L"VectorFieldTextureSampler");
    _DAT_1552589f0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552589f8 = ::TypeBuffer[0x10];
    DAT_1552589f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552589f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552589f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552589f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552589f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552589f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552589f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258a00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258a08 = 8;
    _DAT_155258a0c = 1;
    _DAT_155258a10 = 0;
    `public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VectorFieldTexture";
    DAT_1552589e2 = Freeze::FindFieldNameLength(L"VectorFieldTexture");
    _DAT_1552589c0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552589c8 = ::TypeBuffer[0x10];
    DAT_1552589c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552589c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552589c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552589c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552589c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552589c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552589c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552589d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552589d8 = 4;
    _DAT_1552589dc = 1;
    _DAT_1552589e0 = 0;
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

// InternalDestroy @ 148966080

void __cdecl
FVectorFieldVisualizationVertexFactoryShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 1489827f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
FVectorFieldVisualizationVertexFactoryShaderParameters::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FVectorFieldVis;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FVectorFieldVisualizationVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VectorFieldTextureSampler";
    DAT_155258a12 = Freeze::FindFieldNameLength(L"VectorFieldTextureSampler");
    _DAT_1552589f0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552589f8 = ::TypeBuffer[0x10];
    DAT_1552589f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552589f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552589f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552589f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552589f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552589f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552589f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155258a00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155258a08 = 8;
    _DAT_155258a0c = 1;
    _DAT_155258a10 = 0;
    `public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VectorFieldTexture";
    DAT_1552589e2 = Freeze::FindFieldNameLength(L"VectorFieldTexture");
    _DAT_1552589c0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1552589c8 = ::TypeBuffer[0x10];
    DAT_1552589c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552589c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552589c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552589c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552589c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552589c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552589c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FVectorFieldVisualizationVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552589d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552589d8 = 4;
    _DAT_1552589dc = 1;
    _DAT_1552589e0 = 0;
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

