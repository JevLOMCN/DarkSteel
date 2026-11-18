// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Bind @ 147eb0f90

void __thiscall
FLocalVertexFactoryShaderParameters::Bind
          (FLocalVertexFactoryShaderParameters *this,FShaderParameterMap *param_1)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x4,param_1,L"SpeedTreeLODInfo",SPF_Optional);
  if (*(short *)&this->field_0x8 == 0) {
    local_18.Size = 0xd;
    local_18.DataPtr = L"SpeedTreeData";
    bVar1 = FShaderParameterMap::ContainsParameterAllocation(param_1,&local_18);
    if (!bVar1) goto LAB_147eb0fec;
  }
  bVar1 = true;
LAB_147eb0fec:
  this->field_0xa = bVar1;
  FShaderParameter::Bind(&this->IsGPUSkinPassThrough,param_1,L"bIsGPUSkinPassThrough",SPF_Optional);
  return;
}

// GetElementShaderBindings @ 147ebf7d0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLocalVertexFactoryShaderParameters::GetElementShaderBindings
          (FLocalVertexFactoryShaderParameters *this,FSceneInterface *param_1,FSceneView *param_2,
          FMeshMaterialShader *param_3,EVertexInputStreamType param_4,Type param_5,
          FVertexFactory *param_6,FMeshBatchElement *param_7,FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  ushort uVar1;
  code *pcVar2;
  FVertexFactory *this_00;
  FMeshDrawSingleShaderBindings *this_01;
  bool bVar3;
  longlong lVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  FRHIUniformBuffer *pFVar8;
  undefined4 local_res8;
  ushort local_resc;
  FHashedName local_58;
  FHashedName local_50;
  FHashedName local_48;
  FHashedName local_40;
  FHashedName local_38;
  FHashedName local_30;
  
  this_01 = param_8;
  this_00 = param_6;
  param_6._0_4_ = (uint)(param_6[1].PositionAndNormalStream.AllocatorInstance.InlineData[4] != '\0')
  ;
  local_res8._0_2_ = (this->IsGPUSkinPassThrough).BufferIndex;
  local_res8._2_2_ = (this->IsGPUSkinPassThrough).BaseIndex;
  local_resc = (this->IsGPUSkinPassThrough).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>(param_8,SUB86(&local_res8,0),(uint *)&param_6);
  if (this_00[1].PositionAndNormalStream.AllocatorInstance.InlineData[4] == '\0') {
    FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase
              ((FLocalVertexFactoryShaderParametersBase *)this,param_1,param_2,param_3,param_4,
               param_5,this_00,param_7,param_7->VertexFactoryUserData,this_01,param_9);
    pFVar5 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_48,&pFVar5->ShaderVariableHashedName);
    FVar6.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_48);
    pFVar7 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar6);
    if (pFVar7->BaseIndex == 0xffff) {
      return;
    }
    if (GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x65,
                         L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ == 0) {
          FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value.GetUniformBufferRHI()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x84,L"Attempted to set null uniform buffer for type %s");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
    if ((pFVar7->BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = pFVar7->BaseIndex;
    pFVar8 = (FRHIUniformBuffer *)GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_;
    if (GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x65,
                         L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (FRHIUniformBuffer *)GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_;
      if ((GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("UniformBufferRHI.GetReference()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                             ,0x66,L""),
         pFVar8 = (FRHIUniformBuffer *)GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    FGPUSkinPassthroughVertexFactory::GetOverrideVertexStreams
              ((FGPUSkinPassthroughVertexFactory *)this_00,param_9);
    lVar4 = (**(code **)(this_00->_padding_ + 0x30))(this_00);
    if ((((*(uint *)(lVar4 + 0x38) & 0x4000) != 0) &&
        (bVar3 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5), bVar3)) ||
       (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
      pFVar8 = *(FRHIUniformBuffer **)&this_00[1].PositionStream.ArrayNum;
      pFVar5 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
      FHashedName::FHashedName(&local_58,&pFVar5->ShaderVariableHashedName);
      FVar6.Hash = (ulong64)FHashedName::FHashedName(&local_40,&local_58);
      pFVar7 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar6);
      if (pFVar7->BaseIndex != 0xffff) {
        if ((pFVar8 == (FRHIUniformBuffer *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                               ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((pFVar7->BaseIndex == 0xffff) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4717616138333192331>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                               ,0x8b,"IsBound()"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                  (this_01,pFVar8,(uint)pFVar7->BaseIndex);
      }
    }
    pFVar5 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_50,&pFVar5->ShaderVariableHashedName);
    FVar6.Hash = (ulong64)FHashedName::FHashedName(&local_38,&local_50);
    pFVar7 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar6);
    if (pFVar7->BaseIndex == 0xffff) {
      return;
    }
    if (*(longlong *)(this_00[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10) == 0)
    {
      FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((pFVar7->BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = pFVar7->BaseIndex;
    pFVar8 = *(FRHIUniformBuffer **)
              (this_00[1].PositionAndNormalStream.AllocatorInstance.InlineData + 0x10);
  }
  FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_01,pFVar8,(uint)uVar1);
  return;
}

// GetTypeLayout @ 147ec7190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FLocalVertexFactoryShaderParameters::GetTypeLayout(FLocalVertexFactoryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x14';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLocalVertexFac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLocalVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IsGPUSkinPassThrough";
    DAT_1552136f2 = Freeze::FindFieldNameLength(L"IsGPUSkinPassThrough");
    _DAT_1552136d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552136d8 = ::TypeBuffer[0x10];
    DAT_1552136d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552136d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552136d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552136d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552136d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552136d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552136d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552136e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552136e8 = 0xc;
    _DAT_1552136ec = 1;
    _DAT_1552136f0 = 0;
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

// InternalDestroy @ 147ecc5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FLocalVertexFactoryShaderParameters::InternalDestroy
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
  return;
}

// StaticGetTypeLayout @ 147edebb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLocalVertexFactoryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x14';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLocalVertexFac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLocalVertexFactoryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "IsGPUSkinPassThrough";
    DAT_1552136f2 = Freeze::FindFieldNameLength(L"IsGPUSkinPassThrough");
    _DAT_1552136d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1552136d8 = ::TypeBuffer[0x10];
    DAT_1552136d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552136d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552136d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552136d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552136d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552136d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552136d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552136e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552136e8 = 0xc;
    _DAT_1552136ec = 1;
    _DAT_1552136f0 = 0;
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

