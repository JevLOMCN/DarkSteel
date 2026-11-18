// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetElementShaderBindings @ 147c56ab0

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
FGeometryCollectionVertexFactoryShaderParameters::GetElementShaderBindings
          (FGeometryCollectionVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  code *pcVar1;
  FVertexFactory *pFVar2;
  bool bVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  FVertexFactoryType *pFVar6;
  longlong lVar7;
  FShaderParametersMetadata *pFVar8;
  FHashedName FVar9;
  FShaderUniformBufferParameter *pFVar10;
  FRHIUniformBuffer *pFVar11;
  FHashedName local_38;
  FHashedName local_30;
  FHashedName local_28 [2];
  
  pFVar2 = param_6;
  pFVar6 = (FVertexFactoryType *)(**(code **)(param_6->_padding_ + 0x30))(param_6);
  if ((pFVar6 != &FGeometryCollectionVertexFactory::StaticType) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexFactory->GetType() == &FGeometryCollectionVertexFactory::StaticType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                         ,0x137,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar7 = (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  if (((*(uint *)(lVar7 + 0x38) & 0x4000) == 0) ||
     (bVar3 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5), !bVar3)) {
    EVar5 = FSceneInterface::GetShaderPlatform(param_1);
    bVar3 = FGeometryCollectionVertexFactory::UseShaderBoneTransform(EVar5);
    if (!bVar3) {
      pFVar11 = *(FRHIUniformBuffer **)
                 (pFVar2[1].PositionAndNormalStream.AllocatorInstance.InlineData + 8);
      bVar3 = false;
      bVar4 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)param_5);
      if (!bVar4) {
        return;
      }
      goto LAB_147c56b6f;
    }
  }
  pFVar11 = *(FRHIUniformBuffer **)
             (pFVar2[1].PositionAndNormalStream.AllocatorInstance.InlineData + 8);
  bVar3 = true;
LAB_147c56b6f:
  if ((pFVar11 == (FRHIUniformBuffer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexFactoryUniformBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                         ,0x140,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar8 = FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_30,(FHashedName *)&param_6);
  pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
  if (pFVar10->BaseIndex != 0xffff) {
    if ((pFVar11 == (FRHIUniformBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar10->BaseIndex == 0xffff) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_8,pFVar11,(uint)pFVar10->BaseIndex);
  }
  if (bVar3) {
    pFVar11 = (FRHIUniformBuffer *)pFVar2[1]._padding_;
    if (pFVar11 == (FRHIUniformBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LooseParameterBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCollectionRendering.cpp"
                         ,0x148,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      FRHIResource::AddRef((FRHIResource *)pFVar11);
    }
    pFVar8 = FGCBoneLooseParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_38,&pFVar8->ShaderVariableHashedName);
    FVar9.Hash = (ulong64)FHashedName::FHashedName(local_28,&local_38);
    pFVar10 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar9);
    FMeshDrawSingleShaderBindings::Add(param_8,pFVar10,pFVar11);
    if (pFVar11 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar11);
    }
  }
  return;
}

// GetTypeLayout @ 147c5ce60

FTypeLayoutDesc * __thiscall
FGeometryCollectionVertexFactoryShaderParameters::GetTypeLayout
          (FGeometryCollectionVertexFactoryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGeometryCollec;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FGeometryCollectionVertexFactoryShaderParameters,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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

// InternalDestroy @ 147c68050

void __cdecl
FGeometryCollectionVertexFactoryShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 147c879f0

FTypeLayoutDesc * __cdecl
FGeometryCollectionVertexFactoryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FGeometryCollec;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FGeometryCollectionVertexFactoryShaderParameters,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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

