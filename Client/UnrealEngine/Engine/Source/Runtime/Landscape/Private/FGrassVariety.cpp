// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// StaticStruct @ 145ef15d0

UScriptStruct * __cdecl FGrassVariety::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGrassVariety.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FGrassVariety.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGrassVariety,(UObject *)pUVar1,L"GrassVariety");
  }
  return Z_Registration_Info_UScriptStruct_FGrassVariety.OuterSingleton;
}

// ~FGrassVariety @ 145ef4120

void __thiscall FGrassVariety::~FGrassVariety(FGrassVariety *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EndCullDistanceQuality).PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EndCullDistanceQuality).PerQuality);
  pvVar1 = (void *)(this->EndCullDistanceQuality)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StartCullDistanceQuality).PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StartCullDistanceQuality).PerQuality);
  pvVar1 = (void *)(this->StartCullDistanceQuality)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->GrassDensityQuality).PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->GrassDensityQuality).PerQuality);
  pvVar1 = (void *)(this->GrassDensityQuality)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FGrassVariety @ 145f419e0

FGrassVariety * __thiscall FGrassVariety::FGrassVariety(FGrassVariety *this,FGrassVariety *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar3;
  int iVar4;
  float fVar5;
  UStaticMesh *pUVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar6 = (param_1->GrassMesh).field0_0x0.DebugPtr;
  (this->GrassMesh).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->OverrideMaterials;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverrideMaterials).ArrayMax;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pFVar7 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar7,iVar4);
  }
  (this->GrassDensity).Default = (param_1->GrassDensity).Default;
  ::FString::FString((FString *)&this->GrassDensityQuality,(FString *)&param_1->GrassDensityQuality)
  ;
  fVar5 = (param_1->GrassDensityQuality).Default;
  this_00 = &(this->GrassDensityQuality).PerQuality;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x20 = 0;
  (this->GrassDensityQuality).Default = fVar5;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x48 = 0;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)this_00,
             (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)&(param_1->GrassDensityQuality).PerQuality);
  this->bUseGrid = param_1->bUseGrid;
  this->PlacementJitter = param_1->PlacementJitter;
  (this->StartCullDistance).Default = (param_1->StartCullDistance).Default;
  ::FString::FString((FString *)&this->StartCullDistanceQuality,
                     (FString *)&param_1->StartCullDistanceQuality);
  iVar4 = (param_1->StartCullDistanceQuality).Default;
  pTVar3 = &(this->StartCullDistanceQuality).PerQuality;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x20 = 0;
  (this->StartCullDistanceQuality).Default = iVar4;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             pTVar3,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&(param_1->StartCullDistanceQuality).PerQuality);
  (this->EndCullDistance).Default = (param_1->EndCullDistance).Default;
  ::FString::FString((FString *)&this->EndCullDistanceQuality,
                     (FString *)&param_1->EndCullDistanceQuality);
  iVar4 = (param_1->EndCullDistanceQuality).Default;
  pTVar3 = &(this->EndCullDistanceQuality).PerQuality;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x20 = 0;
  (this->EndCullDistanceQuality).Default = iVar4;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             pTVar3,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&(param_1->EndCullDistanceQuality).PerQuality);
  this->MinLOD = param_1->MinLOD;
  this->AllowedDensityRange = param_1->AllowedDensityRange;
  this->Scaling = param_1->Scaling;
  this->ScaleX = param_1->ScaleX;
  this->ScaleY = param_1->ScaleY;
  this->ScaleZ = param_1->ScaleZ;
  this->bWeightAttenuatesMaxScale = param_1->bWeightAttenuatesMaxScale;
  this->MaxScaleWeightAttenuation = param_1->MaxScaleWeightAttenuation;
  this->RandomRotation = param_1->RandomRotation;
  this->AlignToSurface = param_1->AlignToSurface;
  this->bAlignToTriangleNormals = param_1->bAlignToTriangleNormals;
  this->bUseLandscapeLightmap = param_1->bUseLandscapeLightmap;
  this->LightingChannels = param_1->LightingChannels;
  this->bReceivesDecals = param_1->bReceivesDecals;
  this->bAffectDistanceFieldLighting = param_1->bAffectDistanceFieldLighting;
  this->bCastDynamicShadow = param_1->bCastDynamicShadow;
  this->bCastContactShadow = param_1->bCastContactShadow;
  this->bKeepInstanceBufferCPUCopy = param_1->bKeepInstanceBufferCPUCopy;
  this->InstanceWorldPositionOffsetDisableDistance =
       param_1->InstanceWorldPositionOffsetDisableDistance;
  this->ShadowCacheInvalidationBehavior = param_1->ShadowCacheInvalidationBehavior;
  return this;
}

// FGrassVariety @ 145f41cf0

FGrassVariety * __thiscall FGrassVariety::FGrassVariety(FGrassVariety *this)

{
  FPerQualityLevelFloat *pFVar1;
  FPerQualityLevelInt *pFVar2;
  FPerQualityLevelInt *pFVar3;
  FLightingChannels *pFVar4;
  FLightingChannels *pFVar5;
  FString *pFVar6;
  FString local_28;
  
  (this->GrassDensity).Default = 400.0;
  pFVar1 = &this->GrassDensityQuality;
  pFVar2 = &this->StartCullDistanceQuality;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  pFVar3 = &this->EndCullDistanceQuality;
  (this->GrassDensityQuality)._padding_ = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x8 = 0;
  (this->GrassMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->GrassDensityQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->GrassDensityQuality).PerQuality.field_0x48 = 0;
  (this->GrassDensityQuality).Default = 400.0;
  (this->StartCullDistance).Default = 10000;
  (this->StartCullDistanceQuality)._padding_ = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x8 = 0;
  this->bUseGrid = true;
  this->PlacementJitter = 1.0;
  pFVar2->_padding_ = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->StartCullDistanceQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->StartCullDistanceQuality).PerQuality.field_0x48 = 0;
  (this->StartCullDistanceQuality).Default = 10000;
  (this->EndCullDistance).Default = 10000;
  (this->EndCullDistanceQuality)._padding_ = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x8 = 0;
  pFVar3->_padding_ = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->EndCullDistanceQuality).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->EndCullDistanceQuality).PerQuality.field_0x48 = 0;
  (this->EndCullDistanceQuality).Default = 10000;
  this->MinLOD = -1;
  *(undefined4 *)&this->AllowedDensityRange = 0;
  pFVar5 = &this->LightingChannels;
  pFVar5->bChannel0 = '\x01';
  pFVar5->bChannel2 = '\0';
  pFVar5->bChannel1 = '\0';
  *(undefined4 *)&(this->AllowedDensityRange).field_0x4 = 0x3f800000;
  this->Scaling = Uniform;
  *(undefined4 *)&this->ScaleX = 0x3f800000;
  *(undefined4 *)&(this->ScaleX).field_0x4 = 0x3f800000;
  *(undefined4 *)&this->ScaleY = 0x3f800000;
  *(undefined4 *)&(this->ScaleY).field_0x4 = 0x3f800000;
  *(undefined4 *)&this->ScaleZ = 0x3f800000;
  *(undefined4 *)&(this->ScaleZ).field_0x4 = 0x3f800000;
  this->bWeightAttenuatesMaxScale = false;
  this->MaxScaleWeightAttenuation = 0.5;
  this->RandomRotation = true;
  this->AlignToSurface = true;
  this->bAlignToTriangleNormals = true;
  this->bUseLandscapeLightmap = false;
  this->bReceivesDecals = true;
  this->bAffectDistanceFieldLighting = false;
  this->bCastDynamicShadow = true;
  this->bCastContactShadow = true;
  this->bKeepInstanceBufferCPUCopy = false;
  this->InstanceWorldPositionOffsetDisableDistance = 0;
  this->ShadowCacheInvalidationBehavior = Auto;
  pFVar6 = ::FString::FString(&local_28,GGrassQualityLevelCVarName);
  if (pFVar1 != (FPerQualityLevelFloat *)pFVar6) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    pFVar1->_padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->GrassDensityQuality)._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&(this->GrassDensityQuality)._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_28,GGrassQualityLevelCVarName);
  if (pFVar2 != (FPerQualityLevelInt *)pFVar6) {
    if ((void *)pFVar2->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar2->_padding_);
    }
    pFVar2->_padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->StartCullDistanceQuality)._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&(this->StartCullDistanceQuality)._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_28,GGrassQualityLevelCVarName);
  if (pFVar3 != (FPerQualityLevelInt *)pFVar6) {
    if ((void *)pFVar3->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar3->_padding_);
    }
    pFVar3->_padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->EndCullDistanceQuality)._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&(this->EndCullDistanceQuality)._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// GetDensity @ 145f53880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FGrassVariety::GetDensity(FGrassVariety *this)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if ((GEngine == (UEngine *)0x0) || (GEngine->UseGrassVarityPerQualityLevels == false)) {
    return (this->GrassDensity).Default;
  }
  if ((*(int *)&(this->GrassDensityQuality).PerQuality.field_0x8 ==
       *(int *)&(this->GrassDensityQuality).PerQuality.field_0x34) || (GGrassQualityLevel < 0)) {
    return (this->GrassDensityQuality).Default;
  }
  puVar4 = *(undefined1 **)&(this->GrassDensityQuality).PerQuality.field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->GrassDensityQuality).PerQuality.field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->GrassDensityQuality).PerQuality.field_0x48 - 1U &
                            GGrassQualityLevel) * 4);
  if (iVar1 != -1) {
    do {
      piVar3 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->GrassDensityQuality).PerQuality
                      );
      if (*piVar3 == GGrassQualityLevel) {
        pfVar2 = (float *)(piVar3 + 1);
        if (piVar3 == (int *)0x0) {
          pfVar2 = (float *)0x0;
        }
        if (pfVar2 != (float *)0x0) {
          return *pfVar2;
        }
        break;
      }
      iVar1 = piVar3[2];
    } while (iVar1 != -1);
  }
  return (this->GrassDensityQuality).Default;
}

// GetEndCullDistance @ 145f53970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FGrassVariety::GetEndCullDistance(FGrassVariety *this)

{
  int iVar1;
  
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseGrassVarityPerQualityLevels != false)) {
    iVar1 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetValue
                      ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                       &this->EndCullDistanceQuality,GGrassQualityLevel);
    return iVar1;
  }
  return (this->EndCullDistance).Default;
}

// GetStartCullDistance @ 145f54f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FGrassVariety::GetStartCullDistance(FGrassVariety *this)

{
  int iVar1;
  
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseGrassVarityPerQualityLevels != false)) {
    iVar1 = FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetValue
                      ((FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
                       &this->StartCullDistanceQuality,GGrassQualityLevel);
    return iVar1;
  }
  return (this->StartCullDistance).Default;
}

// IsGrassQualityLevelEnable @ 145f58f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FGrassVariety::IsGrassQualityLevelEnable(FGrassVariety *this)

{
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseGrassVarityPerQualityLevels != false)) {
    return true;
  }
  return false;
}

