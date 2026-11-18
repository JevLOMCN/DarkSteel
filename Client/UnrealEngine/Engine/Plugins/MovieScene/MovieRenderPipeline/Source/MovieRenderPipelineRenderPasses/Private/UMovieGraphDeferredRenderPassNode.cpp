// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 25

// StaticClass @ 14ddb9fd0

UClass * __cdecl UMovieGraphDeferredRenderPassNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphDeferredRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDeferredRenderPassNode,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDeferredRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDeferredRenderPassNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton;
}

// UMovieGraphDeferredRenderPassNode @ 14ddc6260

UMovieGraphDeferredRenderPassNode * __thiscall
UMovieGraphDeferredRenderPassNode::UMovieGraphDeferredRenderPassNode
          (UMovieGraphDeferredRenderPassNode *this,FVTableHelper *param_1)

{
  UMovieGraphRenderPassNode::UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphDeferredRenderPassNode__6B_;
  (this->PPMFileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PPMFileNameFormat).Data.ArrayNum = 0;
  (this->PPMFileNameFormat).Data.ArrayMax = 0;
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  return this;
}

// UMovieGraphDeferredRenderPassNode @ 14ddc62d0

UMovieGraphDeferredRenderPassNode * __thiscall
UMovieGraphDeferredRenderPassNode::UMovieGraphDeferredRenderPassNode
          (UMovieGraphDeferredRenderPassNode *this)

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
  UMovieGraphDeferredRenderPassNode *pUVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FSoftObjectPath *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement FVar18;
  FSoftObjectPath *local_res10;
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FSoftObjectPath local_e8;
  UMovieGraphDeferredRenderPassNode *local_c8;
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
  this->_padding_ = (longlong)&___7UMovieGraphDeferredRenderPassNode__6B_;
  this->SpatialSampleCount = 1;
  this->AntiAliasingMethod = '\x04';
  this->bWriteAllSamples = false;
  this->bDisableToneCurve = false;
  this->bAllowOCIO = true;
  this->ViewModeIndex = '\x03';
  this->bIncludeBeautyRenderInOutput = true;
  ::FString::FString(&this->PPMFileNameFormat,
                     L"{sequence_name}.{layer_name}.{renderer_sub_name}.{frame_number}");
  (this->AdditionalPostProcessMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPostProcessMaterials).ArrayNum = 0;
  (this->AdditionalPostProcessMaterials).ArrayMax = 0;
  this->bEnableHighResolutionTiling = false;
  this->TileCount = 1;
  this->OverlapPercentage = 0.0;
  this->bAllocateHistoryPerTile = false;
  this->bPageToSystemMemory = false;
  ::FString::operator=((FString *)&this->_padding_,L"Deferred");
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  pFVar14 = (FSoftObjectPath *)(local_f8.Data + (longlong)iVar8 * 0x10);
  (pFVar14->AssetPath).PackageName.ComparisonIndex = 0;
  iVar9 = UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum;
  FVar17 = UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.AllocatorInstance;
  (pFVar14->AssetPath).PackageName.Number = 0;
  lVar15 = (longlong)UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum;
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
    memcpy((void *)(pFVar14->AssetPath).PackageName,FVar17.Data,lVar15 * 2);
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
    pUVar10 = (UMovieGraphDeferredRenderPassNode *)(*pcVar6)();
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
  FVar17 = UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.AllocatorInstance;
  (pFVar14->AssetPath).PackageName.Number = 0;
  lVar15 = (longlong)UMovieGraphImagePassBaseNode::DefaultMotionVectorsAsset.Data.ArrayNum;
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
    memcpy((void *)(pFVar14->AssetPath).PackageName,FVar17.Data,lVar15 * 2);
  }
  uVar11 = (ulonglong)(int)(uint)local_f0;
  local_res20 = (uint)local_f0;
  pFVar16 = local_f8.Data + uVar11 * 0x10;
  FVar17.Data = local_f8.Data;
  do {
    if ((uint)local_f0 != (int)uVar11) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar17.Data == pFVar16) {
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
    iVar9 = *(int *)(FVar17.Data + 8);
    if (iVar9 == UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar17.Data,
                           (wchar_t *)
                           UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.AllocatorInstance.
                           Data);
        bVar7 = iVar9 == 0;
        goto LAB_14ddc65af;
      }
LAB_14ddc65ce:
      pFVar12 = (FScriptContainerElement *)::FString::FString(&local_70,L"depth");
      uVar13 = uVar13 | 1;
    }
    else {
      bVar7 = iVar9 + UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum == 1;
LAB_14ddc65af:
      if (bVar7) goto LAB_14ddc65ce;
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
    local_b8 = *(wchar_t **)FVar17.Data;
    iStack_b0 = *(int *)(FVar17.Data + 8) + -1;
    if (*(int *)(FVar17.Data + 8) == 0) {
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
    iVar9 = *(int *)(FVar17.Data + 8);
    if (iVar9 == UMovieGraphImagePassBaseNode::DefaultDepthAsset.Data.ArrayNum) {
      if (iVar9 < 2) {
        FVar18 = (FScriptContainerElement)0x1;
      }
      else {
        iVar9 = wcscmp(*(wchar_t **)FVar17.Data,
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
    FVar17.Data = FVar17.Data + 0x10;
    uVar11 = (ulonglong)local_res20;
    this = local_c8;
  } while( true );
}

// ~UMovieGraphDeferredRenderPassNode @ 14ddcb6e0

void __thiscall
UMovieGraphDeferredRenderPassNode::~UMovieGraphDeferredRenderPassNode
          (UMovieGraphDeferredRenderPassNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphDeferredRenderPassNode__6B_;
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

// CreateInstance @ 14ddd9fe0

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
UMovieGraphDeferredRenderPassNode::CreateInstance(UMovieGraphDeferredRenderPassNode *this)

{
  FMovieGraphDeferredPass *this_00;
  FMovieGraphDeferredPass *pFVar1;
  FMovieGraphImagePassBase *in_RDX;
  
  pFVar1 = (FMovieGraphDeferredPass *)0x0;
  this_00 = ::operator_new(0x160);
  if (this_00 != (FMovieGraphDeferredPass *)0x0) {
    memset(this_00,0,0x160);
    pFVar1 = UE::MovieGraph::Rendering::FMovieGraphDeferredPass::FMovieGraphDeferredPass(this_00);
  }
  in_RDX->_padding_ = (longlong)pFVar1;
  return (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
          )in_RDX;
}

// GetAdditionalPostProcessMaterials @ 14dddef70

TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphDeferredRenderPassNode::GetAdditionalPostProcessMaterials
          (UMovieGraphDeferredRenderPassNode *this,
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

// GetAllowOCIO @ 14dddf260

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetAllowOCIO(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bAllowOCIO;
}

// GetAntiAliasingMethod @ 14dddf2c0

EAntiAliasingMethod __thiscall
UMovieGraphDeferredRenderPassNode::GetAntiAliasingMethod(UMovieGraphDeferredRenderPassNode *this)

{
  return (EAntiAliasingMethod)(this->AntiAliasingMethod).Value;
}

// GetDisableToneCurve @ 14dddfdc0

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetDisableToneCurve(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bDisableToneCurve;
}

// GetEnableHighResolutionTiling @ 14dddfe20

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetEnableHighResolutionTiling
          (UMovieGraphDeferredRenderPassNode *this)

{
  return this->bEnableHighResolutionTiling;
}

// GetEnableHistoryPerTile @ 14dddfe60

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetEnableHistoryPerTile(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bAllocateHistoryPerTile;
}

// GetEnablePageToSystemMemory @ 14dddfe90

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetEnablePageToSystemMemory
          (UMovieGraphDeferredRenderPassNode *this)

{
  return this->bPageToSystemMemory;
}

// GetFormatResolveArgs @ 14dde10b0

void __thiscall
UMovieGraphDeferredRenderPassNode::GetFormatResolveArgs
          (UMovieGraphDeferredRenderPassNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UEnum *pUVar4;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  FName local_1c8;
  FName local_1c0;
  FString *local_1b8;
  FString *local_1b0;
  FString local_1a8;
  FString *local_198;
  FString *local_190;
  FString local_188;
  FString *local_178;
  FString *local_170;
  FString local_168;
  FString *local_158;
  FString *local_150;
  FString local_148;
  FString *local_138;
  FString *local_130;
  FString local_128;
  FString *local_118;
  FString *local_110;
  FString local_108;
  FString *local_f8;
  FString *local_f0;
  FString local_e8;
  FString *local_d8;
  FString *local_d0;
  FString local_c8;
  FString *local_b8;
  FString *local_b0;
  FString local_a8;
  FString local_98;
  FString *local_88;
  FString *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  UE::MoviePipeline::GetMetadataPrefixPath(&local_258,param_2);
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_248,this->SpatialSampleCount);
  ::FString::FString(&local_1a8,L"ss_count");
  local_1b8 = &local_1a8;
  local_1b0 = &local_248;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)&local_1b8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_238,this->SpatialSampleCount);
  ::FString::PrintfImpl(&local_188,L"%s/spatialSampleCount");
  local_198 = &local_188;
  local_190 = &local_238;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000020,
             (bool *)&local_198);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_228,(uint)this->bDisableToneCurve);
  ::FString::FString(&local_168,L"disable_tonecurve");
  local_178 = &local_168;
  local_170 = &local_228;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_1e8,(bool *)&local_178);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_218,(uint)this->bDisableToneCurve);
  ::FString::PrintfImpl(&local_148,L"%s/disableTonecurve");
  local_158 = &local_148;
  local_150 = &local_218;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_1e8 + 4),
             (bool *)&local_158);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FString::SanitizeFloat(&local_58,(double)this->OverlapPercentage,1);
  ::FString::FString(&local_128,L"overlap_percentage");
  local_138 = &local_128;
  local_130 = pFVar3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_1e0,(bool *)&local_138);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::FString::SanitizeFloat(&local_48,(double)this->OverlapPercentage,1);
  ::FString::PrintfImpl(&local_108,L"%s/highres/overlapPercentage");
  local_118 = &local_108;
  local_110 = pFVar3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_1e0 + 4),
             (bool *)&local_118);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_208,(uint)this->bAllocateHistoryPerTile);
  ::FString::FString(&local_e8,L"history_per_tile");
  local_f8 = &local_e8;
  local_f0 = &local_208;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_1d8,(bool *)&local_f8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1f8,(uint)this->bAllocateHistoryPerTile);
  ::FString::PrintfImpl(&local_c8,L"%s/highres/historyPerTile");
  local_d8 = &local_c8;
  local_d0 = &local_1f8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_1d8 + 4),
             (bool *)&local_d8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  pUVar4 = StaticEnum<enum_EAntiAliasingMethod>();
  if ((pUVar4 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar4,(long64)&local_1c8);
  ::FName::ToString(&local_1c8,&local_98);
  ::FString::FString(&local_a8,L"aaMethod");
  local_b8 = &local_a8;
  local_b0 = &local_98;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_1d0,(bool *)&local_b8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar4 = StaticEnum<enum_EAntiAliasingMethod>();
  if ((pUVar4 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar4,(long64)&local_1c0);
  ::FName::ToString(&local_1c0,&local_68);
  ::FString::PrintfImpl(&local_78,L"%s/aaMethod");
  local_88 = &local_78;
  local_80 = &local_68;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_1d0 + 4),
             (bool *)&local_88);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumSpatialSamples @ 14dde2390

int __thiscall
UMovieGraphDeferredRenderPassNode::GetNumSpatialSamples(UMovieGraphDeferredRenderPassNode *this)

{
  return this->SpatialSampleCount;
}

// GetOverrideAntiAliasing @ 14dde2f00

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetOverrideAntiAliasing(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bOverride_AntiAliasingMethod;
}

// GetPPMFileNameFormatString @ 14dde3110

FString * __thiscall
UMovieGraphDeferredRenderPassNode::GetPPMFileNameFormatString
          (UMovieGraphDeferredRenderPassNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PPMFileNameFormat);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dde34e0

UClass * __cdecl UMovieGraphDeferredRenderPassNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphDeferredRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDeferredRenderPassNode,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDeferredRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDeferredRenderPassNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDeferredRenderPassNode.InnerSingleton;
}

// GetTileCount @ 14dde6130

TIntPoint<int> __thiscall
UMovieGraphDeferredRenderPassNode::GetTileCount(UMovieGraphDeferredRenderPassNode *this)

{
  int iVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  iVar1 = this->TileCount;
  *(int *)in_RDX = iVar1;
  *(int *)((longlong)in_RDX + 4) = iVar1;
  return (TIntPoint<int>)in_RDX;
}

// GetTileOverlapPercentage @ 14dde61a0

float __thiscall
UMovieGraphDeferredRenderPassNode::GetTileOverlapPercentage(UMovieGraphDeferredRenderPassNode *this)

{
  return this->OverlapPercentage;
}

// GetViewModeIndex @ 14dde6390

EViewModeIndex __thiscall
UMovieGraphDeferredRenderPassNode::GetViewModeIndex(UMovieGraphDeferredRenderPassNode *this)

{
  return (EViewModeIndex)(this->ViewModeIndex).Value;
}

// GetWriteAllSamples @ 14dde69e0

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetWriteAllSamples(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bWriteAllSamples;
}

// GetWriteBeautyPassToDisk @ 14dde6a10

bool __thiscall
UMovieGraphDeferredRenderPassNode::GetWriteBeautyPassToDisk(UMovieGraphDeferredRenderPassNode *this)

{
  return this->bIncludeBeautyRenderInOutput;
}

// ResolveTokenContainingProperties @ 14ddfc180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDeferredRenderPassNode::ResolveTokenContainingProperties
          (UMovieGraphDeferredRenderPassNode *this,TFunction<void___cdecl(FString_&)> *param_1,
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

// StaticRegisterNativesUMovieGraphDeferredRenderPassNode @ 14ddff190

void __cdecl
UMovieGraphDeferredRenderPassNode::StaticRegisterNativesUMovieGraphDeferredRenderPassNode(void)

{
  return;
}

// UpdateTelemetry @ 14de02be0

void __thiscall
UMovieGraphDeferredRenderPassNode::UpdateTelemetry
          (UMovieGraphDeferredRenderPassNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  bVar2 = param_1->bUsesPPMs;
  param_1->bUsesDeferred = true;
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
LAB_14de02c48:
      param_1->bUsesPPMs = (bool)(bVar2 | bVar3);
      iVar4 = this->SpatialSampleCount;
      if (this->SpatialSampleCount < param_1->SpatialSampleCount) {
        iVar4 = param_1->SpatialSampleCount;
      }
      param_1->SpatialSampleCount = iVar4;
      iVar4 = this->TileCount;
      if (this->TileCount < param_1->HighResTileCount) {
        iVar4 = param_1->HighResTileCount;
      }
      param_1->HighResTileCount = iVar4;
      fVar6 = this->OverlapPercentage;
      if (this->OverlapPercentage <= param_1->HighResOverlap) {
        fVar6 = param_1->HighResOverlap;
      }
      param_1->HighResOverlap = fVar6;
      param_1->bUsesPageToSystemMemory =
           (bool)(param_1->bUsesPageToSystemMemory | this->bPageToSystemMemory);
      return;
    }
    pFVar5 = pFVar5 + 0x48;
  }
  bVar3 = 0;
  goto LAB_14de02c48;
}

