// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Bind @ 147cd8020

void __thiscall
FInstancedStaticMeshVertexFactoryShaderParameters::Bind
          (FInstancedStaticMeshVertexFactoryShaderParameters *this,FShaderParameterMap *param_1)

{
  FLocalVertexFactoryShaderParametersBase::Bind
            ((FLocalVertexFactoryShaderParametersBase *)this,param_1);
  FShaderParameter::Bind(&this->InstancingOffsetParameter,param_1,L"InstancingOffset",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->VertexFetch_InstanceOriginBufferParameter,param_1,
             L"VertexFetch_InstanceOriginBuffer",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->VertexFetch_InstanceTransformBufferParameter,param_1,
             L"VertexFetch_InstanceTransformBuffer",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->VertexFetch_InstanceLightmapBufferParameter,param_1,
             L"VertexFetch_InstanceLightmapBuffer",SPF_Optional);
  FShaderParameter::Bind(&this->InstanceOffset,param_1,L"InstanceOffset",SPF_Optional);
  return;
}

// GetElementShaderBindings @ 147d04520

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

void __thiscall
FInstancedStaticMeshVertexFactoryShaderParameters::GetElementShaderBindings
          (FInstancedStaticMeshVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  void *pvVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  FVertexFactory *this_00;
  FMeshBatchElement *pFVar4;
  FMeshDrawSingleShaderBindings *this_01;
  TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  bool bVar6;
  FStaticShaderPlatform FVar7;
  FShaderParametersMetadata *pFVar8;
  FHashedName FVar9;
  FShaderUniformBufferParameter *pFVar10;
  longlong lVar11;
  undefined4 local_res8;
  ushort local_resc;
  FHashedName local_res10;
  FHashedName local_68;
  FHashedName local_60;
  FHashedName local_58 [2];
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  pTVar5 = param_9;
  this_01 = param_8;
  pFVar4 = param_7;
  this_00 = param_6;
  FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase
            ((FLocalVertexFactoryShaderParametersBase *)this,param_1,param_2,param_3,param_4,param_5
             ,param_6,param_7,param_7->VertexFactoryUserData,param_8,param_9);
  param_7._0_4_ = pFVar4->UserIndex;
  pvVar1 = pFVar4->UserData;
  param_6._0_2_ = (this->InstanceOffset).BufferIndex;
  param_6._2_2_ = (this->InstanceOffset).BaseIndex;
  param_6._4_2_ = (this->InstanceOffset).NumBytes;
  FMeshDrawSingleShaderBindings::Add<int>(this_01,SUB86(&param_6,0),(int *)&param_7);
  FVar7.Platform = GMaxRHIShaderPlatform;
  if (param_1 != (FSceneInterface *)0x0) {
    FVar7.Platform = FSceneInterface::GetShaderPlatform(param_1);
  }
  bVar6 = UseGPUScene(FVar7);
  if (!bVar6) {
    pFVar2 = *(FRHIUniformBuffer **)(this_00[2].Streams.AllocatorInstance.InlineData + 8);
    pFVar8 = FInstancedStaticMeshVertexFactoryUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_res10,&pFVar8->ShaderVariableHashedName);
    FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_60,&local_res10);
    pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
    if (pFVar10->BaseIndex != 0xffff) {
      if ((pFVar2 == (FRHIUniformBuffer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x8f,L"Attempted to set null uniform buffer"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar10->BaseIndex == 0xffff) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (this_01,pFVar2,(uint)pFVar10->BaseIndex);
    }
    lVar11 = (**(code **)(this_00->_padding_ + 0x30))(this_00);
    if (((*(uint *)(lVar11 + 0x38) & 0x4000) != 0) &&
       (bVar6 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5), bVar6)) {
      FMeshDrawSingleShaderBindings::Add
                (this_01,this->VertexFetch_InstanceOriginBufferParameter,
                 (FRHIShaderResourceView *)this_00[2]._padding_);
      FMeshDrawSingleShaderBindings::Add
                (this_01,this->VertexFetch_InstanceTransformBufferParameter,
                 (FRHIShaderResourceView *)this_00[2]._padding_);
      FMeshDrawSingleShaderBindings::Add
                (this_01,this->VertexFetch_InstanceLightmapBufferParameter,
                 (FRHIShaderResourceView *)this_00[2]._padding_);
    }
    if ((0 < (int)(uint)param_7) && (0 < pTVar5->ArrayNum)) {
      FVertexFactory::OffsetInstanceStreams(this_00,(uint)param_7,param_4,pTVar5);
    }
  }
  _local_48 = 0;
  _fStack_40 = 0;
  if ((pvVar1 != (void *)0x0) && (pFVar4->InstancedLODRange != 0)) {
    fStack_44 = (float)*(double *)((longlong)pvVar1 + 0x48);
    local_48 = (float)*(double *)((longlong)pvVar1 + 0x40);
    uStack_3c = 0x3f800000;
    fStack_40 = (float)*(double *)((longlong)pvVar1 + 0x50);
  }
  local_res8._0_2_ = (this->InstancingOffsetParameter).BufferIndex;
  local_res8._2_2_ = (this->InstancingOffsetParameter).BaseIndex;
  local_resc = (this->InstancingOffsetParameter).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
            (this_01,SUB86(&local_res8,0),(TVector4<float> *)&local_48);
  pFVar2 = (pFVar4->LooseParametersUniformBuffer).Reference;
  pFVar8 = FInstancedStaticMeshVFLooseUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_68,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(local_58,&local_68);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
  if (pFVar10->BaseIndex != 0xffff) {
    if ((pFVar2 == (FRHIUniformBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pFVar10->BaseIndex == 0xffff) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_01,pFVar2,(uint)pFVar10->BaseIndex);
  }
  return;
}

// GetTypeLayout @ 147d0fe80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FInstancedStaticMeshVertexFactoryShaderParameters::GetTypeLayout
          (FInstancedStaticMeshVertexFactoryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '$';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FInstancedStati;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FInstancedStaticMeshVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceOffset";
    DAT_15520dc12 = Freeze::FindFieldNameLength(L"InstanceOffset");
    _DAT_15520dbf0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520dbf8 = ::TypeBuffer[0x10];
    DAT_15520dbf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520dbf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520dbf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520dbf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520dbf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520dbf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520dbf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dc00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dc08 = 0x1e;
    _DAT_15520dc0c = 1;
    _DAT_15520dc10 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceLightmapBufferParameter";
    DAT_15520dbe2 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceLightmapBufferParameter");
    _DAT_15520dbc0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520dbc8 = ::TypeBuffer[0x10];
    DAT_15520dbc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520dbc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520dbc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520dbc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520dbc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520dbc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520dbc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dbd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dbd8 = 0x1a;
    _DAT_15520dbdc = 1;
    _DAT_15520dbe0 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceTransformBufferParameter";
    DAT_15520dbb2 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceTransformBufferParameter");
    _DAT_15520db90 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520db98 = ::TypeBuffer[0x10];
    DAT_15520db98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dba0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dba8 = 0x16;
    _DAT_15520dbac = 1;
    _DAT_15520dbb0 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceOriginBufferParameter";
    DAT_15520db82 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceOriginBufferParameter");
    _DAT_15520db60 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520db68 = ::TypeBuffer[0x10];
    DAT_15520db68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520db70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520db78 = 0x12;
    _DAT_15520db7c = 1;
    _DAT_15520db80 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstancingOffsetParameter";
    DAT_15520db52 = Freeze::FindFieldNameLength(L"InstancingOffsetParameter");
    _DAT_15520db30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520db38 = ::TypeBuffer[0x10];
    DAT_15520db38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520db40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520db48 = 0xc;
    _DAT_15520db4c = 1;
    _DAT_15520db50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FLocalVertexFactoryShaderParametersBase::StaticGetTypeLayout();
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

// InternalDestroy @ 147d19e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FInstancedStaticMeshVertexFactoryShaderParameters::InternalDestroy
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
  return;
}

// StaticGetTypeLayout @ 147d319b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
FInstancedStaticMeshVertexFactoryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '$';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FInstancedStati;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FInstancedStaticMeshVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstanceOffset";
    DAT_15520dc12 = Freeze::FindFieldNameLength(L"InstanceOffset");
    _DAT_15520dbf0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520dbf8 = ::TypeBuffer[0x10];
    DAT_15520dbf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520dbf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520dbf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520dbf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520dbf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520dbf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520dbf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dc00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dc08 = 0x1e;
    _DAT_15520dc0c = 1;
    _DAT_15520dc10 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceLightmapBufferParameter";
    DAT_15520dbe2 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceLightmapBufferParameter");
    _DAT_15520dbc0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520dbc8 = ::TypeBuffer[0x10];
    DAT_15520dbc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520dbc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520dbc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520dbc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520dbc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520dbc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520dbc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dbd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dbd8 = 0x1a;
    _DAT_15520dbdc = 1;
    _DAT_15520dbe0 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceTransformBufferParameter";
    DAT_15520dbb2 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceTransformBufferParameter");
    _DAT_15520db90 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520db98 = ::TypeBuffer[0x10];
    DAT_15520db98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520dba0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520dba8 = 0x16;
    _DAT_15520dbac = 1;
    _DAT_15520dbb0 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFetch_InstanceOriginBufferParameter";
    DAT_15520db82 = Freeze::FindFieldNameLength(L"VertexFetch_InstanceOriginBufferParameter");
    _DAT_15520db60 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_15520db68 = ::TypeBuffer[0x10];
    DAT_15520db68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520db70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520db78 = 0x12;
    _DAT_15520db7c = 1;
    _DAT_15520db80 = 0;
    `public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "InstancingOffsetParameter";
    DAT_15520db52 = Freeze::FindFieldNameLength(L"InstancingOffsetParameter");
    _DAT_15520db30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520db38 = ::TypeBuffer[0x10];
    DAT_15520db38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520db38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520db38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520db38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520db38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520db38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520db38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FInstancedStaticMeshVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520db40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520db48 = 0xc;
    _DAT_15520db4c = 1;
    _DAT_15520db50 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FLocalVertexFactoryShaderParametersBase::StaticGetTypeLayout();
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

