// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FMeshMaterialShader @ 145575dd0

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

FMeshMaterialShader * __thiscall
FMeshMaterialShader::FMeshMaterialShader
          (FMeshMaterialShader *this,CompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  FMeshMaterialShader *pFVar4;
  
  FMaterialShader::FMaterialShader((FMaterialShader *)this,(CompiledShaderInitializerType *)param_1)
  ;
  (this->VertexFactoryParameters).field0_0x0.Packed = 0;
  (this->PassUniformBuffer).BaseIndex = 0xffff;
  pFVar3 = (*param_1->VertexFactoryType->ConstructParameters)
                     ((EShaderFrequency)param_1->_padding_ & (SF_NumFrequencies|SF_Pixel),
                      (FShaderParameterMap *)param_1->_padding_);
  (this->VertexFactoryParameters).field0_0x0.UnfrozenPtr = pFVar3;
  if (((ulonglong)pFVar3 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Frozen.IsFrozen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x187,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMaterialShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// CallWriteFrozenField @ 145583d20

void __cdecl
FMeshMaterialShader::InternalLinkType<1>::CallWriteFrozenField
          (FMemoryImageWriter *param_1,void *param_2,void *param_3,FTypeLayoutDesc *param_4,
          FTypeLayoutDesc *param_5)

{
  code *pcVar1;
  bool bVar2;
  FPointerTableBase *pFVar3;
  FTypeLayoutDesc *pFVar4;
  longlong lVar5;
  FTypeLayoutDesc *pFVar6;
  void *pvVar7;
  FMemoryImageWriter local_res18 [2];
  
  pFVar3 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((*(byte *)((longlong)param_2 + 200) & 1) == 0) {
    lVar5 = *(longlong *)((longlong)param_2 + 200);
  }
  else {
    if (pFVar3 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
             Do();
    lVar5 = (**(code **)((longlong)*pFVar3 + 0x10))
                      (pFVar3,pFVar4,*(ulonglong *)((longlong)param_2 + 200) >> 1);
  }
  pFVar4 = (FTypeLayoutDesc *)(**(code **)(lVar5 + 0x48))(*(byte *)((longlong)param_2 + 0xd0) & 0xf)
  ;
  pvVar7 = *(void **)param_3;
  if (((ulonglong)pvVar7 & 1) != 0) {
    pvVar7 = (void *)(((longlong)pvVar7 >> 0x18) + (longlong)param_3);
  }
  if (pvVar7 != (void *)0x0) {
    if (pFVar4 == (FTypeLayoutDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DerivedTypeDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x1ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)local_res18,pFVar6,(uint *)pFVar4);
    FMemoryImageWriter::WriteObject(local_res18,pvVar7,pFVar4);
    FMemoryImageWriter::~FMemoryImageWriter(local_res18);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// GetElementShaderBindings @ 1455996c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FMeshMaterialShader::GetElementShaderBindings
          (FMeshMaterialShader *this,FShaderMapPointerTable *param_1,FScene *param_2,
          FSceneView *param_3,FVertexFactory *param_4,EVertexInputStreamType param_5,
          FGenericStaticFeatureLevel param_6,FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,
          FMeshBatchElement *param_9,FMeshMaterialShaderElementData *param_10,
          FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  ushort uVar1;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FStaticShaderPlatform FVar6;
  uint uVar7;
  longlong *plVar8;
  TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *pTVar9;
  FShaderParametersMetadata *pFVar10;
  FHashedName FVar11;
  FShaderUniformBufferParameter *pFVar12;
  ulonglong uVar13;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar14;
  uint uVar15;
  FShaderType *local_res8;
  FShaderType **local_res18 [2];
  FShaderType **local_68;
  FHashedName local_60;
  FHashedName local_58;
  FHashedName local_50;
  FHashedName local_48 [2];
  
  plVar8 = &this->_padding_;
  if ((*plVar8 & 1) != 0) {
    uVar15 = (uint)((ulonglong)*plVar8 >> 1);
    uVar7 = 0;
    if ((int)uVar15 < *(int *)&(param_1->VFTypes).field_0x28) {
      uVar7 = ~uVar15 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar8 = (longlong *)(*(longlong *)&(param_1->VFTypes).field_0x20 + (longlong)(int)uVar15 * 8);
  }
  if (*plVar8 != 0) {
    uVar13 = (this->VertexFactoryParameters).field0_0x0.Packed;
    if ((uVar13 & 1) != 0) {
      uVar13 = (longlong)&(this->VertexFactoryParameters).field0_0x0 + ((longlong)uVar13 >> 0x18);
    }
    if (uVar13 != 0) {
      (**(code **)(*plVar8 + 0x50))
                ((byte)this->_padding_ & 0xf,uVar13,param_2,param_3,this,param_5,
                 param_6.FeatureLevel,param_4,param_9,param_11,param_12);
    }
  }
  FVar6.Platform = GMaxRHIShaderPlatform;
  if (param_2 != (FScene *)0x0) {
    FVar6.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_2);
  }
  bVar4 = false;
  bVar5 = PlatformGPUSceneUsesUniformBufferView(FVar6);
  if ((bVar5) &&
     ((param_9->bForceInstanceCulling != 0 ||
      ((param_7 != (FPrimitiveSceneProxy *)0x0 &&
       (param_7->bVFRequiresPrimitiveUniformBuffer != '\0')))))) {
    bVar4 = true;
  }
  bVar5 = UseGPUScene(FVar6,param_6);
  if (((!bVar5) || (param_4->PrimitiveIdStreamIndex[param_5] < '\0')) || (bVar4)) {
    TVar14 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)param_9->PrimitiveUniformBuffer;
    if (TVar14 == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
      FShader::GetType((FShader *)this,param_1);
      if ((param_9->PrimitiveUniformBufferResource ==
           (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BatchElement.PrimitiveUniformBufferResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                             ,0x208,
                             L"%s expected a primitive uniform buffer but none was set on BatchElement.PrimitiveUniformBuffer or BatchElement.PrimitiveUniformBufferResource"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = param_9->PrimitiveUniformBufferResource;
      if (pTVar2->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x65,
                           L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pTVar2->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0)
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UniformBufferRHI.GetReference()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                                  ,0x66,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar14 = pTVar2->UniformBufferRHI;
      pFVar10 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      FHashedName::FHashedName(&local_58,&pFVar10->ShaderVariableHashedName);
      FVar11.Hash = (ulong64)FHashedName::FHashedName(local_48,&local_58);
      pFVar12 = FShader::GetUniformBufferParameter((FShader *)this,FVar11);
      if (pFVar12->BaseIndex == 0xffff) {
        return;
      }
      if ((TVar14 == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x8f,L"Attempted to set null uniform buffer"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar12->BaseIndex == 0xffff) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = pFVar12->BaseIndex;
    }
    else {
      pFVar10 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      FHashedName::FHashedName(&local_60,&pFVar10->ShaderVariableHashedName);
      FVar11.Hash = (ulong64)FHashedName::FHashedName(&local_50,&local_60);
      pFVar12 = FShader::GetUniformBufferParameter((FShader *)this,FVar11);
      if (pFVar12->BaseIndex == 0xffff) {
        return;
      }
      uVar1 = pFVar12->BaseIndex;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_11,(FRHIUniformBuffer *)TVar14,(uint)uVar1);
  }
  else {
    local_res8 = FShader::GetType((FShader *)this,param_1);
    pTVar9 = FShader::GetUniformBufferParameter<FPrimitiveUniformShaderParameters>((FShader *)this);
    if (*pTVar9 != (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters>)0xffff) {
      local_res18[0] = &local_res8;
      `FMeshMaterialShader::GetElementShaderBindings'::__l14::<lambda_1>::operator()(local_res18);
    }
    if ((param_9->PrimitiveUniformBuffer != (FRHIUniformBuffer *)0x0) &&
       ((param_7 == (FPrimitiveSceneProxy *)0x0 ||
        (param_7->bVFRequiresPrimitiveUniformBuffer == '\0')))) {
      local_68 = &local_res8;
      `FMeshMaterialShader::GetElementShaderBindings'::__l14::<lambda_2>::operator()(&local_68);
    }
  }
  return;
}

// GetShaderBindings @ 14559ee20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshMaterialShader::GetShaderBindings
          (FMeshMaterialShader *this,FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,
          FMaterialRenderProxy *param_4,FMaterial *param_5,FMeshMaterialShaderElementData *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  FMeshMaterialShaderElementData *pFVar3;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  FHashedName local_38;
  FHashedName local_30;
  FHashedName local_28 [2];
  
  this_00 = param_7;
  FMaterialShader::GetShaderBindings
            ((FMaterialShader *)this,(FSceneInterface *)param_1,param_2,param_4,param_5,param_7);
  pFVar3 = param_6;
  pFVar1 = param_6->FadeUniformBuffer;
  pFVar5 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(&local_30,(FHashedName *)&param_6);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
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
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  pFVar1 = pFVar3->DitherUniformBuffer;
  pFVar5 = FDitherUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_38,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(local_28,&local_38);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
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
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  return;
}

// GetTypeLayout @ 1455b0e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FMeshMaterialShader::GetTypeLayout(FMeshMaterialShader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMeshMaterialSh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMeshMaterialShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassUniformBuffer";
    DAT_155134d3a = Freeze::FindFieldNameLength(L"PassUniformBuffer");
    _DAT_155134d18 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155134d20 = ::TypeBuffer[0x10];
    DAT_155134d20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134d20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134d20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134d20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134d20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134d20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134d20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134d28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134d30 = 0x100;
    _DAT_155134d34 = 1;
    _DAT_155134d38 = 0;
    `public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFactoryParameters";
    DAT_155134d0a = Freeze::FindFieldNameLength(L"VertexFactoryParameters");
    if ((DAT_15513ead7 & 2) == 0) {
      DAT_15513ead7 = DAT_15513ead7 | 3;
      _DAT_15513eac8 = 8;
      _DAT_15513ea78 = L"TMemoryImagePtr<T>";
      _DAT_15513ea90 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallWriteMemoryImage;
      _DAT_15513ea98 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallUnfrozenCopy;
      _DAT_15513eaa0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallAppendHash;
      _DAT_15513eaa8 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallGetTargetAlignment;
      _DAT_15513eab0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallToString;
      _DAT_15513ea88 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallDestroy
      ;
      _DAT_15513ead0 = 8;
      DAT_15513ead4 = 0;
      _DAT_15513eacc = 8;
    }
    _DAT_155134d00 = 0xf8;
    _DAT_155134ce8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_155134cf8 = InternalLinkType<1>::CallWriteFrozenField;
    DAT_155134cf0 = ::TypeBuffer[0x10];
    DAT_155134cf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134cf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134cf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134cf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134cf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134cf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134cf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155134d04 = 1;
    DAT_155134d08 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

// InternalDestroy @ 1455b6fc0

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
FMeshMaterialShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x108);
  return;
}

// StaticGetTypeLayout @ 1455e5540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMeshMaterialShader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMeshMaterialSh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMeshMaterialShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PassUniformBuffer";
    DAT_155134d3a = Freeze::FindFieldNameLength(L"PassUniformBuffer");
    _DAT_155134d18 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155134d20 = ::TypeBuffer[0x10];
    DAT_155134d20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134d20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134d20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134d20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134d20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134d20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134d20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134d28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134d30 = 0x100;
    _DAT_155134d34 = 1;
    _DAT_155134d38 = 0;
    `public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VertexFactoryParameters";
    DAT_155134d0a = Freeze::FindFieldNameLength(L"VertexFactoryParameters");
    if ((DAT_15513ead7 & 2) == 0) {
      DAT_15513ead7 = DAT_15513ead7 | 3;
      _DAT_15513eac8 = 8;
      _DAT_15513ea78 = L"TMemoryImagePtr<T>";
      _DAT_15513ea90 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallWriteMemoryImage;
      _DAT_15513ea98 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallUnfrozenCopy;
      _DAT_15513eaa0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallAppendHash;
      _DAT_15513eaa8 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallGetTargetAlignment;
      _DAT_15513eab0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::
           CallToString;
      _DAT_15513ea88 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::CallDestroy
      ;
      _DAT_15513ead0 = 8;
      DAT_15513ead4 = 0;
      _DAT_15513eacc = 8;
    }
    _DAT_155134d00 = 0xf8;
    _DAT_155134ce8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TMemoryImagePtr<FVertexFactoryShaderParameters>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_155134cf8 = InternalLinkType<1>::CallWriteFrozenField;
    DAT_155134cf0 = ::TypeBuffer[0x10];
    DAT_155134cf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134cf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134cf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134cf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134cf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134cf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134cf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMeshMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155134d04 = 1;
    DAT_155134d08 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
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

// WriteFrozenVertexFactoryParameters @ 1455e8dc0

void __thiscall
FMeshMaterialShader::WriteFrozenVertexFactoryParameters
          (FMeshMaterialShader *this,FMemoryImageWriter *param_1,
          TMemoryImagePtr<FVertexFactoryShaderParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPointerTableBase *pFVar3;
  FTypeLayoutDesc *pFVar4;
  longlong lVar5;
  FTypeLayoutDesc *pFVar6;
  void *pvVar7;
  FMemoryImageWriter local_res18 [2];
  
  pFVar3 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((this->_padding_ & 1) == 0) {
    lVar5 = this->_padding_;
  }
  else {
    if (pFVar3 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>::
             Do();
    lVar5 = (**(code **)((longlong)*pFVar3 + 0x10))(pFVar3,pFVar4,(ulonglong)this->_padding_ >> 1);
  }
  pFVar4 = (FTypeLayoutDesc *)(**(code **)(lVar5 + 0x48))((byte)this->_padding_ & 0xf);
  pvVar7 = (void *)(param_2->field0_0x0).Packed;
  if (((ulonglong)pvVar7 & 1) != 0) {
    pvVar7 = (void *)((longlong)&param_2->field0_0x0 + ((longlong)pvVar7 >> 0x18));
  }
  if (pvVar7 != (void *)0x0) {
    if (pFVar4 == (FTypeLayoutDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DerivedTypeDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x1ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)local_res18,pFVar6,(uint *)pFVar4);
    FMemoryImageWriter::WriteObject(local_res18,pvVar7,pFVar4);
    FMemoryImageWriter::~FMemoryImageWriter(local_res18);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// operator() @ 1504d1190

bool __thiscall
`FMeshMaterialShader::GetElementShaderBindings'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7248943839665192453>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7248943839665192453>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d11e0

bool __thiscall
`FMeshMaterialShader::GetElementShaderBindings'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7248943839665192451>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7248943839665192451>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

