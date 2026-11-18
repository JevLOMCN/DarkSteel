// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// ConstructCompiledInstance @ 144bb4230

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
FDeferredLightVS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb4ea0

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

FShader * __cdecl FDeferredLightVS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetFullScreenRectParameters @ 144bc58b0

FDrawFullScreenRectangleParameters * __cdecl
FDeferredLightVS::GetFullScreenRectParameters
          (FDrawFullScreenRectangleParameters *__return_storage_ptr__,float param_1,float param_2,
          float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,
          TIntPoint<int> param_9,TIntPoint<int> param_10)

{
  float fVar1;
  
  (__return_storage_ptr__->PosScaleBias).field0_0x0._s_0.Y = param_4;
  (__return_storage_ptr__->UVScaleBias).field0_0x0._s_0.X = param_7;
  (__return_storage_ptr__->UVScaleBias).field0_0x0._s_0.Z = param_5;
  (__return_storage_ptr__->PosScaleBias).field0_0x0._s_0.Z = param_1;
  (__return_storage_ptr__->UVScaleBias).field0_0x0._s_0.Y = param_8;
  (__return_storage_ptr__->UVScaleBias).field0_0x0._s_0.W = param_6;
  (__return_storage_ptr__->PosScaleBias).field0_0x0._s_0.W = param_2;
  (__return_storage_ptr__->PosScaleBias).field0_0x0._s_0.X = param_3;
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->InvTargetSizeAndTextureSize).field0_0x0._s_0.X =
       __real_3f800000 / (float)param_9.field0_0x0._0_4_;
  (__return_storage_ptr__->InvTargetSizeAndTextureSize).field0_0x0._s_0.Y =
       fVar1 / (float)param_9.field0_0x0._4_4_;
  (__return_storage_ptr__->InvTargetSizeAndTextureSize).field0_0x0._s_0.Z =
       fVar1 / (float)param_10.field0_0x0._0_4_;
  (__return_storage_ptr__->InvTargetSizeAndTextureSize).field0_0x0._s_0.W =
       fVar1 / (float)param_10.field0_0x0._4_4_;
  return __return_storage_ptr__;
}

// GetParameters @ 144bc6ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FParameters * __cdecl
FDeferredLightVS::GetParameters
          (FParameters *__return_storage_ptr__,FViewInfo *param_1,TSphere<double> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FShaderParametersMetadata *pFVar15;
  EUniformBufferBindingFlags EVar16;
  float fVar17;
  undefined7 uStack_4f;
  
  dVar1 = (param_2->Center).field0_0x0._s_0.X;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (param_2->Center).field0_0x0._s_0.Y;
  dVar5 = (double)param_1->_padding_;
  fVar17 = (float)param_2->W * __real_3f8483ee;
  dVar6 = (param_2->Center).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->View = 0;
  (__return_storage_ptr__->View).field_0x8 = 1;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 0xc
   ) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0._s_0.W = 1.0;
  if (param_3) {
    pFVar15 = FViewUniformShaderParameters::GetStructMetadata();
    EVar16 = Static;
    if (pFVar15->BindingFlags != StaticAndShader) {
      EVar16 = pFVar15->BindingFlags;
    }
    *(longlong *)&__return_storage_ptr__->View = param_1->_padding_;
    *(ulonglong *)&(__return_storage_ptr__->View).field_0x8 = CONCAT71(uStack_4f,EVar16);
  }
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar10 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar9 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  (__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0._s_0.X =
       (float)(dVar1 + dVar3);
  (__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0._s_0.Y =
       (float)(dVar2 + dVar4);
  (__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0._s_0.Z =
       (float)(dVar5 + dVar6);
  (__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0._s_0.W = fVar17;
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 8) = 0;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] = uVar7;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] + 2) = uVar8;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] = uVar9;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] + 2) = uVar10;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] = uVar11;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] + 2) = uVar12;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 8) =
       0;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] = uVar13;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] + 2) = uVar14;
  uVar8 = _UNK_15076b1f8;
  uVar7 = ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 8) =
       0;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 =
       uVar7;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 8)
       = uVar8;
  return __return_storage_ptr__;
}

// GetParameters @ 144bc7080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FParameters * __cdecl
FDeferredLightVS::GetParameters
          (FParameters *__return_storage_ptr__,FViewInfo *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8,float param_9,
          TIntPoint<int> param_10,TIntPoint<int> param_11,bool param_12)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FShaderParametersMetadata *pFVar10;
  EUniformBufferBindingFlags EVar11;
  undefined7 uStack_2f;
  
  *(undefined8 *)&__return_storage_ptr__->View = 0;
  (__return_storage_ptr__->View).field_0x8 = 1;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 0xc
   ) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0._s_0.W = 1.0;
  if (param_12) {
    pFVar10 = FViewUniformShaderParameters::GetStructMetadata();
    EVar11 = Static;
    if (pFVar10->BindingFlags != StaticAndShader) {
      EVar11 = pFVar10->BindingFlags;
    }
    *(longlong *)&__return_storage_ptr__->View = param_1->_padding_;
    *(ulonglong *)&(__return_storage_ptr__->View).field_0x8 = CONCAT71(uStack_2f,EVar11);
  }
  uVar9 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar4 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar3 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  uVar2 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 8) = 0;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] = uVar2;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] + 2) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] = uVar4;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] + 2) = uVar5;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] = uVar6;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] + 2) = uVar7;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] = uVar8;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] + 2) = uVar9;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.X = param_4;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Y = param_5;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Z = param_2;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.W = param_3;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.X = param_8;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.Y = param_9;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.Z = param_6;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.W = param_7;
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.X =
       __real_3f800000 / (float)param_10.field0_0x0._s_0.X;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.Y =
       fVar1 / (float)param_10.field0_0x0._s_0.Y;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.Z =
       fVar1 / (float)param_11.field0_0x0._s_0.X;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.W =
       fVar1 / (float)param_11.field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// GetParameters @ 144bc7240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FParameters * __cdecl
FDeferredLightVS::GetParameters
          (FParameters *__return_storage_ptr__,FViewInfo *param_1,FLightSceneInfo *param_2,
          bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FShaderParametersMetadata *pFVar5;
  FParameters *pFVar6;
  EUniformBufferBindingFlags EVar7;
  undefined7 uStack_6f;
  FParameters local_68;
  
  (__return_storage_ptr__->View).field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->View = 0;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 0xc
   ) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0._s_0.W = 1.0;
  if (param_3) {
    pFVar5 = FViewUniformShaderParameters::GetStructMetadata();
    EVar7 = Static;
    if (pFVar5->BindingFlags != StaticAndShader) {
      EVar7 = pFVar5->BindingFlags;
    }
    *(longlong *)&__return_storage_ptr__->View = param_1->_padding_;
    *(ulonglong *)&(__return_storage_ptr__->View).field_0x8 = CONCAT71(uStack_6f,EVar7);
  }
  pFVar6 = FStencilingGeometryShaderParameters::GetParameters
                     (&local_68,(FSceneView *)param_1,param_2);
  uVar1 = *(undefined8 *)((longlong)&(pFVar6->StencilingGeometryPosAndScale).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 =
       *(undefined8 *)&(pFVar6->StencilingGeometryPosAndScale).field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 8) =
       uVar1;
  uVar1 = *(undefined8 *)((longlong)&(pFVar6->StencilingConeParameters).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 =
       *(undefined8 *)&(pFVar6->StencilingConeParameters).field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((pFVar6->StencilingConeTransform).M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] =
       *(undefined8 *)(pFVar6->StencilingConeTransform).M[0];
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)((pFVar6->StencilingConeTransform).M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] =
       *(undefined8 *)(pFVar6->StencilingConeTransform).M[1];
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)((pFVar6->StencilingConeTransform).M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] =
       *(undefined8 *)(pFVar6->StencilingConeTransform).M[2];
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] + 2) = uVar1;
  uVar4 = _UNK_15076b1f8;
  uVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar1 = *(undefined8 *)(pFVar6->StencilingConeTransform).M[3];
  uVar2 = *(undefined8 *)((pFVar6->StencilingConeTransform).M[3] + 2);
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 8) =
       0;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] = uVar1;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] + 2) = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 8) =
       0;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 =
       uVar3;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 8)
       = uVar4;
  return __return_storage_ptr__;
}

// GetParameters @ 144bc7350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FParameters * __cdecl
FDeferredLightVS::GetParameters(FParameters *__return_storage_ptr__,FViewInfo *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FShaderParametersMetadata *pFVar14;
  EUniformBufferBindingFlags EVar15;
  TIntPoint<int>_u_0 *pTVar16;
  float fVar17;
  float fVar18;
  undefined7 uStack_f;
  
  (__return_storage_ptr__->View).field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->View = 0;
  *(undefined8 *)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0 + 0xc
   ) = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0._s_0.W = 1.0;
  if (param_2) {
    pFVar14 = FViewUniformShaderParameters::GetStructMetadata();
    EVar15 = Static;
    if (pFVar14->BindingFlags != StaticAndShader) {
      EVar15 = pFVar14->BindingFlags;
    }
    *(longlong *)&__return_storage_ptr__->View = param_1->_padding_;
    *(ulonglong *)&(__return_storage_ptr__->View).field_0x8 = CONCAT71(uStack_f,EVar15);
  }
  uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar10 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar9 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingGeometryPosAndScale.field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 = 0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->Geometry).StencilingConeParameters.field0_0x0 + 8) = 0;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] = uVar6;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[0] + 2) = uVar7;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] = uVar8;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[1] + 2) = uVar9;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] = uVar10;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[2] + 2) = uVar11;
  *(undefined8 *)(__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] = uVar12;
  *(undefined8 *)((__return_storage_ptr__->Geometry).StencilingConeTransform.M[3] + 2) = uVar13;
  if (*(char *)(param_1->_padding_ + 200) == '\0') {
    pTVar16 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  else {
    pTVar16 = (TIntPoint<int>_u_0 *)(param_1->_padding_ + 0x1c8);
  }
  iVar1 = *(int *)&(param_1->ViewRect).field0_0x0;
  iVar2 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4);
  TVar4 = pTVar16->_s_0;
  iVar3 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc);
  fVar17 = (float)(*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) - iVar1);
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.X = fVar17;
  fVar18 = (float)(iVar3 - iVar2);
  (__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0._s_0.Y = fVar18;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->FullScreenRect).PosScaleBias.field0_0x0 + 8) =
       0;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.X = fVar17;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.Y = fVar18;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.Z = (float)iVar1;
  (__return_storage_ptr__->FullScreenRect).UVScaleBias.field0_0x0._s_0.W = (float)iVar2;
  fVar5 = __real_3f800000;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.X =
       __real_3f800000 / fVar17;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.Y =
       fVar5 / fVar18;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.Z =
       fVar5 / (float)TVar4.X;
  (__return_storage_ptr__->FullScreenRect).InvTargetSizeAndTextureSize.field0_0x0._s_0.W =
       fVar5 / (float)TVar4.Y;
  return __return_storage_ptr__;
}

// GetStaticType @ 144bcb850

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

FGlobalShaderType * __cdecl FDeferredLightVS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FDeferredLightVS",
                 L"/Engine/Private/DeferredLightVertexShaders.usf",L"VertexMain",0,2,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DeferredLightVertexShaders.usf");
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
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
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FDeferredLightVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144bcf920

FTypeLayoutDesc * __thiscall FDeferredLightVS::GetTypeLayout(FDeferredLightVS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredLightV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredLightVS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

// InternalDestroy @ 144bd0a10

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
FDeferredLightVS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ModifyCompilationEnvironment @ 144bd4f60

void __cdecl
FDeferredLightVS::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  return;
}

// ShouldCompilePermutation @ 144be3790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredLightVS::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  uVar2 = *(uint *)&param_1->field_0x4;
  iVar6 = (int)uVar2 % 2;
  if (((iVar6 != 0) && (iVar6 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((int)uVar2 / 2 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((1 < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (iVar6 == 1) {
    uVar1 = *(ushort *)param_1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel < 3) &&
       (((FReadOnlyCVARCache::bMobileDeferredShadingValue == false ||
         (FReadOnlyCVARCache::bMobileHDR == false)) &&
        (bVar4 = MobileLocalLightsBufferEnabled((FStaticShaderPlatform)*(EShaderPlatform *)param_1),
        !bVar4)))) {
      return bVar4;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 144be47f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDeferredLightVS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  uVar2 = param_1->PermutationId;
  iVar6 = (int)uVar2 % 2;
  if (((iVar6 != 0) && (iVar6 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((int)uVar2 / 2 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((1 < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (iVar6 == 1) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel < 3) &&
       (((FReadOnlyCVARCache::bMobileDeferredShadingValue == false ||
         (FReadOnlyCVARCache::bMobileHDR == false)) &&
        (bVar4 = MobileLocalLightsBufferEnabled((FStaticShaderPlatform)param_1->Platform), !bVar4)))
       ) {
      return bVar4;
    }
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 144be4d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FDeferredLightVS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144be6f80

FTypeLayoutDesc * __cdecl FDeferredLightVS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FDeferredLightV;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDeferredLightVS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

