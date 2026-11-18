// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FLightMap2D @ 147ea4dd0

FLightMap2D * __thiscall
FLightMap2D::FLightMap2D(FLightMap2D *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  *(undefined ***)this = &___7FLightMap__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x18 = 1;
  *(undefined4 *)&this->field_0x1c = 0;
  bVar1 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  this->field_0x18 = bVar1;
  *(undefined ***)this = &___7FLightMap2D__6B_;
  *(undefined8 *)&this->ScaleVectors[0].field0_0x0 = 0;
  this->ScaleVectors[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->ScaleVectors[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[3].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[3].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[0].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[2].field0_0x0 + 0xc) = 0x3f800000;
  this->Textures[0].field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  this->Textures[1].field0_0x0 = (TObjectPtr<ULightMapTexture2D>_u_0)0x0;
  *(undefined8 *)((longlong)&this->AddVectors[3].field0_0x0 + 4) = 0;
  this->AddVectors[3].field0_0x0._s_0.W = 1.0;
  (this->SkyOcclusionTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->ShadowMapTexture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 = 0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 0xc) = 0x3f800000;
  this->VirtualTextures[0].field0_0x0.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
  this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)&this->field_0x8,param_1);
  this->Textures[0].field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  this->Textures[1].field0_0x0 = (TObjectPtr<ULightMapTexture2D>_u_0)0x0;
  (this->SkyOcclusionTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->ShadowMapTexture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  this->VirtualTextures[0].field0_0x0.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
  this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
  return this;
}

// FLightMap2D @ 147ea4f20

FLightMap2D * __thiscall FLightMap2D::FLightMap2D(FLightMap2D *this)

{
  bool bVar1;
  
  *(undefined ***)this = &___7FLightMap__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x18 = 1;
  *(undefined4 *)&this->field_0x1c = 0;
  bVar1 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  this->field_0x18 = bVar1;
  *(undefined ***)this = &___7FLightMap2D__6B_;
  *(undefined8 *)&this->ScaleVectors[0].field0_0x0 = 0;
  this->ScaleVectors[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->ScaleVectors[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->ScaleVectors[3].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->ScaleVectors[3].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[0].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->AddVectors[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->AddVectors[3].field0_0x0 + 4) = 0;
  this->AddVectors[3].field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0 = 0;
  (this->InvUniformPenumbraSize).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 0xc) = 0x3f800000;
  this->Textures[0].field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  this->Textures[1].field0_0x0 = (TObjectPtr<ULightMapTexture2D>_u_0)0x0;
  (this->SkyOcclusionTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
  (this->ShadowMapTexture).field0_0x0.DebugPtr = (UShadowMapTexture2D *)0x0;
  this->VirtualTextures[0].field0_0x0.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
  this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
  return this;
}

// AddReferencedObjects @ 147eae8a0

void __thiscall FLightMap2D::AddReferencedObjects(FLightMap2D *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this->Textures,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this->Textures + 1,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SkyOcclusionTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->AOMaterialMaskTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ShadowMapTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this->VirtualTextures,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147eae958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this->VirtualTextures + 1,0,0);
  return;
}

// AllocateInstancedLightMap @ 147eaf220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FLightMap2D> __cdecl
FLightMap2D::AllocateInstancedLightMap
          (UObject *param_1,UInstancedStaticMeshComponent *param_2,
          TArray<TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_>,TSizedDefaultAllocator<32>_>
          *param_3,TArray<TMap<ULightComponent_*,TUniquePtr<FShadowMapData2D,TDefaultDelete<FShadowMapData2D>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,TUniquePtr<FShadowMapData2D,TDefaultDelete<FShadowMapData2D>_>,0>_>,TSizedDefaultAllocator<32>_>
                   *param_4,UMapBuildDataRegistry *param_5,FGuid *param_6,
          TBoxSphereBounds<double,double> *param_7,ELightMapPaddingType param_8,
          ELightMapFlags param_9)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + 8);
  *(undefined8 *)param_1 = 0;
  DestructItems<TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_>,int>
            (*(TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_> **)param_4
             ,iVar1);
  if (*(void **)param_4 != (void *)0x0) {
    FMemory::Free(*(void **)param_4);
  }
  return (TRefCountPtr<FLightMap2D>)(FLightMap2D *)param_1;
}

// AllocateLightMap @ 147eaf430

TRefCountPtr<FLightMap2D> __cdecl
FLightMap2D::AllocateLightMap
          (UObject *param_1,FQuantizedLightmapData **param_2,
          TMap<ULightComponent_*,FShadowMapData2D_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_*,FShadowMapData2D_*,0>_>
          *param_3,TBoxSphereBounds<double,double> *param_4,ELightMapPaddingType param_5,
          ELightMapFlags param_6)

{
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FLightMap2D>)(FLightMap2D *)param_1;
}

// EncodeTextures @ 147eb8c40

void __cdecl
FLightMap2D::EncodeTextures(FStaticLightingBuildContext *param_1,bool param_2,bool param_3)

{
  return;
}

// GetAOMaterialMaskTexture @ 147ebe630

UTexture2D * __thiscall FLightMap2D::GetAOMaterialMaskTexture(FLightMap2D *this)

{
  return (UTexture2D *)(this->AOMaterialMaskTexture).field0_0x0.DebugPtr;
}

// GetInteraction @ 147ec0570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FLightMapInteraction * __thiscall
FLightMap2D::GetInteraction
          (FLightMap2D *this,FLightMapInteraction *__return_storage_ptr__,Type param_1)

{
  bool bVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FStaticShaderPlatform FVar4;
  ulonglong uVar5;
  
  bVar1 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1);
  if (param_1 == Num) {
    FVar4.Platform = SP_NumPlatforms;
  }
  else {
    FVar4.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  uVar5 = (ulonglong)bVar1 ^ 1;
  bVar2 = UseVirtualTextureLightmap(FVar4,(ITargetPlatformSettings *)0x0);
  if (bVar2) {
    if ((this->VirtualTextures[uVar5].field0_0x0.DebugPtr != (ULightMapVirtualTexture2D *)0x0) &&
       ((pFVar3 = UTexture::GetResource
                            ((UTexture *)this->VirtualTextures[uVar5].field0_0x0.DebugPtr),
        pFVar3 != (FTextureResource *)0x0 ||
        (*(char *)((longlong)this->VirtualTextures[uVar5].field0_0x0.DebugPtr + 0x180) != '\0')))) {
      FLightMapInteraction::InitVirtualTexture
                (__return_storage_ptr__,this->VirtualTextures[uVar5].field0_0x0.DebugPtr,
                 this->ScaleVectors,this->AddVectors,&this->CoordinateScale,&this->CoordinateBias,
                 bVar1);
      return __return_storage_ptr__;
    }
  }
  else if ((this->Textures[uVar5].field0_0x0.DebugPtr != (ULightMapTexture2D *)0x0) &&
          (pFVar3 = UTexture::GetResource((UTexture *)this->Textures[uVar5].field0_0x0.DebugPtr),
          pFVar3 != (FTextureResource *)0x0)) {
    FLightMapInteraction::Texture
              (__return_storage_ptr__,(ULightMapTexture2D **)this->Textures,
               (this->SkyOcclusionTexture).field0_0x0.DebugPtr,
               (this->AOMaterialMaskTexture).field0_0x0.DebugPtr,this->ScaleVectors,this->AddVectors
               ,&this->CoordinateScale,&this->CoordinateBias,bVar1);
    return __return_storage_ptr__;
  }
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->SkyOcclusionTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)0x0;
  *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->Type = LMIT_None;
  return __return_storage_ptr__;
}

// GetShadowInteraction @ 147ec60a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FShadowMapInteraction * __thiscall
FLightMap2D::GetShadowInteraction
          (FLightMap2D *this,FShadowMapInteraction *__return_storage_ptr__,Type param_1)

{
  TObjectPtr<ULightMapVirtualTexture2D> TVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  FTextureResource *pFVar6;
  FStaticShaderPlatform FVar7;
  ulonglong uVar8;
  
  bVar4 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1);
  if (param_1 == Num) {
    FVar7.Platform = SP_NumPlatforms;
  }
  else {
    FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  bVar5 = UseVirtualTextureLightmap(FVar7,(ITargetPlatformSettings *)0x0);
  if (bVar5) {
    uVar8 = (ulonglong)bVar4 ^ 1;
    if (this->VirtualTextures[uVar8].field0_0x0.DebugPtr != (ULightMapVirtualTexture2D *)0x0) {
      pFVar6 = UTexture::GetResource((UTexture *)this->VirtualTextures[uVar8].field0_0x0.DebugPtr);
      if ((pFVar6 != (FTextureResource *)0x0) ||
         (*(char *)((longlong)this->VirtualTextures[uVar8].field0_0x0.DebugPtr + 0x180) != '\0')) {
        TVar1.field0_0x0 = this->VirtualTextures[uVar8].field0_0x0;
        __return_storage_ptr__->ShadowTexture = (UShadowMapTexture2D *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 = 0;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8)
             = 0;
        __return_storage_ptr__->bChannelValid[0] = false;
        __return_storage_ptr__->bChannelValid[1] = false;
        __return_storage_ptr__->bChannelValid[2] = false;
        __return_storage_ptr__->bChannelValid[3] = false;
        __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)TVar1.field0_0x0;
        __return_storage_ptr__->Type = SMIT_Texture;
        dVar2 = (this->CoordinateScale).field0_0x0._s_0.Y;
        (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.X =
             (this->CoordinateScale).field0_0x0._s_0.X;
        (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.Y = dVar2;
        dVar2 = (this->CoordinateBias).field0_0x0._s_0.Y;
        (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.X =
             (this->CoordinateBias).field0_0x0._s_0.X;
        (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.Y = dVar2;
        uVar3 = *(undefined8 *)((longlong)&(this->InvUniformPenumbraSize).field0_0x0 + 8);
        *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 =
             *(undefined8 *)&(this->InvUniformPenumbraSize).field0_0x0;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8)
             = uVar3;
        __return_storage_ptr__->bChannelValid[0] = this->bShadowChannelValid[0];
        __return_storage_ptr__->bChannelValid[1] = this->bShadowChannelValid[1];
        __return_storage_ptr__->bChannelValid[2] = this->bShadowChannelValid[2];
        __return_storage_ptr__->bChannelValid[3] = this->bShadowChannelValid[3];
        return __return_storage_ptr__;
      }
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8) = 0;
  __return_storage_ptr__->ShadowTexture = (UShadowMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->bChannelValid[0] = false;
  __return_storage_ptr__->bChannelValid[1] = false;
  __return_storage_ptr__->bChannelValid[2] = false;
  __return_storage_ptr__->bChannelValid[3] = false;
  __return_storage_ptr__->Type = SMIT_None;
  return __return_storage_ptr__;
}

// GetSkyOcclusionTexture @ 147ec6280

UTexture2D * __thiscall FLightMap2D::GetSkyOcclusionTexture(FLightMap2D *this)

{
  return (UTexture2D *)(this->SkyOcclusionTexture).field0_0x0.DebugPtr;
}

// GetTexture @ 147ec6cb0

UTexture2D * __thiscall FLightMap2D::GetTexture(FLightMap2D *this,uint param_1)

{
  return (UTexture2D *)this->Textures[param_1].field0_0x0.DebugPtr;
}

// GetTexture @ 147ec6cc0

UTexture2D * __thiscall FLightMap2D::GetTexture(FLightMap2D *this,uint param_1)

{
  return (UTexture2D *)this->Textures[param_1].field0_0x0.DebugPtr;
}

// IsValid @ 147ecdfd0

bool __thiscall FLightMap2D::IsValid(FLightMap2D *this,uint param_1)

{
  return this->Textures[param_1].field0_0x0.DebugPtr != (ULightMapTexture2D *)0x0;
}

// IsVirtualTextureValid @ 147ece100

bool __thiscall FLightMap2D::IsVirtualTextureValid(FLightMap2D *this)

{
  if (this->VirtualTextures[0].field0_0x0.DebugPtr == (ULightMapVirtualTexture2D *)0x0) {
    return this->VirtualTextures[1].field0_0x0.DebugPtr != (ULightMapVirtualTexture2D *)0x0;
  }
  return true;
}

// Serialize @ 147edab90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FLightMap2D::Serialize(FLightMap2D *this,FArchive *param_1)

{
  TVector4<float>_u_0_s_0 *pTVar1;
  uint *puVar2;
  undefined1 *puVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  FArchive *pFVar18;
  uint uVar19;
  ITargetPlatformSettings *pIVar20;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 TVar21;
  ITargetPlatformSettings *pIVar22;
  TObjectPtr<ULightMapTexture2D>_u_0 *pTVar23;
  TObjectPtr<ULightMapTexture2D>_u_0 *pTVar24;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 *pTVar25;
  undefined1 *puVar26;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 *pTVar27;
  float *pfVar28;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 TVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  uint local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_f8;
  float local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  TObjectPtr<ULightMapTexture2D>_u_0 local_d8;
  TObjectPtr<ULightMapTexture2D>_u_0 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 local_a8;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 local_88;
  TObjectPtr<ULightMapVirtualTexture2D>_u_0 local_80;
  TVector4<double>_u_0 local_78;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar17 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  local_e0 = iVar17;
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FGuid,TSizedDefaultAllocator<32>_> *)&this->field_0x8);
  pIVar20 = (ITargetPlatformSettings *)0x0;
  pIVar22 = pIVar20;
  if (*(longlong *)&param_1->field_0x68 != 0) {
    pIVar22 = *(ITargetPlatformSettings **)(*(longlong *)&param_1->field_0x68 + 8);
  }
  bVar14 = UseVirtualTextureLightmap((FStaticShaderPlatform)GMaxRHIShaderPlatform,pIVar22);
  dVar13 = _UNK_15061cbc8;
  dVar12 = ___xmm_3ff00000000000000000000000000000;
  if ((param_1->field_0x28 & 1) == 0) {
LAB_147edb012:
    lVar30 = *(longlong *)&param_1->field_0x68;
    if ((lVar30 == 0) || (*(longlong *)(lVar30 + 0x10) == 0)) {
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this->Textures);
      pTVar24 = &this->Textures[1].field0_0x0;
    }
    else {
      cVar15 = (**(code **)(**(longlong **)(lVar30 + 8) + 200))(*(longlong **)(lVar30 + 8),5);
      if ((cVar15 == '\0') || (bVar14)) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if (*(longlong *)&param_1->field_0x68 != 0) {
        pIVar20 = *(ITargetPlatformSettings **)(*(longlong *)&param_1->field_0x68 + 8);
      }
      cVar15 = (**(code **)((longlong)*pIVar20 + 200))(pIVar20,4);
      if ((cVar15 == '\0') || (bVar14)) {
        pTVar23 = &local_d8;
      }
      else {
        pTVar23 = &this->Textures[0].field0_0x0;
      }
      local_d8.DebugPtr = (ULightMapTexture2D *)0x0;
      pTVar24 = &local_d8;
      if (!bVar31) {
        pTVar24 = &this->Textures[1].field0_0x0;
      }
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar23);
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar24);
    if (0x147 < *(int *)&param_1->field_0x40) {
      lVar30 = *(longlong *)&param_1->field_0x68;
      if ((lVar30 == 0) || (*(longlong *)(lVar30 + 0x10) == 0)) {
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SkyOcclusionTexture);
        if (0x1dc < *(int *)&param_1->field_0x40) {
LAB_147edb142:
          pTVar24 = &(this->AOMaterialMaskTexture).field0_0x0;
          goto LAB_147edb146;
        }
      }
      else {
        cVar15 = (**(code **)(**(longlong **)(lVar30 + 8) + 200))(*(longlong **)(lVar30 + 8),4);
        if ((cVar15 == '\0') || (bVar14)) {
          bVar31 = true;
          pTVar24 = &local_d0;
        }
        else {
          bVar31 = false;
          pTVar24 = &(this->SkyOcclusionTexture).field0_0x0;
        }
        local_d0.DebugPtr = (ULightMapTexture2D *)0x0;
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar24);
        if (0x1dc < *(int *)&param_1->field_0x40) {
          pTVar24 = &local_d0;
          if (!bVar31) goto LAB_147edb142;
LAB_147edb146:
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar24);
        }
      }
    }
    pfVar28 = &this->ScaleVectors[0].field0_0x0._s_0.Z;
    lVar30 = 4;
    do {
      pTVar1 = (TVector4<float>_u_0_s_0 *)(pfVar28 + -2);
      pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
        }
      }
      else {
        pTVar1->X = *pfVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar4 = pfVar28 + -1;
      pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar4);
        }
      }
      else {
        *pfVar4 = *pfVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar28,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar28);
        }
      }
      else {
        *pfVar28 = *pfVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar4 = pfVar28 + 1;
      pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
      if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar4);
        }
      }
      else {
        *pfVar4 = *pfVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar2 = (uint *)(pfVar28 + 0xe);
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar2);
        }
      }
      else {
        *puVar2 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar2 = (uint *)(pfVar28 + 0xf);
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar2);
        }
      }
      else {
        *puVar2 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar2 = (uint *)(pfVar28 + 0x10);
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar2);
        }
      }
      else {
        *puVar2 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar2 = (uint *)(pfVar28 + 0x11);
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar2);
        }
      }
      else {
        *puVar2 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pfVar28 = pfVar28 + 4;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  else {
    uVar19 = (uint)*(undefined8 *)&param_1->field_0x40;
    if ((int)uVar19 < 0xf7) {
      lVar30 = 3;
      do {
        local_98 = 0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_98);
        local_c8 = 0.0;
        dStack_c0 = 0.0;
        local_b8 = dVar12;
        dStack_b0 = dVar13;
        if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
          if (((param_1->field_0x28 & 1) == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ar.IsLoading()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x272,L"float -> double conversion applied outside of load!"),
             bVar31)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar26 = &param_1->field_0x8;
          plVar9 = *(longlong **)puVar26;
          if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
            }
          }
          else {
            local_res18[0] = *(float *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          puVar3 = &param_1->field_0x2a;
          plVar9 = *(longlong **)puVar26;
          if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
            if ((*puVar3 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
            }
          }
          else {
            local_res20[0] = *(float *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          plVar9 = *(longlong **)puVar26;
          if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
            if ((*puVar3 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_f8);
            }
          }
          else {
            local_f8 = *(float *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          plVar9 = *(longlong **)puVar26;
          if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
            if ((*puVar3 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_f4);
            }
          }
          else {
            local_f4 = *(float *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          local_c8 = (double)local_res18[0];
          dStack_c0 = (double)local_res20[0];
          local_b8 = (double)local_f8;
          dStack_b0 = (double)local_f4;
        }
        else {
          pFVar18 = ::operator<<(param_1,&local_c8);
          pFVar18 = ::operator<<(pFVar18,&dStack_c0);
          pFVar18 = ::operator<<(pFVar18,&local_b8);
          ::operator<<(pFVar18,&dStack_b0);
        }
        puVar26 = &param_1->field_0x2a;
        if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
          if (((param_1->field_0x28 & 1) == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ar.IsLoading()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x272,L"float -> double conversion applied outside of load!"),
             bVar31)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar9 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
            if ((*puVar26 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f0,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_f0);
            }
          }
          else {
            local_f0 = *(uint *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          plVar9 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
            if ((*puVar26 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_ec);
            }
          }
          else {
            local_ec = *(uint *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          plVar9 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
            if ((*puVar26 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e8,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_e8);
            }
          }
          else {
            local_e8 = *(uint *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          plVar9 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
            if ((*puVar26 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e4,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_e4);
            }
          }
          else {
            local_e4 = *(uint *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
        }
        else {
          pFVar18 = ::operator<<(param_1,&local_c8);
          pFVar18 = ::operator<<(pFVar18,&dStack_c0);
          pFVar18 = ::operator<<(pFVar18,&local_b8);
          ::operator<<(pFVar18,&dStack_b0);
        }
        lVar30 = lVar30 + -1;
        iVar17 = local_e0;
      } while (lVar30 != 0);
    }
    else {
      if (0x130 < uVar19) goto LAB_147edb012;
      lVar30 = 4;
      do {
        local_90 = 0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_90);
        local_78._s_0.Z = dVar12;
        local_78._s_0.W = dVar13;
        local_78._s_0.X = 0.0;
        local_78._s_0.Y = 0.0;
        UE::Math::operator<<(param_1,(TVector4<double> *)&local_78._s_0);
        UE::Math::operator<<(param_1,(TVector4<double> *)&local_78._s_0);
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
  }
  TVar29.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
  pFVar18 = UE::Math::operator<<(param_1,&this->CoordinateScale);
  UE::Math::operator<<(pFVar18,&this->CoordinateBias);
  if (iVar17 < 0x1d) {
    if (0x1a < iVar17) goto LAB_147edb61f;
  }
  else {
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    uVar19 = 0;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      local_res10[0] = uVar19;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = (uint)(this->bShadowChannelValid[0] != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bShadowChannelValid[0] = local_res10[0] != 0;
      }
    }
    else {
      this->bShadowChannelValid[0] = *piVar7 != 0;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar8 = *(undefined8 **)&param_1->field_0x8;
    piVar7 = (int *)*puVar8;
    if ((int *)puVar8[1] < piVar7 + 1) {
      local_res10[0] = uVar19;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = (uint)(this->bShadowChannelValid[1] != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bShadowChannelValid[1] = local_res10[0] != 0;
      }
    }
    else {
      this->bShadowChannelValid[1] = *piVar7 != 0;
      plVar9 = *(longlong **)&param_1->field_0x8;
      *plVar9 = *plVar9 + 4;
    }
    puVar8 = *(undefined8 **)&param_1->field_0x8;
    piVar7 = (int *)*puVar8;
    if ((int *)puVar8[1] < piVar7 + 1) {
      local_res10[0] = uVar19;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = (uint)(this->bShadowChannelValid[2] != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bShadowChannelValid[2] = local_res10[0] != 0;
      }
    }
    else {
      this->bShadowChannelValid[2] = *piVar7 != 0;
      plVar9 = *(longlong **)&param_1->field_0x8;
      *plVar9 = *plVar9 + 4;
    }
    puVar8 = *(undefined8 **)&param_1->field_0x8;
    piVar7 = (int *)*puVar8;
    if ((int *)puVar8[1] < piVar7 + 1) {
      local_res10[0] = uVar19;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = (uint)(this->bShadowChannelValid[3] != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bShadowChannelValid[3] = local_res10[0] != 0;
      }
      UE::Math::operator<<(param_1,&this->InvUniformPenumbraSize);
    }
    else {
      this->bShadowChannelValid[3] = *piVar7 != 0;
      plVar9 = *(longlong **)&param_1->field_0x8;
      *plVar9 = *plVar9 + 4;
      UE::Math::operator<<(param_1,&this->InvUniformPenumbraSize);
    }
LAB_147edb61f:
    if (iVar17 < 0x1f) {
      pTVar25 = &local_80;
      local_80.DebugPtr = TVar29.DebugPtr;
LAB_147edb735:
      lVar30 = *(longlong *)param_1;
    }
    else {
      if (0x2c < iVar17) {
        if (bVar14) {
          lVar30 = *(longlong *)&param_1->field_0x68;
          if ((lVar30 == 0) || (*(longlong *)(lVar30 + 0x10) == 0)) {
            (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this->VirtualTextures);
            (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this->VirtualTextures + 1);
          }
          else {
            cVar15 = (**(code **)(**(longlong **)(lVar30 + 8) + 200))(*(longlong **)(lVar30 + 8),5);
            TVar21.DebugPtr = TVar29.DebugPtr;
            if (*(longlong *)&param_1->field_0x68 != 0) {
              TVar21.DebugPtr =
                   ((TObjectPtr<ULightMapVirtualTexture2D>_u_0 *)
                   (*(longlong *)&param_1->field_0x68 + 8))->DebugPtr;
            }
            cVar16 = (**(code **)((TVar21.DebugPtr)->_padding_ + 200))(TVar21.DebugPtr,4);
            pTVar25 = &local_a8;
            if (cVar16 != '\0') {
              pTVar25 = &this->VirtualTextures[0].field0_0x0;
            }
            if (cVar15 == '\0') {
              pTVar27 = &local_a8;
            }
            else {
              pTVar27 = &this->VirtualTextures[1].field0_0x0;
            }
            local_a8.DebugPtr = TVar29.DebugPtr;
            (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar25);
            (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pTVar27);
          }
          goto LAB_147edb74f;
        }
        local_a0.DebugPtr = TVar29.DebugPtr;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_a0);
        pTVar25 = &local_a0;
        goto LAB_147edb735;
      }
      lVar30 = *(longlong *)param_1;
      if (bVar14) {
        (**(code **)(lVar30 + 0x150))(param_1,this->VirtualTextures);
        if ((param_1->field_0x28 & 1) != 0) {
          this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
        }
        goto LAB_147edb74f;
      }
      pTVar25 = &local_88;
      local_88.DebugPtr = TVar29.DebugPtr;
    }
    (**(code **)(lVar30 + 0x168))(param_1,pTVar25);
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147edb74f;
  }
  this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
  this->VirtualTextures[0].field0_0x0.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
LAB_147edb74f:
  fVar11 = __real_3c23d70a;
  bVar31 = (param_1->field_0x28 & 1) == 0;
  if (!bVar31) {
    fVar32 = this->ScaleVectors[2].field0_0x0._s_0.X;
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    this->ScaleVectors[2].field0_0x0._s_0.X = fVar32;
    fVar32 = this->AddVectors[2].field0_0x0._s_0.X;
    if (fVar32 <= fVar11) {
      fVar32 = fVar11;
    }
    this->AddVectors[2].field0_0x0._s_0.X = fVar32;
    fVar32 = this->ScaleVectors[2].field0_0x0._s_0.Y;
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    this->ScaleVectors[2].field0_0x0._s_0.Y = fVar32;
    fVar32 = this->AddVectors[2].field0_0x0._s_0.Y;
    if (fVar32 <= fVar11) {
      fVar32 = fVar11;
    }
    this->AddVectors[2].field0_0x0._s_0.Y = fVar32;
    fVar32 = this->ScaleVectors[2].field0_0x0._s_0.Z;
    if (fVar32 <= 0.0) {
      fVar32 = 0.0;
    }
    this->ScaleVectors[2].field0_0x0._s_0.Z = fVar32;
    fVar32 = this->AddVectors[2].field0_0x0._s_0.Z;
    if (fVar32 <= fVar11) {
      fVar32 = fVar11;
    }
    this->AddVectors[2].field0_0x0._s_0.Z = fVar32;
    bVar31 = (param_1->field_0x28 & 1) == 0;
  }
  if (!bVar31) {
    if (bVar14) {
      this->Textures[0].field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
      this->Textures[1].field0_0x0 = (TObjectPtr<ULightMapTexture2D>_u_0)0x0;
      (this->SkyOcclusionTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
      (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
      return;
    }
    lVar30 = 0x20;
    if (this->field_0x18 != '\0') {
      lVar30 = 0x28;
    }
    *(undefined8 *)(&((FLightMap2D *)(this->Textures + -4))->field_0x0 + lVar30) = 0;
    if (this->field_0x18 == '\0') {
      (this->SkyOcclusionTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
      (this->AOMaterialMaskTexture).field0_0x0.DebugPtr = (ULightMapTexture2D *)0x0;
    }
    this->VirtualTextures[0].field0_0x0.DebugPtr = (ULightMapVirtualTexture2D *)0x0;
    this->VirtualTextures[1].field0_0x0 = (TObjectPtr<ULightMapVirtualTexture2D>_u_0)0x0;
  }
  return;
}

