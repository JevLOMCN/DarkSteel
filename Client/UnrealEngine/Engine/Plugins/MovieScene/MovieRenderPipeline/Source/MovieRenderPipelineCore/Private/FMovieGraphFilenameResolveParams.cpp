// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// FMovieGraphFilenameResolveParams @ 14dc72620

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphFilenameResolveParams * __thiscall
FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams
          (FMovieGraphFilenameResolveParams *this)

{
  (this->RenderDataIdentifier).RootBranchName.ComparisonIndex = 0;
  (this->RenderDataIdentifier).RootBranchName.Number = 0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  *(undefined8 *)&this->FileMetadata = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  this->RootFrameNumber = 0;
  this->ShotFrameNumber = 0;
  this->RootFrameNumberRel = 0;
  this->ShotFrameNumberRel = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  (this->FileNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameOverride).Data.ArrayNum = 0;
  (this->FileNameOverride).Data.ArrayMax = 0;
  (this->InitializationTime).Ticks = 0;
  (this->InitializationTimeOffset).Ticks = 0;
  *(undefined8 *)&this->FileNameFormatOverrides = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x20 = 0;
  this->Version = 0;
  this->bForceRelativeFrameNumbers = false;
  this->ZeroPadFrameNumberCount = 0;
  this->bEnsureAbsolutePath = true;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  (this->Job).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->Shot).field0_0x0.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  (this->EvaluatedConfig).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  this->FrameNumberOffset = 0;
  (this->DefaultFrameRate).Numerator = 0x18;
  (this->DefaultFrameRate).Denominator = 1;
  return this;
}

// ~FMovieGraphFilenameResolveParams @ 14dc74220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams
          (FMovieGraphFilenameResolveParams *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileNameFormatOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileNameFormatOverrides);
  pFVar2 = (this->FileNameOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  pFVar2 = (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticStruct @ 14dc9b470

UScriptStruct * __cdecl FMovieGraphFilenameResolveParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams,
                         (UObject *)pUVar1,L"MovieGraphFilenameResolveParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.OuterSingleton;
}

// MakeResolveParams @ 14dcd7b50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMovieGraphFilenameResolveParams * __cdecl
FMovieGraphFilenameResolveParams::MakeResolveParams
          (FMovieGraphFilenameResolveParams *__return_storage_ptr__,
          FMovieGraphRenderDataIdentifier *param_1,UMovieGraphPipeline *param_2,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_3,FMovieGraphTraversalContext *param_4,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_5)

{
  uint uVar1;
  UMoviePipelineExecutorJob *pUVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  longlong lVar5;
  UMoviePipelineExecutorShot *pUVar6;
  code *pcVar7;
  bool bVar8;
  FMovieGraphFilenameResolveParams *pFVar9;
  FFrameTime FVar10;
  UMovieGraphGlobalOutputSettingNode *pUVar11;
  FMovieGraphTraversalContext *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res10 [8];
  
  FMovieGraphFilenameResolveParams(__return_storage_ptr__);
  pFVar12 = param_4;
  uVar13 = 0;
  if ((param_2 == (UMovieGraphPipeline *)0x0) || (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_4->Job).field0_0x0.DebugPtr, pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (__return_storage_ptr__->Job).field0_0x0 = (pFVar12->Job).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (pFVar12->Shot).field0_0x0.DebugPtr, pUVar6 != (UMoviePipelineExecutorShot *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (__return_storage_ptr__->Shot).field0_0x0 = (pFVar12->Shot).field0_0x0;
  }
  else {
    (__return_storage_ptr__->InitializationTime).Ticks = (param_2->GraphInitializationTime).Ticks;
    (__return_storage_ptr__->InitializationTimeOffset).Ticks =
         (param_2->InitializationTimeOffset).Ticks;
    pUVar2 = (param_2->CurrentJobDuplicate).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar12 = param_4;
    (__return_storage_ptr__->Job).field0_0x0.DebugPtr = pUVar2;
    uVar1 = param_4->ShotIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_2->ActiveShotList).ArrayNum)) {
      if ((int)uVar1 < (param_2->ActiveShotList).ArrayNum) {
        uVar13 = ~uVar1 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar9 = (FMovieGraphFilenameResolveParams *)(*pcVar7)();
          return pFVar9;
        }
      }
      pFVar3 = (param_2->ActiveShotList).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = *(UObject **)(pFVar3 + (longlong)(int)uVar1 * 8), pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (__return_storage_ptr__->Shot).field0_0x0 =
           *(TObjectPtr<UMoviePipelineExecutorShot>_u_0 *)(pFVar3 + (longlong)(int)uVar1 * 8);
    }
    if ((param_2->ActiveShotList).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FMovieGraphFilenameResolveParams *)(*pcVar7)();
        return pFVar9;
      }
    }
    lVar5 = *(longlong *)(param_2->ActiveShotList).AllocatorInstance.Data;
    FVar10 = FFrameRate::TransformTime
                       ((FFrameTime)&param_4,*(FFrameRate *)(lVar5 + 0xdc),
                        *(FFrameRate *)(lVar5 + 0xbc));
    uVar13 = *(uint *)FVar10;
  }
  iVar14 = 0;
  pUVar6 = (__return_storage_ptr__->Shot).field0_0x0.DebugPtr;
  if (pUVar6 != (UMoviePipelineExecutorShot *)0x0) {
    __return_storage_ptr__->Version = (pUVar6->ShotInfo).VersionNumber;
    FVar10 = FFrameRate::TransformTime
                       ((FFrameTime)local_res10,(FFrameRate)(pUVar6->ShotInfo).InitialTimeInShot,
                        (pUVar6->ShotInfo).CachedTickResolution);
    iVar14 = *(int *)FVar10;
  }
  (__return_storage_ptr__->RenderDataIdentifier).RootBranchName = param_1->RootBranchName;
  ::FString::operator=
            (&(__return_storage_ptr__->RenderDataIdentifier).LayerName,&param_1->LayerName);
  ::FString::operator=
            (&(__return_storage_ptr__->RenderDataIdentifier).RendererName,&param_1->RendererName);
  ::FString::operator=
            (&(__return_storage_ptr__->RenderDataIdentifier).SubResourceName,
             &param_1->SubResourceName);
  ::FString::operator=
            (&(__return_storage_ptr__->RenderDataIdentifier).CameraName,&param_1->CameraName);
  __return_storage_ptr__->RootFrameNumber = (pFVar12->Time).RootFrameNumber.Value;
  __return_storage_ptr__->ShotFrameNumber = (pFVar12->Time).ShotFrameNumber.Value;
  __return_storage_ptr__->RootFrameNumberRel = (pFVar12->Time).OutputFrameNumber + uVar13;
  __return_storage_ptr__->ShotFrameNumberRel = (pFVar12->Time).ShotOutputFrameNumber + iVar14;
  if ((param_3->field0_0x0).DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
    pUVar11 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                        ((param_3->field0_0x0).DebugPtr,UMovieGraphNode::GlobalsPinName,true,false);
    if ((pUVar11 != (UMovieGraphGlobalOutputSettingNode *)0x0) &&
       (((uint)pUVar11->_padding_ >> 0x1e & 1) == 0)) {
      __return_storage_ptr__->ZeroPadFrameNumberCount = pUVar11->ZeroPadFrameNumbers;
      __return_storage_ptr__->FrameNumberOffset = pUVar11->FrameNumberOffset;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((param_3->field0_0x0).DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(param_3->field0_0x0).DebugPtr);
    }
    (__return_storage_ptr__->EvaluatedConfig).field0_0x0 = param_3->field0_0x0;
  }
  if ((__real_322bcc77 <
       (float)((uint)((pFVar12->Time).WorldTimeDilation - __real_3f800000) &
              __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     ((pFVar12->Time).bHasRelativeTimeBeenUsed != false)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  __return_storage_ptr__->bForceRelativeFrameNumbers = bVar8;
  __return_storage_ptr__->bEnsureAbsolutePath = true;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->FileNameFormatOverrides,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_5);
  return __return_storage_ptr__;
}

// FMovieGraphFilenameResolveParams @ 14dd09a50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphFilenameResolveParams * __thiscall
FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams
          (FMovieGraphFilenameResolveParams *this,FMovieGraphFilenameResolveParams *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  UMoviePipelineExecutorShot *pUVar2;
  UMovieGraphEvaluatedConfig *pUVar3;
  
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  ::FString::FString(&(this->RenderDataIdentifier).LayerName,
                     &(param_1->RenderDataIdentifier).LayerName);
  ::FString::FString(&(this->RenderDataIdentifier).RendererName,
                     &(param_1->RenderDataIdentifier).RendererName);
  ::FString::FString(&(this->RenderDataIdentifier).SubResourceName,
                     &(param_1->RenderDataIdentifier).SubResourceName);
  ::FString::FString(&(this->RenderDataIdentifier).CameraName,
                     &(param_1->RenderDataIdentifier).CameraName);
  this->RootFrameNumber = param_1->RootFrameNumber;
  this->ShotFrameNumber = param_1->ShotFrameNumber;
  this->RootFrameNumberRel = param_1->RootFrameNumberRel;
  this->ShotFrameNumberRel = param_1->ShotFrameNumberRel;
  *(undefined8 *)&(this->FileMetadata).field_0x0 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileMetadata);
  this->Version = param_1->Version;
  this->bForceRelativeFrameNumbers = param_1->bForceRelativeFrameNumbers;
  ::FString::FString(&this->FileNameOverride,&param_1->FileNameOverride);
  this->bEnsureAbsolutePath = param_1->bEnsureAbsolutePath;
  (this->InitializationTime).Ticks = (param_1->InitializationTime).Ticks;
  (this->InitializationTimeOffset).Ticks = (param_1->InitializationTimeOffset).Ticks;
  this->ZeroPadFrameNumberCount = param_1->ZeroPadFrameNumberCount;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x0 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileNameFormatOverrides,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileNameFormatOverrides);
  pUVar1 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->Shot).field0_0x0.DebugPtr;
  (this->Shot).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
  (this->EvaluatedConfig).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->FrameNumberOffset = param_1->FrameNumberOffset;
  this->DefaultFrameRate = param_1->DefaultFrameRate;
  return this;
}

