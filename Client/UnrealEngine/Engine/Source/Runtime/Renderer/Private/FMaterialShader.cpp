// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FMaterialShader @ 145575bb0

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

FMaterialShader * __thiscall
FMaterialShader::FMaterialShader(FMaterialShader *this,CompiledShaderInitializerType *param_1)

{
  TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FMaterialShader *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  FShaderUniformBufferParameter local_38 [4];
  FString local_30;
  
  FShader::FShader((FShader *)this,(FShaderCompiledShaderInitializerType *)param_1);
  iVar7 = 0;
  pTVar1 = &this->ParameterCollectionUniformBuffers;
  (this->VTFeedbackBuffer).BaseIndex = 0;
  (this->VTFeedbackBuffer).NumResources = '\0';
  (this->VTFeedbackBuffer).Type = LooseData;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterCollectionUniformBuffers).ArrayNum = 0;
  (this->ParameterCollectionUniformBuffers).ArrayMax = 0;
  (this->MaterialUniformBuffer).BaseIndex = 0xffff;
  FShaderUniformBufferParameter::Bind
            (&this->MaterialUniformBuffer,(FShaderParameterMap *)param_1->_padding_,L"Material",
             SPF_Optional);
  if (0 < (param_1->UniformExpressionSet->ParameterCollections).ArrayNum) {
    do {
      local_38[0].BaseIndex = 0xffff;
      ::FString::PrintfImpl(&local_30,L"MaterialCollection%u");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        FVar8.Data = local_30.Data.AllocatorInstance.Data;
      }
      FShaderUniformBufferParameter::Bind
                (local_38,(FShaderParameterMap *)param_1->_padding_,(wchar_t *)FVar8.Data,
                 SPF_Optional);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      FVar5 = pTVar1->AllocatorInstance;
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
      if (((ulonglong)FVar5 & 1) == 0) {
        FVar9 = FVar5;
      }
      if ((ulonglong)FVar9 <= local_38) {
        if (((ulonglong)FVar5 & 1) != 0) {
          FVar5 = (ForAnyElementType)
                  ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
        }
        if ((local_38 <
             (FShaderUniformBufferParameter *)
             ((longlong)FVar5 + (longlong)(this->ParameterCollectionUniformBuffers).ArrayMax * 2))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FMaterialShader *)(*pcVar2)();
          return pFVar6;
        }
      }
      iVar4 = (this->ParameterCollectionUniformBuffers).ArrayNum;
      if (iVar4 == (this->ParameterCollectionUniformBuffers).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x202,&pTVar1->AllocatorInstance,
                           &(this->ParameterCollectionUniformBuffers).ArrayMax);
      }
      (this->ParameterCollectionUniformBuffers).ArrayNum = iVar4 + 1;
      FVar5 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar5 & 1) != 0) {
        FVar5 = (ForAnyElementType)
                ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
      }
      iVar7 = iVar7 + 1;
      *(ushort *)((longlong)FVar5 + (longlong)iVar4 * 2) = local_38[0].BaseIndex;
    } while (iVar7 < (param_1->UniformExpressionSet->ParameterCollections).ArrayNum);
  }
  return this;
}

// FMaterialShader @ 145575d90

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

FMaterialShader * __thiscall FMaterialShader::FMaterialShader(FMaterialShader *this)

{
  FShader::FShader((FShader *)this);
  this->MaterialUniformBuffer = 0xffff;
  (this->VTFeedbackBuffer).BaseIndex = 0;
  (this->ParameterCollectionUniformBuffers).AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterCollectionUniformBuffers).ArrayNum = 0;
  (this->ParameterCollectionUniformBuffers).ArrayMax = 0;
  (this->VTFeedbackBuffer).NumResources = '\0';
  (this->VTFeedbackBuffer).Type = LooseData;
  return this;
}

// GetParameterCollectionBuffer @ 145599d20

FRHIUniformBuffer * __thiscall
FMaterialShader::GetParameterCollectionBuffer
          (FMaterialShader *this,FGuid *param_1,FSceneInterface *param_2)

{
  uint uVar1;
  TRefCountPtr<FRHIUniformBuffer> *pTVar2;
  ulong64 uVar3;
  uint *puVar4;
  uint *puVar5;
  FRHIUniformBuffer *pFVar6;
  longlong lVar7;
  
  if (param_2 != (FSceneInterface *)0x0) {
    pTVar2 = TMapBase<FGuid,TRefCountPtr<FRHIUniformBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>_>
             ::Find((TMapBase<FGuid,TRefCountPtr<FRHIUniformBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>_>
                     *)(param_2 + 0x4a8),param_1);
    pFVar6 = (FRHIUniformBuffer *)0x0;
    if (pTVar2 != (TRefCountPtr<FRHIUniformBuffer> *)0x0) {
      pFVar6 = pTVar2->Reference;
    }
    if (pFVar6 != (FRHIUniformBuffer *)0x0) {
      return pFVar6;
    }
  }
  uVar3 = CityHash64((char *)param_1,0x10);
  if (GDefaultMaterialParameterCollectionInstances._8_4_ !=
      GDefaultMaterialParameterCollectionInstances._52_4_) {
    lVar7 = 0x154c5ccd8;
    if (GDefaultMaterialParameterCollectionInstances._64_8_ != 0) {
      lVar7 = GDefaultMaterialParameterCollectionInstances._64_8_;
    }
    uVar1 = *(uint *)(lVar7 + ((ulonglong)(GDefaultMaterialParameterCollectionInstances._72_4_ - 1)
                              & uVar3 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      while (puVar5 = (uint *)((longlong)(int)uVar1 * 0x20 +
                              GDefaultMaterialParameterCollectionInstances._0_8_),
            ((param_1->D != puVar5[3] || param_1->C != puVar5[2]) || param_1->B != puVar5[1]) ||
            param_1->A != *puVar5) {
        uVar1 = puVar5[6];
        if (uVar1 == 0xffffffff) {
          return (FRHIUniformBuffer *)0x0;
        }
      }
      puVar4 = puVar5 + 4;
      if (puVar5 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      if ((puVar4 != (uint *)0x0) && (*(longlong *)puVar4 != 0)) {
        return *(FRHIUniformBuffer **)(*(longlong *)puVar4 + 0x18);
      }
    }
  }
  return (FRHIUniformBuffer *)0x0;
}

// GetShaderBindings @ 14559e8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterialShader::GetShaderBindings
          (FMaterialShader *this,FSceneInterface *param_1,Type param_2,FMaterialRenderProxy *param_3
          ,FMaterial *param_4,FMeshDrawSingleShaderBindings *param_5)

{
  ushort *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMaterialShaderMap *pFVar6;
  FRHIUniformBuffer *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  void *local_98 [2];
  void *local_88 [2];
  void *local_78 [2];
  void *local_68 [2];
  void *local_58 [2];
  void *local_48 [2];
  
  pFVar6 = FMaterial::GetRenderingThreadShaderMap(param_4);
  if ((((pFVar6 == (FMaterialShaderMap *)0x0) ||
       (pFVar6 = FMaterial::GetRenderingThreadShaderMap(param_4), (int)pFVar6->_padding_ == 0)) ||
      (param_2 != param_4->FeatureLevel)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Material.GetRenderingThreadShaderMap() && Material.GetRenderingThreadShaderMap()->IsValidForRendering() && Material.GetFeatureLevel() == FeatureLevel"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                         ,0x154,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = FMaterial::GetRenderingThreadShaderMap(param_4);
  if ((param_3->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap != pFVar6) {
    (**(code **)(param_4->_padding_ + 0x390))(param_4,local_88);
    (**(code **)(param_3->_padding_ + 0x28))(param_3,local_98);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformExpressionCache.CachedUniformExpressionShaderMap == Material.GetRenderingThreadShaderMap()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                       ,0x158,
                       L"UniformExpressionCache should be up to date, RenderProxy=%s Material=%s FeatureLevel=%d"
                      );
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3->UniformExpressionCache).Elements.UniformBuffer.Reference == (FRHIUniformBuffer *)0x0
     ) {
    (**(code **)(param_4->_padding_ + 0x390))(param_4,local_68);
    (**(code **)(param_3->_padding_ + 0x28))(param_3,local_78);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformExpressionCache.UniformBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                       ,0x159,L"NULL UniformBuffer, RenderProxy=%s Material=%s FeatureLevel=%d");
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->MaterialUniformBuffer).BaseIndex != 0xffff) {
    pFVar7 = (param_3->UniformExpressionCache).Elements.UniformBuffer.Reference;
    if ((pFVar7 == (FRHIUniformBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->MaterialUniformBuffer).BaseIndex == 0xffff) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_5,pFVar7,(uint)(this->MaterialUniformBuffer).BaseIndex);
  }
  iVar2 = (param_3->UniformExpressionCache).Elements.ParameterCollections.ArrayNum;
  if ((this->ParameterCollectionUniformBuffers).ArrayNum < iVar2) {
    if (2 < (byte)LogRenderer._0_1_) {
      (**(code **)(param_4->_padding_ + 0x390))(param_4,local_48);
      (**(code **)(param_3->_padding_ + 0x28))(param_3,local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    if (((this->ParameterCollectionUniformBuffers).ArrayNum < iVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParameterCollectionUniformBuffers.Num() >= ParameterCollectionsNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                           ,0x172,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->ParameterCollectionUniformBuffers).ArrayNum;
  uVar12 = 0;
  iVar9 = (param_3->UniformExpressionCache).Elements.ParameterCollections.ArrayNum;
  if (iVar2 < iVar9) {
    iVar9 = iVar2;
  }
  if (0 < iVar9) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      uVar10 = ~uVar12 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar12 < (param_3->UniformExpressionCache).Elements.ParameterCollections.ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = GetParameterCollectionBuffer
                         (this,(FGuid *)((param_3->UniformExpressionCache).Elements.
                                         ParameterCollections.AllocatorInstance.Data + lVar13),
                          param_1);
      if (pFVar7 == (FRHIUniformBuffer *)0x0) {
        uVar5 = 0;
        if ((int)uVar12 < (param_3->UniformExpressionCache).Elements.ParameterCollections.ArrayNum)
        {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        DumpRegisteredMaterialParameterCollections
                  (param_4,(FGuid *)((param_3->UniformExpressionCache).Elements.ParameterCollections
                                     .AllocatorInstance.Data + lVar13));
      }
      uVar5 = 0;
      if ((int)uVar12 < (this->ParameterCollectionUniformBuffers).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8 = (this->ParameterCollectionUniformBuffers).AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)
                ((longlong)&(this->ParameterCollectionUniformBuffers).AllocatorInstance.field_0x0 +
                ((longlong)FVar8 >> 0x18));
      }
      puVar1 = (ushort *)((longlong)FVar8 + lVar11 * 2);
      if (*puVar1 != 0xffff) {
        if ((pFVar7 == (FRHIUniformBuffer *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                               ,0x8f,L"Attempted to set null uniform buffer"), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*puVar1 == 0xffff) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4717616138333192331>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                               ,0x8b,"IsBound()"), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(param_5,pFVar7,(uint)*puVar1);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar11 < iVar9);
  }
  return;
}

// GetTypeLayout @ 1455b0e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FMaterialShader::GetTypeLayout(FMaterialShader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialShader;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VTFeedbackBuffer";
    DAT_155134cda = Freeze::FindFieldNameLength(L"VTFeedbackBuffer");
    _DAT_155134cb8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155134cc0 = ::TypeBuffer[0x10];
    DAT_155134cc0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134cc0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134cc0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134cc0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134cc0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134cc0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134cc0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134cc8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134cd0 = 0xf2;
    _DAT_155134cd4 = 1;
    _DAT_155134cd8 = 0;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialUniformBuffer";
    DAT_155134caa = Freeze::FindFieldNameLength(L"MaterialUniformBuffer");
    _DAT_155134c88 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155134c90 = ::TypeBuffer[0x10];
    DAT_155134c90_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134c90_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134c90_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134c90_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134c90_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134c90_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134c90_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134c98 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134ca0 = 0xf0;
    _DAT_155134ca4 = 1;
    _DAT_155134ca8 = 0;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterCollectionUniformBuffers";
    DAT_155134c7a = Freeze::FindFieldNameLength(L"ParameterCollectionUniformBuffers");
    if ((DAT_155134097 & 2) == 0) {
      DAT_155134097 = DAT_155134097 | 3;
      _DAT_155134088 = 0x10;
      _DAT_155134038 = L"(TArray<T, AllocatorType>)";
      _DAT_155134050 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155134058 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155134060 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155134068 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155134070 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155134048 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155134090 = 8;
      DAT_155134094 = 0;
      _DAT_15513408c = 0x10;
    }
    _DAT_155134c68 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134c58 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155134c60 = ::TypeBuffer[0x10];
    DAT_155134c60_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134c60_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134c60_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134c60_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134c60_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134c60_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134c60_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155134c70 = 0xe0;
    _DAT_155134c74 = 1;
    _DAT_155134c78 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShader::StaticGetTypeLayout();
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

// InternalDestroy @ 1455b6f80

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
FMaterialShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// SetParameters @ 1455d3470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialShader::SetParameters
          (FMaterialShader *this,FRHIBatchedShaderParameters *param_1,FMaterialRenderProxy *param_2,
          FMaterial *param_3,FSceneView *param_4)

{
  SetParameters(this,param_1,param_2,param_3,param_4->Family->Scene);
  return;
}

// SetParameters @ 1455d3490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShader::SetParameters
          (FMaterialShader *this,FRHIBatchedShaderParameters *param_1,FMaterialRenderProxy *param_2,
          FMaterial *param_3,FSceneInterface *param_4)

{
  short sVar1;
  int iVar2;
  FRHIBatchedShaderParametersAllocator *pFVar3;
  FRHIBatchedShaderParameters *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FMaterialShaderMap *pFVar9;
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *this_01;
  FString *pFVar10;
  FRHIUniformBuffer *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  uint uVar14;
  Type TVar15;
  uint uVar16;
  longlong lVar17;
  ushort local_res18 [4];
  FMaterial *local_res20;
  FRHIUniformBuffer *local_b0;
  longlong local_a8;
  void *local_a0 [2];
  void *local_90 [2];
  FString local_80;
  FString local_70;
  void *local_60 [2];
  void *local_50 [3];
  
  bVar7 = false;
  local_res18[0] = 0;
  local_res18[1] = 0;
  TVar15 = GMaxRHIFeatureLevel;
  if (param_4 != (FSceneInterface *)0x0) {
    TVar15 = param_4->FeatureLevel;
  }
  local_res20 = param_3;
  pFVar9 = FMaterial::GetRenderingThreadShaderMap(param_3);
  if ((pFVar9 == (FMaterialShaderMap *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderMap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                         ,0x107,L"RenderingThreadShaderMap: %i"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)pFVar9->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bValid || !bFailOnInvalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShared.h"
                       ,0x6f2,
                       L"FMaterialShaderMap %s invalid for rendering: bCompilationFinalized: %i, bCompiledSuccessfully: %i, bDeletedThroughDeferredCleanup: %i, FrozenContentSize: %d"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (TVar15 == param_3->FeatureLevel) goto LAB_1455d35c5;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ShaderMap->IsValidForRendering(true) && Material.GetFeatureLevel() == FeatureLevel"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                     ,0x108,L"IsValid:%i, MaterialFeatureLevel:%i, FeatureLevel:%i");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1455d35c5:
  if ((param_2->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap != pFVar9) {
    this_00 = (UObjectBaseUtility *)(**(code **)(param_3->_padding_ + 0x4e0))(param_3);
    this_01 = (UObjectBaseUtility *)(**(code **)(param_2->_padding_ + 0x40))(param_2);
    if ((pFVar9->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FShader::GetType((FShader *)this,(FShaderMapPointerTable *)pFVar9->_padding_);
    if (this_01 != (UObjectBaseUtility *)0x0) {
      pFVar10 = UObjectBaseUtility::GetFullName(this_01,&local_70,(UObject *)0x0,None);
      if ((pFVar10->Data).ArrayNum == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
    }
    if (this_00 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::GetFullName(this_00,&local_80,(UObject *)0x0,None);
    }
    (**(code **)(local_res20->_padding_ + 0x390))(local_res20,local_90);
    (**(code **)(param_2->_padding_ + 0x28))(param_2,local_a0);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                       ,0x11b,
                       L"\'%s\' shader uniform expression set mismatched shader map for material \'%s/%s\'.\nMaterial: \'%s\'\nProxy: \'%s\'\n"
                      );
    if (local_a0[0] != (void *)0x0) {
      FMemory::Free(local_a0[0]);
    }
    if (local_90[0] != (void *)0x0) {
      FMemory::Free(local_90[0]);
    }
    if ((this_00 != (UObjectBaseUtility *)0x0) &&
       (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    param_3 = local_res20;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SetUniformBufferParameter
            (param_1,&this->MaterialUniformBuffer,
             (param_2->UniformExpressionCache).Elements.UniformBuffer.Reference);
  iVar2 = (param_2->UniformExpressionCache).Elements.ParameterCollections.ArrayNum;
  if ((this->ParameterCollectionUniformBuffers).ArrayNum < iVar2) {
    if (2 < (byte)LogRenderer._0_1_) {
      (**(code **)(param_3->_padding_ + 0x390))(param_3,local_50);
      (**(code **)(param_2->_padding_ + 0x28))(param_2,local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      if (local_60[0] != (void *)0x0) {
        FMemory::Free(local_60[0]);
      }
      if (local_50[0] != (void *)0x0) {
        FMemory::Free(local_50[0]);
      }
    }
    if (((this->ParameterCollectionUniformBuffers).ArrayNum < iVar2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParameterCollectionUniformBuffers.Num() >= ParameterCollectionsNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShaderBaseClasses.cpp"
                           ,0x136,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->ParameterCollectionUniformBuffers).ArrayNum;
  uVar16 = 0;
  iVar13 = (param_2->UniformExpressionCache).Elements.ParameterCollections.ArrayNum;
  if (iVar2 < iVar13) {
    iVar13 = iVar2;
  }
  local_a8 = (longlong)iVar13;
  if (0 < iVar13) {
    lVar17 = 0;
    do {
      uVar14 = ~uVar16 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar16 < (param_2->UniformExpressionCache).Elements.ParameterCollections.ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = GetParameterCollectionBuffer
                          (this,(FGuid *)((param_2->UniformExpressionCache).Elements.
                                          ParameterCollections.AllocatorInstance.Data +
                                         (longlong)(int)uVar16 * 0x10),param_4);
      if (pFVar11 == (FRHIUniformBuffer *)0x0) {
        uVar8 = 0;
        if ((int)uVar16 < (param_2->UniformExpressionCache).Elements.ParameterCollections.ArrayNum)
        {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        DumpRegisteredMaterialParameterCollections
                  (local_res20,
                   (FGuid *)((param_2->UniformExpressionCache).Elements.ParameterCollections.
                             AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10));
      }
      uVar8 = 0;
      if ((int)uVar16 < (this->ParameterCollectionUniformBuffers).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (this->ParameterCollectionUniformBuffers).AllocatorInstance;
      if (((ulonglong)FVar12 & 1) != 0) {
        FVar12 = (ForAnyElementType)
                 ((longlong)&(this->ParameterCollectionUniformBuffers).AllocatorInstance.field_0x0 +
                 ((longlong)FVar12 >> 0x18));
      }
      sVar1 = *(short *)((longlong)FVar12 + lVar17 * 2);
      if (sVar1 != -1) {
        pFVar3 = param_1->Allocator;
        pFVar4 = pFVar3->AttachedParameters;
        local_b0 = pFVar11;
        if (pFVar4 != param_1) {
          if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3->AttachedParameters = param_1;
        }
        pFVar3 = param_1->Allocator;
        local_res18[0] = sVar1;
        pFVar4 = pFVar3->AttachedParameters;
        if (pFVar4 != param_1) {
          if ((pFVar4 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3->AttachedParameters = param_1;
        }
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
                  (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                   &param_1->ResourceParameters,&local_b0,local_res18);
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < local_a8);
  }
  return;
}

// SetViewParameters @ 1455d3f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterialShader::SetViewParameters
          (FMaterialShader *this,FRHIBatchedShaderParameters *param_1,FSceneView *param_2,
          TUniformBufferRef<FViewUniformShaderParameters> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  FHashedName FVar2;
  FShaderUniformBufferParameter *pFVar3;
  FHashedName local_res18 [2];
  FHashedName local_28 [2];
  
  pFVar1 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(local_res18,&pFVar1->ShaderVariableHashedName);
  FVar2.Hash = (ulong64)FHashedName::FHashedName(local_28,local_res18);
  pFVar3 = FShader::GetUniformBufferParameter((FShader *)this,FVar2);
  if (pFVar3->BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,pFVar3,(FRHIUniformBuffer *)*param_3);
  }
  if (param_2->bShouldBindInstancedViewUB != false) {
    pFVar1 = FInstancedViewUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(local_res18,&pFVar1->ShaderVariableHashedName);
    FVar2.Hash = (ulong64)FHashedName::FHashedName(local_28,local_res18);
    pFVar3 = FShader::GetUniformBufferParameter((FShader *)this,FVar2);
    if (pFVar3->BaseIndex != 0xffff) {
      SetUniformBufferParameter
                (param_1,pFVar3,(FRHIUniformBuffer *)param_2->InstancedViewUniformBuffer);
    }
  }
  return;
}

// StaticGetTypeLayout @ 1455e5220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialShader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialShader;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "VTFeedbackBuffer";
    DAT_155134cda = Freeze::FindFieldNameLength(L"VTFeedbackBuffer");
    _DAT_155134cb8 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155134cc0 = ::TypeBuffer[0x10];
    DAT_155134cc0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134cc0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134cc0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134cc0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134cc0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134cc0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134cc0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134cc8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134cd0 = 0xf2;
    _DAT_155134cd4 = 1;
    _DAT_155134cd8 = 0;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MaterialUniformBuffer";
    DAT_155134caa = Freeze::FindFieldNameLength(L"MaterialUniformBuffer");
    _DAT_155134c88 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_155134c90 = ::TypeBuffer[0x10];
    DAT_155134c90_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134c90_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134c90_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134c90_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134c90_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134c90_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134c90_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155134c98 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134ca0 = 0xf0;
    _DAT_155134ca4 = 1;
    _DAT_155134ca8 = 0;
    `public:_static_void___cdecl_FMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterCollectionUniformBuffers";
    DAT_155134c7a = Freeze::FindFieldNameLength(L"ParameterCollectionUniformBuffers");
    if ((DAT_155134097 & 2) == 0) {
      DAT_155134097 = DAT_155134097 | 3;
      _DAT_155134088 = 0x10;
      _DAT_155134038 = L"(TArray<T, AllocatorType>)";
      _DAT_155134050 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155134058 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155134060 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155134068 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155134070 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155134048 =
           TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155134090 = 8;
      DAT_155134094 = 0;
      _DAT_15513408c = 0x10;
    }
    _DAT_155134c68 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155134c58 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155134c60 = ::TypeBuffer[0x10];
    DAT_155134c60_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155134c60_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155134c60_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155134c60_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155134c60_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155134c60_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155134c60_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155134c70 = 0xe0;
    _DAT_155134c74 = 1;
    _DAT_155134c78 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShader::StaticGetTypeLayout();
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

