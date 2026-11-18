// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Bind @ 147c38640

void __thiscall
FGeometryCacheVertexFactoryShaderParameters::Bind
          (FGeometryCacheVertexFactoryShaderParameters *this,FShaderParameterMap *param_1)

{
  FShaderParameter::Bind(&this->MeshOrigin,param_1,L"MeshOrigin",SPF_Optional);
  FShaderParameter::Bind(&this->MeshExtension,param_1,L"MeshExtension",SPF_Optional);
  FShaderParameter::Bind(&this->MotionBlurDataOrigin,param_1,L"MotionBlurDataOrigin",SPF_Optional);
  FShaderParameter::Bind
            (&this->MotionBlurDataExtension,param_1,L"MotionBlurDataExtension",SPF_Optional);
  FShaderParameter::Bind
            (&this->MotionBlurPositionScale,param_1,L"MotionBlurPositionScale",SPF_Optional);
  return;
}

// GetElementShaderBindings @ 147c56580

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
FGeometryCacheVertexFactoryShaderParameters::GetElementShaderBindings
          (FGeometryCacheVertexFactoryShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  longlong *plVar1;
  longlong *plVar2;
  ForElementType<FVertexInputStream> FVar3;
  FRHIUniformBuffer *pFVar4;
  code *pcVar5;
  FVertexFactory *pFVar6;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar7;
  int iVar8;
  FVertexFactoryType *pFVar9;
  ForElementType<FVertexInputStream> FVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<FVertexInputStream> FVar14;
  undefined4 local_res8;
  ushort local_resc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_98;
  ushort local_94;
  undefined4 local_88;
  ushort local_84;
  undefined4 local_78;
  ushort local_74;
  FHashedName local_68;
  FHashedName local_60;
  FHashedName local_58;
  FHashedName local_50;
  void *local_48 [2];
  void *local_38 [2];
  
  pFVar6 = param_6;
  pFVar9 = (FVertexFactoryType *)(**(code **)(param_6->_padding_ + 0x30))(param_6);
  if ((pFVar9 != &FGeometryCacheVertexVertexFactory::StaticType) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GenericVertexFactory->GetType() == &FGeometryCacheVertexVertexFactory::StaticType"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                         ,0x37,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = param_7->VertexFactoryUserData;
  plVar2 = (longlong *)*plVar1;
  if ((int)plVar2[3] == -1) {
    (**(code **)(*plVar2 + 0x28))(plVar2,local_48);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BatchData->PositionBuffer->IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x3d,L"Batch position Vertex buffer was not initialized! Name %s");
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar2 = (longlong *)plVar1[1];
  if ((int)plVar2[3] == -1) {
    (**(code **)(*plVar2 + 0x28))(plVar2,local_38);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BatchData->MotionBlurDataBuffer->IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x3e,L"Batch motion blur data buffer was not initialized! Name %s");
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar14 = (ForElementType<FVertexInputStream>)param_9;
  FVar3 = (param_9->AllocatorInstance).SecondaryData;
  local_b8 = *(uint *)(pFVar6[1].Streams.AllocatorInstance.InlineData + 8) & 0xf;
  uStack_b4 = (undefined4)*(undefined8 *)(*plVar1 + 0x20);
  uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)(*plVar1 + 0x20) >> 0x20);
  FVar10 = (ForElementType<FVertexInputStream>)param_9;
  if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
    FVar10 = FVar3;
  }
  if ((ulonglong)FVar10 <= &local_b8) {
    FVar10 = (ForElementType<FVertexInputStream>)param_9;
    if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
      FVar10 = FVar3;
    }
    if ((&local_b8 < (uint *)((longlong)FVar10 + (longlong)param_9->ArrayMax * 0xc)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)
          FVar14)->ArrayNum;
  if (iVar8 == ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar14)->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                      (0x40c,(ForElementType<FVertexInputStream> *)FVar14,
                       &((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                          *)FVar14)->ArrayMax);
  }
  ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)FVar14)->
  ArrayNum = iVar8 + 1;
  FVar3 = (((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)
           FVar14)->AllocatorInstance).SecondaryData;
  FVar10 = FVar14;
  if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
    FVar10 = FVar3;
  }
  *(ulonglong *)((longlong)FVar10 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_b4,local_b8);
  *(undefined4 *)((uchar *)((longlong)FVar10 + 8) + (longlong)iVar8 * 0xc) = uStack_b0;
  FVar3 = (((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)
           FVar14)->AllocatorInstance).SecondaryData;
  local_ac = *(uint *)(pFVar6[1].Streams.AllocatorInstance.InlineData + 0xc) & 0xf;
  uStack_a8 = (undefined4)*(undefined8 *)(plVar1[1] + 0x20);
  uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(plVar1[1] + 0x20) >> 0x20);
  FVar10 = FVar14;
  if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
    FVar10 = FVar3;
  }
  if ((ulonglong)FVar10 <= &local_ac) {
    FVar10 = FVar14;
    if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
      FVar10 = FVar3;
    }
    if ((&local_ac <
         (uint *)((longlong)FVar10 +
                 (longlong)
                 ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar14)->ArrayMax * 0xc)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)
          FVar14)->ArrayNum;
  if (iVar8 == ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar14)->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                      (0x40c,(ForElementType<FVertexInputStream> *)FVar14,
                       &((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                          *)FVar14)->ArrayMax);
  }
  this_00 = param_8;
  ((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)FVar14)->
  ArrayNum = iVar8 + 1;
  FVar3 = (((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *)
           FVar14)->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
    FVar14 = FVar3;
  }
  *(ulonglong *)((longlong)FVar14 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_a8,local_ac);
  *(undefined4 *)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar8 * 0xc) = uStack_a4;
  param_6._0_2_ = (this->MeshOrigin).BufferIndex;
  param_6._2_2_ = (this->MeshOrigin).BaseIndex;
  param_6._4_2_ = (this->MeshOrigin).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            (param_8,SUB86(&param_6,0),(TVector<float> *)(plVar1 + 2));
  local_res8._0_2_ = (this->MeshExtension).BufferIndex;
  local_res8._2_2_ = (this->MeshExtension).BaseIndex;
  local_resc = (this->MeshExtension).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            (this_00,SUB86(&local_res8,0),(TVector<float> *)((longlong)plVar1 + 0x1c));
  local_98._0_2_ = (this->MotionBlurDataOrigin).BufferIndex;
  local_98._2_2_ = (this->MotionBlurDataOrigin).BaseIndex;
  local_94 = (this->MotionBlurDataOrigin).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            (this_00,SUB86(&local_98,0),(TVector<float> *)(plVar1 + 5));
  local_88._0_2_ = (this->MotionBlurDataExtension).BufferIndex;
  local_88._2_2_ = (this->MotionBlurDataExtension).BaseIndex;
  local_84 = (this->MotionBlurDataExtension).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
            (this_00,SUB86(&local_88,0),(TVector<float> *)((longlong)plVar1 + 0x34));
  local_78._0_2_ = (this->MotionBlurPositionScale).BufferIndex;
  local_78._2_2_ = (this->MotionBlurPositionScale).BaseIndex;
  local_74 = (this->MotionBlurPositionScale).NumBytes;
  FMeshDrawSingleShaderBindings::Add<float>(this_00,SUB86(&local_78,0),(float *)(plVar1 + 8));
  pFVar11 = FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_68,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_58,&local_68);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar12);
  if (pFVar13->BaseIndex != 0xffff) {
    if (plVar1[9] == 0) {
      FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata();
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((pFVar13->BaseIndex == 0xffff) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)plVar1[9],(uint)pFVar13->BaseIndex);
  }
  pFVar4 = (FRHIUniformBuffer *)plVar1[0x10];
  pFVar11 = FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_60,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_50,&local_60);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar12);
  if (pFVar13->BaseIndex != 0xffff) {
    if ((pFVar4 == (FRHIUniformBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pFVar13->BaseIndex == 0xffff) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,pFVar4,(uint)pFVar13->BaseIndex);
  }
  return;
}

// GetTypeLayout @ 147c5ce50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FGeometryCacheVertexFactoryShaderParameters::GetTypeLayout
          (FGeometryCacheVertexFactoryShaderParameters *this)

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
    ::TypeBuffer._8_8_ = u_FGeometryCacheV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGeometryCacheVertexFactoryShaderParameters,0>::Do
    ;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurPositionScale";
    DAT_15520ad52 = Freeze::FindFieldNameLength(L"MotionBlurPositionScale");
    _DAT_15520ad30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ad38 = ::TypeBuffer[0x10];
    DAT_15520ad38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ad38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ad38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ad38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ad38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ad38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ad38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ad40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ad48 = 0x1c;
    _DAT_15520ad4c = 1;
    _DAT_15520ad50 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurDataExtension";
    DAT_15520ad22 = Freeze::FindFieldNameLength(L"MotionBlurDataExtension");
    _DAT_15520ad00 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ad08 = ::TypeBuffer[0x10];
    DAT_15520ad08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ad08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ad08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ad08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ad08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ad08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ad08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ad10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ad18 = 0x16;
    _DAT_15520ad1c = 1;
    _DAT_15520ad20 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurDataOrigin";
    DAT_15520acf2 = Freeze::FindFieldNameLength(L"MotionBlurDataOrigin");
    _DAT_15520acd0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520acd8 = ::TypeBuffer[0x10];
    DAT_15520acd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520acd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520acd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520acd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520acd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520acd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520acd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ace0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ace8 = 0x10;
    _DAT_15520acec = 1;
    _DAT_15520acf0 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MeshExtension";
    DAT_15520acc2 = Freeze::FindFieldNameLength(L"MeshExtension");
    _DAT_15520aca0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520aca8 = ::TypeBuffer[0x10];
    DAT_15520aca8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520aca8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520aca8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520aca8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520aca8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520aca8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520aca8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520acb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520acb8 = 10;
    _DAT_15520acbc = 1;
    _DAT_15520acc0 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MeshOrigin";
    DAT_15520ac92 = Freeze::FindFieldNameLength(L"MeshOrigin");
    _DAT_15520ac70 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ac78 = ::TypeBuffer[0x10];
    DAT_15520ac78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ac78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ac78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ac78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ac78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ac78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ac78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520ac80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ac88 = 4;
    _DAT_15520ac8c = 1;
    _DAT_15520ac90 = 0;
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

// InternalDestroy @ 147c68030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FGeometryCacheVertexFactoryShaderParameters::InternalDestroy
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

// StaticGetTypeLayout @ 147c876a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FGeometryCacheVertexFactoryShaderParameters::StaticGetTypeLayout(void)

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
    ::TypeBuffer._8_8_ = u_FGeometryCacheV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FGeometryCacheVertexFactoryShaderParameters,0>::Do
    ;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurPositionScale";
    DAT_15520ad52 = Freeze::FindFieldNameLength(L"MotionBlurPositionScale");
    _DAT_15520ad30 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ad38 = ::TypeBuffer[0x10];
    DAT_15520ad38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ad38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ad38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ad38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ad38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ad38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ad38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ad40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ad48 = 0x1c;
    _DAT_15520ad4c = 1;
    _DAT_15520ad50 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurDataExtension";
    DAT_15520ad22 = Freeze::FindFieldNameLength(L"MotionBlurDataExtension");
    _DAT_15520ad00 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ad08 = ::TypeBuffer[0x10];
    DAT_15520ad08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ad08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ad08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ad08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ad08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ad08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ad08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ad10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ad18 = 0x16;
    _DAT_15520ad1c = 1;
    _DAT_15520ad20 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MotionBlurDataOrigin";
    DAT_15520acf2 = Freeze::FindFieldNameLength(L"MotionBlurDataOrigin");
    _DAT_15520acd0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520acd8 = ::TypeBuffer[0x10];
    DAT_15520acd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520acd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520acd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520acd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520acd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520acd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520acd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520ace0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ace8 = 0x10;
    _DAT_15520acec = 1;
    _DAT_15520acf0 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MeshExtension";
    DAT_15520acc2 = Freeze::FindFieldNameLength(L"MeshExtension");
    _DAT_15520aca0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520aca8 = ::TypeBuffer[0x10];
    DAT_15520aca8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520aca8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520aca8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520aca8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520aca8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520aca8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520aca8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15520acb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520acb8 = 10;
    _DAT_15520acbc = 1;
    _DAT_15520acc0 = 0;
    `public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MeshOrigin";
    DAT_15520ac92 = Freeze::FindFieldNameLength(L"MeshOrigin");
    _DAT_15520ac70 = FShaderParameter::StaticGetTypeLayout();
    DAT_15520ac78 = ::TypeBuffer[0x10];
    DAT_15520ac78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15520ac78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15520ac78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15520ac78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15520ac78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15520ac78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15520ac78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FGeometryCacheVertexFactoryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15520ac80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15520ac88 = 4;
    _DAT_15520ac8c = 1;
    _DAT_15520ac90 = 0;
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

