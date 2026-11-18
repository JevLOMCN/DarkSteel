// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 30

// StaticClass @ 14ddba520

UClass * __cdecl UMovieGraphPathTracerRenderPassNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphPathTracerRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphPathTracerRenderPassNode,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphPathTracerRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphPathTracerRenderPassNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton;
}

// UMovieGraphPathTracerRenderPassNode @ 14ddc6f50

UMovieGraphPathTracerRenderPassNode * __thiscall
UMovieGraphPathTracerRenderPassNode::UMovieGraphPathTracerRenderPassNode
          (UMovieGraphPathTracerRenderPassNode *this,FVTableHelper *param_1)

{
  UMovieGraphRenderPassNode::UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphPathTracerRenderPassNode__6B_;
  this->bLightingComponents_IncludeEmissive = true;
  this->bLightingComponents_IncludeDiffuse = true;
  this->bLightingComponents_IncludeIndirectDiffuse = true;
  this->bLightingComponents_IncludeSpecular = true;
  this->bLightingComponents_IncludeIndirectSpecular = true;
  this->bLightingComponents_IncludeVolume = true;
  this->bLightingComponents_IncludeIndirectVolume = true;
  (this->PPMFileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PPMFileNameFormat).Data.ArrayNum = 0;
  (this->PPMFileNameFormat).Data.ArrayMax = 0;
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  this->bOriginalProgressDisplayCvarValue = false;
  this->OriginalFrameCountCvarValue = 2;
  this->OriginalDenoiserType = 0;
  return this;
}

// UMovieGraphPathTracerRenderPassNode @ 14ddc6fe0

UMovieGraphPathTracerRenderPassNode * __thiscall
UMovieGraphPathTracerRenderPassNode::UMovieGraphPathTracerRenderPassNode
          (UMovieGraphPathTracerRenderPassNode *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UMovieGraphPathTracerRenderPassNode *pUVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FSoftObjectPath *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement FVar18;
  FSoftObjectPath *local_res10;
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FSoftObjectPath local_e8;
  UMovieGraphPathTracerRenderPassNode *local_c8;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TPersistentObjectPtr<FSoftObjectPath> local_a8;
  FString local_80;
  FString local_70;
  TStringView<wchar_t> local_58;
  
  uVar13 = 0;
  local_res18 = 0;
  local_c8 = this;
  UMovieGraphImagePassBaseNode::UMovieGraphImagePassBaseNode((UMovieGraphImagePassBaseNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphPathTracerRenderPassNode__6B_;
  this->SpatialSampleCount = 1;
  this->SeedOffset = 0;
  this->bEnableReferenceMotionBlur = true;
  this->bEnableDenoiser = true;
  this->DenoiserType = Spatial;
  this->FrameCount = 2;
  this->bWriteAllSamples = false;
  this->bDisableToneCurve = false;
  this->bAllowOCIO = true;
  this->bLightingComponents_IncludeEmissive = true;
  this->bLightingComponents_IncludeDiffuse = true;
  this->bLightingComponents_IncludeIndirectDiffuse = true;
  this->bLightingComponents_IncludeSpecular = true;
  this->bLightingComponents_IncludeIndirectSpecular = true;
  this->bLightingComponents_IncludeVolume = true;
  this->bLightingComponents_IncludeIndirectVolume = true;
  this->bIncludeBeautyRenderInOutput = true;
  ::FString::FString(&this->PPMFileNameFormat,
                     L"{sequence_name}.{layer_name}.{renderer_sub_name}.{frame_number}");
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  this->TileCount = 1;
  this->bOriginalProgressDisplayCvarValue = false;
  this->OriginalFrameCountCvarValue = 2;
  this->OriginalDenoiserType = 0;
  ::FString::operator=((FString *)&this->_padding_,L"PathTraced");
  UMovieGraphShowFlags::ApplyDefaultShowFlagValue((UMovieGraphShowFlags *)this->_padding_,0x1b,true)
  ;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  pFVar14 = (FSoftObjectPath *)(local_f8.Data + (longlong)iVar8 * 0x10);
  (pFVar14->AssetPath).PackageName.ComparisonIndex = 0;
  iVar9 = UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum;
  FVar15 = UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.AllocatorInstance;
  (pFVar14->AssetPath).PackageName.Number = 0;
  lVar16 = (longlong)UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum;
  (pFVar14->AssetPath).AssetName.ComparisonIndex.Value =
       UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum;
  puVar1 = &(pFVar14->AssetPath).AssetName.Number;
  local_res10 = pFVar14;
  local_f0._0_4_ = iVar8 + 1;
  if (iVar9 == 0) {
    *puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)pFVar14,iVar9,(int *)puVar1);
    memcpy((void *)(pFVar14->AssetPath).PackageName,FVar15.Data,lVar16 * 2);
  }
  if (((local_f8.Data <
        (FScriptContainerElement *)
        ((longlong)
         &UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.AllocatorInstance.Data + 1))
      && (&UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset <
          local_f8.Data + (longlong)local_f0._4_4_ * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar10 = (UMovieGraphPathTracerRenderPassNode *)(*pcVar6)();
    return pUVar10;
  }
  iVar9 = (uint)local_f0;
  if ((uint)local_f0 == local_f0._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
  pFVar14 = (FSoftObjectPath *)(local_f8.Data + (longlong)iVar9 * 0x10);
  (pFVar14->AssetPath).PackageName.ComparisonIndex = 0;
  iVar9 = UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.ArrayNum;
  FVar15 = UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.AllocatorInstance;
  (pFVar14->AssetPath).PackageName.Number = 0;
  lVar16 = (longlong)UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.ArrayNum;
  (pFVar14->AssetPath).AssetName.ComparisonIndex.Value =
       UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.ArrayNum;
  puVar1 = &(pFVar14->AssetPath).AssetName.Number;
  local_res10 = pFVar14;
  if (iVar9 == 0) {
    *puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)pFVar14,iVar9,(int *)puVar1);
    memcpy((void *)(pFVar14->AssetPath).PackageName,FVar15.Data,lVar16 * 2);
  }
  uVar11 = (ulonglong)(int)(uint)local_f0;
  local_res20 = (uint)local_f0;
  pFVar17 = local_f8.Data + uVar11 * 0x10;
  FVar15.Data = local_f8.Data;
  do {
    if ((uint)local_f0 != (int)uVar11) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar15.Data == pFVar17) {
      DestructItems<FString,int>((FString *)local_f8.Data,(uint)local_f0);
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      return this;
    }
    piVar3 = &(this->AdditionalPostProcessMaterials).ArrayMax;
    iVar9 = (this->AdditionalPostProcessMaterials).ArrayNum;
    if (iVar9 == *piVar3) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&(this->AdditionalPostProcessMaterials).AllocatorInstance,piVar3);
    }
    (this->AdditionalPostProcessMaterials).ArrayNum = iVar9 + 1;
    pFVar4 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data + (longlong)iVar9 * 0x48;
    DefaultConstructItems<FMoviePipelinePostProcessPass,int>(pFVar4,1);
    iVar9 = *(int *)(FVar15.Data + 8);
    if (iVar9 == UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar15.Data,
                           (wchar_t *)
                           UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.AllocatorInstance.
                           Data);
        bVar7 = iVar9 == 0;
        goto LAB_14ddc72ff;
      }
LAB_14ddc731e:
      pFVar12 = (FScriptContainerElement *)::FString::FString(&local_70,L"depth");
      uVar13 = uVar13 | 1;
    }
    else {
      bVar7 = iVar9 + UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum == 1;
LAB_14ddc72ff:
      if (bVar7) goto LAB_14ddc731e;
      pFVar12 = (FScriptContainerElement *)::FString::FString(&local_80,L"motion");
      uVar13 = uVar13 | 2;
    }
    pFVar2 = pFVar4 + 8;
    local_res18 = uVar13;
    if (pFVar2 != pFVar12) {
      pFVar5 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar4 + 0x10) = *(int *)&pFVar12[8].field_0x0;
      *(int *)(pFVar4 + 0x14) = *(int *)&pFVar12[0xc].field_0x0;
      *(undefined8 *)&pFVar12[8].field_0x0 = 0;
    }
    if (((uVar13 & 2) != 0) &&
       (uVar13 = uVar13 & 0xfffffffd, local_res18 = uVar13,
       local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (((uVar13 & 1) != 0) &&
       (uVar13 = uVar13 & 0xfffffffe, local_res18 = uVar13,
       local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_res10 = &local_e8;
    local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.PackageName.Number = 0;
    local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.AssetName.Number = 0;
    local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.SubPathString.Data.ArrayNum = 0;
    local_e8.SubPathString.Data.ArrayMax = 0;
    local_b8 = *(wchar_t **)FVar15.Data;
    iStack_b0 = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      iStack_b0 = 0;
    }
    local_58._12_4_ = uStack_ac;
    local_58.Size = iStack_b0;
    local_58.DataPtr = local_b8;
    FSoftObjectPath::SetPath(&local_e8,&local_58);
    local_res10 = &local_e8;
    local_a8.WeakPtr.ObjectIndex = 0;
    local_a8.WeakPtr.ObjectSerialNumber = 0;
    FSoftObjectPath::FSoftObjectPath(&local_a8.ObjectID,&local_e8);
    if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar4 + 0x18),&local_a8);
    if (local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    *pFVar4 = (FScriptContainerElement)0x0;
    iVar9 = *(int *)(FVar15.Data + 8);
    if (iVar9 == UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum) {
      if (iVar9 < 2) {
        FVar18 = (FScriptContainerElement)0x1;
      }
      else {
        iVar9 = wcscmp(*(wchar_t **)FVar15.Data,
                       (wchar_t *)
                       UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.AllocatorInstance.Data);
        FVar18 = (FScriptContainerElement)(iVar9 == 0);
      }
    }
    else {
      FVar18 = (FScriptContainerElement)
               (iVar9 + UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum == 1);
    }
    pFVar4[0x40] = FVar18;
    pFVar4[0x41] = (FScriptContainerElement)0x1;
    FVar15.Data = FVar15.Data + 0x10;
    uVar11 = (ulonglong)local_res20;
    this = local_c8;
  } while( true );
}

// ~UMovieGraphPathTracerRenderPassNode @ 14ddcba40

void __thiscall
UMovieGraphPathTracerRenderPassNode::~UMovieGraphPathTracerRenderPassNode
          (UMovieGraphPathTracerRenderPassNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphPathTracerRenderPassNode__6B_;
  DestructItems<FMoviePipelinePostProcessPass,int>
            ((FMoviePipelinePostProcessPass *)
             (this->AdditionalPostProcessMaterials).AllocatorInstance.Data,
             (this->AdditionalPostProcessMaterials).ArrayNum);
  pFVar1 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PPMFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphImagePassBaseNode__6B_;
  DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
            ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
              *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this);
  return;
}

// CreateInstance @ 14ddda070

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
 __thiscall
UMovieGraphPathTracerRenderPassNode::CreateInstance(UMovieGraphPathTracerRenderPassNode *this)

{
  FMovieGraphDeferredPass *this_00;
  FMovieGraphImagePassBase *in_RDX;
  
  this_00 = ::operator_new(0x160);
  if (this_00 == (FMovieGraphDeferredPass *)0x0) {
    this_00 = (FMovieGraphDeferredPass *)0x0;
  }
  else {
    memset(this_00,0,0x160);
    UE::MovieGraph::Rendering::FMovieGraphDeferredPass::FMovieGraphDeferredPass(this_00);
    *(undefined ***)this_00 = &___7FMovieGraphPathTracerPass_Rendering_MovieGraph_UE__6B_;
  }
  in_RDX->_padding_ = (longlong)this_00;
  return (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
          )in_RDX;
}

// GetAdditionalPostProcessMaterials @ 14dddf020

TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphPathTracerRenderPassNode::GetAdditionalPostProcessMaterials
          (UMovieGraphPathTracerRenderPassNode *this,
          TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FMoviePipelinePostProcessPass *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->AdditionalPostProcessMaterials).ArrayNum;
  pFVar2 = (FMoviePipelinePostProcessPass *)
           (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FMoviePipelinePostProcessPass,FMoviePipelinePostProcessPass,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return __return_storage_ptr__;
}

// GetAllowDenoiser @ 14dddf240

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetAllowDenoiser(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bEnableDenoiser;
}

// GetAllowOCIO @ 14dddf280

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetAllowOCIO(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bAllowOCIO;
}

// GetCoolingDownFrameCount @ 14dddfd40

int __thiscall
UMovieGraphPathTracerRenderPassNode::GetCoolingDownFrameCount
          (UMovieGraphPathTracerRenderPassNode *this)

{
  char cVar1;
  bool bVar2;
  
  if (this->DenoiserType == Temporal) {
    cVar1 = (**(code **)(this->_padding_ + 0x420))();
    if (cVar1 != '\0') {
      bVar2 = HasTemporalDenoiser();
      if (bVar2) {
        return this->FrameCount;
      }
    }
  }
  return 0;
}

// GetDisableToneCurve @ 14dddfde0

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetDisableToneCurve(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bDisableToneCurve;
}

// GetEnableHighResolutionTiling @ 14dddfe40

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetEnableHighResolutionTiling
          (UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bEnableHighResolutionTiling;
}

// GetEnableHistoryPerTile @ 14dddfe80

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetEnableHistoryPerTile
          (UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bAllocateHistoryPerTile;
}

// GetEnablePageToSystemMemory @ 14dddfeb0

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetEnablePageToSystemMemory
          (UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bPageToSystemMemory;
}

// GetFormatResolveArgs @ 14dde1710

void __thiscall
UMovieGraphPathTracerRenderPassNode::GetFormatResolveArgs
          (UMovieGraphPathTracerRenderPassNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  FString local_68;
  FString local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  UE::MoviePipeline::GetMetadataPrefixPath(&local_68,param_2);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,this->SpatialSampleCount);
  ::FString::FString((FString *)local_38,L"ss_count");
  local_48._0_8_ = local_38;
  local_48._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_48
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,this->SpatialSampleCount);
  ::FString::PrintfImpl((FString *)local_48,L"%s/spatialSampleCount");
  local_38._0_8_ = local_48;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_38);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,this->SeedOffset);
  ::FString::FString((FString *)local_48,L"path_tracer_seed_offset");
  local_38._0_8_ = local_48;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,this->SeedOffset);
  ::FString::PrintfImpl((FString *)local_48,L"%s/seedOffset");
  local_38._0_8_ = local_48;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_38);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,(uint)this->bDisableToneCurve);
  ::FString::FString((FString *)local_48,L"disable_tonecurve");
  local_38._0_8_ = local_48;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,(uint)this->bDisableToneCurve);
  ::FString::PrintfImpl((FString *)local_48,L"%s/disableTonecurve");
  local_38._0_8_ = local_48;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_38);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumSpatialSamples @ 14dde23b0

int __thiscall
UMovieGraphPathTracerRenderPassNode::GetNumSpatialSamples(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->SpatialSampleCount;
}

// GetNumSpatialSamplesDuringWarmUp @ 14dde23d0

int __thiscall
UMovieGraphPathTracerRenderPassNode::GetNumSpatialSamplesDuringWarmUp
          (UMovieGraphPathTracerRenderPassNode *this)

{
  return 1;
}

// GetPPMFileNameFormatString @ 14dde3170

FString * __thiscall
UMovieGraphPathTracerRenderPassNode::GetPPMFileNameFormatString
          (UMovieGraphPathTracerRenderPassNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PPMFileNameFormat);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dde3ae0

UClass * __cdecl UMovieGraphPathTracerRenderPassNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphPathTracerRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphPathTracerRenderPassNode,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphPathTracerRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphPathTracerRenderPassNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPathTracerRenderPassNode.InnerSingleton;
}

// GetSeedOffset @ 14dde5d30

int __thiscall
UMovieGraphPathTracerRenderPassNode::GetSeedOffset(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->SeedOffset;
}

// GetShowFlags @ 14dde5e10

FEngineShowFlags * __thiscall
UMovieGraphPathTracerRenderPassNode::GetShowFlags
          (UMovieGraphPathTracerRenderPassNode *this,FEngineShowFlags *__return_storage_ptr__)

{
  uint uVar1;
  
  UMovieGraphShowFlags::GetShowFlags((UMovieGraphShowFlags *)this->_padding_,__return_storage_ptr__)
  ;
  __return_storage_ptr__->PathTracing = 1;
  uVar1 = 0;
  if (this->bEnableReferenceMotionBlur == false) {
    uVar1 = 0x200;
  }
  __return_storage_ptr__->MotionBlur = uVar1 >> 9;
  return __return_storage_ptr__;
}

// GetTileCount @ 14dde6170

TIntPoint<int> __thiscall
UMovieGraphPathTracerRenderPassNode::GetTileCount(UMovieGraphPathTracerRenderPassNode *this)

{
  int iVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  if (this->bEnableHighResolutionTiling != false) {
    iVar1 = this->TileCount;
    *(int *)in_RDX = iVar1;
    *(int *)((longlong)in_RDX + 4) = iVar1;
    return (TIntPoint<int>)in_RDX;
  }
  *(undefined4 *)in_RDX = 1;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return (TIntPoint<int>)in_RDX;
}

// GetTileOverlapPercentage @ 14dde61c0

float __thiscall
UMovieGraphPathTracerRenderPassNode::GetTileOverlapPercentage
          (UMovieGraphPathTracerRenderPassNode *this)

{
  if (this->bEnableHighResolutionTiling != false) {
    return this->OverlapPercentage;
  }
  return 0.0;
}

// GetViewModeIndex @ 14dde63b0

EViewModeIndex __thiscall
UMovieGraphPathTracerRenderPassNode::GetViewModeIndex(UMovieGraphPathTracerRenderPassNode *this)

{
  return VMI_PathTracing;
}

// GetWriteAllSamples @ 14dde6a00

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetWriteAllSamples(UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bWriteAllSamples;
}

// GetWriteBeautyPassToDisk @ 14dde6a30

bool __thiscall
UMovieGraphPathTracerRenderPassNode::GetWriteBeautyPassToDisk
          (UMovieGraphPathTracerRenderPassNode *this)

{
  return this->bIncludeBeautyRenderInOutput;
}

// ResolveTokenContainingProperties @ 14ddfc230

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPathTracerRenderPassNode::ResolveTokenContainingProperties
          (UMovieGraphPathTracerRenderPassNode *this,TFunction<void___cdecl(FString_&)> *param_1,
          FMovieGraphTokenResolveContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  UMovieGraphRenderPassNode::ResolveTokenContainingProperties
            ((UMovieGraphRenderPassNode *)this,param_1,param_2);
  iVar2 = (this->AdditionalPostProcessMaterials).ArrayNum;
  pFVar6 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMoviePipelinePostProcessPass,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar5 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar5 = (longlong *)&param_1->field_0x10;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,pFVar6 + 8);
    pFVar6 = pFVar6 + 0x48;
  }
  return;
}

// SetupImpl @ 14ddfd750

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphPathTracerRenderPassNode::SetupImpl
          (UMovieGraphPathTracerRenderPassNode *this,FMovieGraphRenderPassSetupData *param_1)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  UMovieGraphRenderPassNode *pUVar9;
  UClass *pUVar10;
  IConsoleVariable *pIVar11;
  FString *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  FString local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [16];
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  UMovieGraphImagePassBaseNode::SetupImpl((UMovieGraphImagePassBaseNode *)this,param_1);
  pwVar16 = L"";
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.PathTracing.ProgressDisplay",1);
  if (plVar7 != (longlong *)0x0) {
    bVar4 = (bool)(**(code **)(*plVar7 + 0xc0))(plVar7);
    this->bOriginalProgressDisplayCvarValue = bVar4;
    local_c8 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_ac = 1;
    local_98 = 0x2000000;
    local_9c = 0xf000000;
    local_b0 = (**(code **)(*plVar7 + 0x18))(plVar7);
    local_b0 = local_b0 & 0xff000000;
    lVar17 = *plVar7;
    uVar8 = (**(code **)(lVar17 + 0xa8))(plVar7,local_90,&local_b0);
    (**(code **)(lVar17 + 0xb0))(plVar7,&u_0,uVar8);
  }
  ::FString::FString(&local_d8,L"None");
  pFVar2 = (param_1->Layers).AllocatorInstance.Data;
  local_res20 = (param_1->Layers).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  lVar17 = uVar13 * 0x40;
  pFVar14 = pFVar2 + 8;
  uVar18 = 0;
  uVar19 = 0;
LAB_14ddfd880:
  do {
    if ((param_1->Layers).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieGraphRenderPassLayerData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar14 + -8 == pFVar2 + lVar17) {
      if ((char)uVar19 == '\0') {
        uVar18 = 0;
      }
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar11 = (IConsoleVariable *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"r.NFOR.FrameCount",1);
      if (pIVar11 != (IConsoleVariable *)0x0) {
        iVar6 = (**(code **)(*(longlong *)pIVar11 + 200))(pIVar11);
        this->OriginalFrameCountCvarValue = iVar6;
        local_c0 = 0;
        IConsoleVariable::SetWithCurrentPriority<int>
                  (pIVar11,uVar18,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
      }
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar11 = (IConsoleVariable *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"r.PathTracing.SpatialDenoiser.Type",1);
      if (pIVar11 != (IConsoleVariable *)0x0) {
        iVar6 = (**(code **)(*(longlong *)pIVar11 + 200))(pIVar11);
        this->OriginalDenoiserType = iVar6;
        local_b8 = 0;
        IConsoleVariable::SetWithCurrentPriority<int>
                  (pIVar11,uVar19,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
      }
      bVar4 = HasTemporalDenoiser();
      if (((!bVar4) && ((char)uVar19 == '\x01')) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      bVar4 = IsRayTracingEnabled();
      if (bVar4) {
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar7 = (longlong *)
                 (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                           (IConsoleManager::Singleton,L"r.PathTracing",1);
        if ((plVar7 != (longlong *)0x0) &&
           (iVar6 = (**(code **)(*plVar7 + 200))(plVar7), iVar6 != 0)) goto LAB_14ddfdb91;
      }
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
LAB_14ddfdb91:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      return;
    }
    pUVar9 = (UMovieGraphRenderPassNode *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar14 + 0x30));
    if (pUVar9 == (UMovieGraphRenderPassNode *)0x0) {
      pFVar12 = GetTypeName<UMovieGraphPathTracerRenderPassNode>(local_60);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar16);
    }
    pUVar10 = StaticClass();
    iVar6 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar10->_padding_)) {
      pFVar12 = GetTypeName<UMovieGraphPathTracerRenderPassNode>(&local_80);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<UMovieGraphRenderPassNode>(&local_70,pUVar9);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar16,pwVar15);
    }
    uVar5 = (**(code **)(pUVar9->_padding_ + 0x380))(pUVar9);
    if ((int)uVar5 < (int)uVar18) {
      uVar5 = uVar18;
    }
    bVar1 = *(byte *)((longlong)&pUVar9[1]._padding_ + 6);
    local_res18 = (uint)bVar1;
    if ((int)(uint)bVar1 < (int)uVar19) {
      local_res18 = uVar19;
    }
    uVar18 = uVar5;
    if ((bVar1 == 1) && ((FScriptContainerElement *)&local_d8 != pFVar14)) {
      iVar6 = *(int *)(pFVar14 + 8);
      _Src = *(void **)pFVar14;
      local_d8.Data.ArrayNum = iVar6;
      if ((iVar6 == 0) && (local_d8.Data.ArrayMax == 0)) {
        pFVar14 = pFVar14 + 0x40;
        uVar13 = (ulonglong)local_res20;
        uVar19 = local_res18;
        goto LAB_14ddfd880;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,local_d8.Data.ArrayMax,(ForAnyElementType *)&local_d8,iVar6,
                 &local_d8.Data.ArrayMax);
      if (iVar6 != 0) {
        memcpy(local_d8.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
      }
    }
    pFVar14 = pFVar14 + 0x40;
    uVar13 = (ulonglong)local_res20;
    uVar19 = local_res18;
  } while( true );
}

// StaticRegisterNativesUMovieGraphPathTracerRenderPassNode @ 14ddff210

void __cdecl
UMovieGraphPathTracerRenderPassNode::StaticRegisterNativesUMovieGraphPathTracerRenderPassNode(void)

{
  return;
}

// TeardownImpl @ 14ddffb90

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPathTracerRenderPassNode::TeardownImpl(UMovieGraphPathTracerRenderPassNode *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  IConsoleVariable *pIVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_68 [16];
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  plVar7 = &this->_padding_;
  puVar11 = (undefined8 *)*plVar7;
  iVar3 = (int)this->_padding_;
  puVar2 = puVar11 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar2) break;
    (**(code **)(*(longlong *)*puVar11 + 0x10))();
    puVar11 = puVar11 + 1;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
              ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
                *)*plVar7,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)plVar7,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
              ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
                *)*plVar7,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.PathTracing.ProgressDisplay",1);
  if (plVar7 != (longlong *)0x0) {
    bVar6 = this->bOriginalProgressDisplayCvarValue;
    local_res10 = 0;
    local_50 = 0;
    local_48 = 0;
    local_54 = 1;
    local_40 = 0x2000000;
    local_44 = 0xf000000;
    local_58 = (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar4 = *plVar7;
    local_58 = local_58 & 0xff000000;
    uVar8 = (**(code **)(lVar4 + 0xa8))(plVar7,local_68,&local_58);
    puVar10 = &u_0;
    if (bVar6 != false) {
      puVar10 = &u_1;
    }
    (**(code **)(lVar4 + 0xb0))(plVar7,puVar10,uVar8);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pIVar9 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.NFOR.FrameCount",1);
  if (pIVar9 != (IConsoleVariable *)0x0) {
    local_res18 = 0;
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar9,this->OriginalFrameCountCvarValue,(FName)0x0,ECVF_SetByConsole,
               ECVF_SetByScalability);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pIVar9 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.PathTracing.SpatialDenoiser.Type",1);
  if (pIVar9 != (IConsoleVariable *)0x0) {
    local_res20 = 0;
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar9,this->OriginalDenoiserType,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability)
    ;
  }
  return;
}

// UpdateTelemetry @ 14de02d10

void __thiscall
UMovieGraphPathTracerRenderPassNode::UpdateTelemetry
          (UMovieGraphPathTracerRenderPassNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  bVar2 = param_1->bUsesPPMs;
  param_1->bUsesPathTracer = true;
  iVar4 = (this->AdditionalPostProcessMaterials).ArrayNum;
  pFVar5 = (this->AdditionalPostProcessMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar4 * 0x48;
  while( true ) {
    if ((this->AdditionalPostProcessMaterials).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FMoviePipelinePostProcessPass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*pFVar5 != (FScriptContainerElement)0x0) {
      bVar3 = 1;
LAB_14de02d78:
      param_1->bUsesPPMs = (bool)(bVar2 | bVar3);
      iVar4 = this->SpatialSampleCount;
      if (this->SpatialSampleCount < param_1->SpatialSampleCount) {
        iVar4 = param_1->SpatialSampleCount;
      }
      param_1->SpatialSampleCount = iVar4;
      return;
    }
    pFVar5 = pFVar5 + 0x48;
  }
  bVar3 = 0;
  goto LAB_14de02d78;
}

