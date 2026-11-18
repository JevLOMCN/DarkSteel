// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 20

// StaticClass @ 14dcf50b0

UClass * __cdecl UMovieGraphVideoOutputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVideoOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphVideoOutputNode,0xd0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphVideoOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphVideoOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton;
}

// UMovieGraphVideoOutputNode @ 14dd0bb30

UMovieGraphVideoOutputNode * __thiscall
UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode
          (UMovieGraphVideoOutputNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  ::FString::FString((FString *)&this->_padding_,"{sequence_name}.{layer_name}.{frame_number}");
  this->_padding_ = (longlong)&___7UMovieGraphVideoOutputNode__6B_;
  return this;
}

// UMovieGraphVideoOutputNode @ 14dd0bb80

UMovieGraphVideoOutputNode * __thiscall
UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode(UMovieGraphVideoOutputNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  ::FString::FString((FString *)&this->_padding_,"{sequence_name}.{layer_name}.{frame_number}");
  this->bHasError = false;
  this->_padding_ = (longlong)&___7UMovieGraphVideoOutputNode__6B_;
  ::FString::operator=((FString *)&this->_padding_,L"{sequence_name}.{layer_name}");
  return this;
}

// ~UMovieGraphVideoOutputNode @ 14dd0e040

void __thiscall
UMovieGraphVideoOutputNode::~UMovieGraphVideoOutputNode(UMovieGraphVideoOutputNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// BeginFinalize_EncodeThread @ 14dd15c60

void __thiscall
UMovieGraphVideoOutputNode::BeginFinalize_EncodeThread
          (UMovieGraphVideoOutputNode *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x49,L"Pure virtual not implemented (%s)");
  return;
}

// Finalize_EncodeThread @ 14dd1f230

void __thiscall
UMovieGraphVideoOutputNode::Finalize_EncodeThread
          (UMovieGraphVideoOutputNode *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x4a,L"Pure virtual not implemented (%s)");
  return;
}

// GetFilenameExtension @ 14dd256a0

wchar_t * __thiscall
UMovieGraphVideoOutputNode::GetFilenameExtension(UMovieGraphVideoOutputNode *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x4b,L"Pure virtual not implemented (%s)");
  return L"";
}

// GetOrCreateOutputWriter @ 14dd29510

/* WARNING: Removing unreachable block (ram,0x00014dd29b30) */
/* WARNING: Removing unreachable block (ram,0x00014dd29b39) */
/* WARNING: Removing unreachable block (ram,0x00014dd29b5a) */
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

FMovieGraphCodecWriterWithPromise * __thiscall
UMovieGraphVideoOutputNode::GetOrCreateOutputWriter
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          *param_3,TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
                   *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString *pFVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  FMovieGraphCodecWriterWithPromise *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FEvent *pFVar14;
  longlong lVar15;
  uint uVar16;
  FMovieGraphCodecWriterWithPromise *pFVar17;
  undefined8 uVar18;
  FMovieGraphCodecWriterWithPromise *pFVar19;
  bool local_168 [8];
  FString local_160;
  FString *local_150;
  FString local_148;
  FString *local_138;
  TReferenceControllerBase<1> *local_130;
  TReferenceControllerBase<1> *local_128;
  FScriptContainerElement local_120;
  longlong local_118;
  UObject *local_110;
  TReferenceControllerBase<1> *local_108;
  TReferenceControllerBase<1> *local_100;
  FMovieGraphOutputFutureData local_f8;
  UMovieGraphPipeline *local_78;
  UObject *local_70;
  FMovieGraphTraversalContext *local_68;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *local_60;
  undefined8 local_58;
  FString local_50;
  undefined1 local_40;
  
  pFVar17 = (FMovieGraphCodecWriterWithPromise *)0x0;
  lVar15 = *(longlong *)(*(longlong *)&param_3->field_0x48 + 0x18);
  local_110 = (param_2->EvaluatedConfig).Object;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  GetOutputFilePaths(this,param_1,param_2,param_3,param_4,&local_160,&local_148);
  pFVar19 = pFVar17;
  pFVar12 = pFVar17;
  iVar11 = AllWriters.ArrayNum;
  if (0 < AllWriters.ArrayNum) {
    do {
      uVar16 = (uint)pFVar17;
      uVar10 = 0;
      if ((int)uVar16 < iVar11) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar11 = AllWriters.ArrayNum, bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
        return pFVar12;
      }
      iVar2 = *(int *)(*(undefined8 **)
                        (AllWriters.AllocatorInstance.Data + (longlong)&pFVar19->CodecWriter) + 1);
      if (iVar2 == local_148.Data.ArrayNum) {
        if (1 < iVar2) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)
                              **(undefined8 **)
                                (AllWriters.AllocatorInstance.Data + (longlong)&pFVar19->CodecWriter
                                ),(wchar_t *)local_148.Data.AllocatorInstance.Data);
          bVar8 = iVar11 == 0;
          iVar11 = AllWriters.ArrayNum;
          goto LAB_14dd29636;
        }
LAB_14dd2964d:
        uVar10 = 0;
        if ((int)uVar16 < iVar11) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
          return pFVar12;
        }
        pFVar12 = (FMovieGraphCodecWriterWithPromise *)
                  (AllWriters.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x28);
        if (pFVar12 != (FMovieGraphCodecWriterWithPromise *)0x0) goto LAB_14dd29d4b;
        break;
      }
      bVar8 = iVar2 + local_148.Data.ArrayNum == 1;
LAB_14dd29636:
      if (bVar8) goto LAB_14dd2964d;
      pFVar17 = (FMovieGraphCodecWriterWithPromise *)(ulonglong)(uVar16 + 1);
      pFVar19 = pFVar19 + 1;
      pFVar12 = (FMovieGraphCodecWriterWithPromise *)0x0;
    } while ((int)(uVar16 + 1) < iVar11);
  }
  uVar18 = *(undefined8 *)(*(longlong *)&param_3->field_0x48 + 8);
  if ((*(int *)(lVar15 + 0x17c) == *(int *)(lVar15 + 0x174)) &&
     (*(int *)(lVar15 + 0x180) == *(int *)(lVar15 + 0x178))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (((int)uVar18 == *(int *)(lVar15 + 0x100)) &&
     ((int)((ulonglong)uVar18 >> 0x20) == *(int *)(lVar15 + 0x104))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  cVar9 = (**(code **)(this->_padding_ + 0x3b0))(this);
  local_70 = local_110;
  if (((cVar9 != '\0') && (bVar8)) && (bVar5)) {
    uVar18 = CONCAT44(*(int *)(lVar15 + 0x180) - *(int *)(lVar15 + 0x178),
                      *(int *)(lVar15 + 0x17c) - *(int *)(lVar15 + 0x174));
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_110);
  }
  local_68 = &param_2->TraversalContext;
  iVar11 = local_160.Data.ArrayNum + -1;
  if (local_160.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  local_60 = param_3;
  local_58 = uVar18;
  ::FString::AssignRange(&local_50,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar11);
  local_40 = *(undefined1 *)(lVar15 + 0x18c);
  (**(code **)(this->_padding_ + 0x3b8))(this,&local_150,&local_78);
  if (local_150 != (FString *)0x0) {
    iVar11 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange(local_150,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar11);
    uVar10 = *(uint *)(lVar15 + 0x18);
    local_f8.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.FilePath.Data.ArrayNum = 0;
    local_f8.FilePath.Data.ArrayMax = 0;
    local_f8.FrameTemplatedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = 0;
    if ((int)uVar10 < (param_1->ActiveShotList).ArrayNum) {
      uVar16 = ~uVar10 >> 0x1f;
    }
    local_f8.FrameTemplatedFilePath.Data.ArrayNum = 0;
    local_f8.FrameTemplatedFilePath.Data.ArrayMax = 0;
    local_f8.DataIdentifier.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.DataIdentifier.LayerName.Data.ArrayNum = 0;
    local_f8.DataIdentifier.LayerName.Data.ArrayMax = 0;
    local_f8.DataIdentifier.RendererName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_f8.DataIdentifier.RendererName.Data.ArrayNum = 0;
    local_f8.DataIdentifier.RendererName.Data.ArrayMax = 0;
    local_f8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_f8.DataIdentifier.SubResourceName.Data.ArrayNum = 0;
    local_f8.DataIdentifier.SubResourceName.Data.ArrayMax = 0;
    local_f8.DataIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.DataIdentifier.CameraName.Data.ArrayNum = 0;
    local_f8.DataIdentifier.CameraName.Data.ArrayMax = 0;
    local_f8.OriginNodeClass = (UClass *)0x0;
    local_f8.RenderLayerIndex = 0;
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
      return pFVar12;
    }
    local_f8.Shot =
         *(UMoviePipelineExecutorShot **)
          ((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
    local_f8.DataIdentifier.RootBranchName.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
    local_f8.DataIdentifier.RootBranchName.Number = *(uint *)&param_3->field_0x4;
    ::FString::operator=(&local_f8.DataIdentifier.LayerName,(FString *)&param_3->field_0x8);
    ::FString::operator=(&local_f8.DataIdentifier.RendererName,(FString *)&param_3->field_0x18);
    ::FString::operator=(&local_f8.DataIdentifier.SubResourceName,(FString *)&param_3->field_0x28);
    ::FString::operator=(&local_f8.DataIdentifier.CameraName,(FString *)&param_3->field_0x38);
    iVar11 = local_160.Data.ArrayNum + -1;
    if (local_160.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange
              (&local_f8.FilePath,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar11);
    local_f8.OriginNodeClass = (UClass *)this->_padding_;
    local_f8.RenderLayerIndex = *(int *)(lVar15 + 0x188);
    pTVar13 = ::operator_new(0x90);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_108 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_100 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
      pTVar13[1]._padding_ = 0;
      pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[2]._padding_ = 0;
      pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[3]._padding_ = 0;
      pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[4]._padding_ = 0;
      pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[5]._padding_ = 0;
      pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[6]._padding_ = 0;
      pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[7]._padding_ = 0;
      pTVar13[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[7].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar13 + 1),4000);
      pTVar13[4]._padding_ = 0;
      pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
      pFVar14 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pTVar1 = pTVar13 + 1;
      pTVar13[7]._padding_ = (longlong)pFVar14;
      *(undefined1 *)&pTVar13[7].SharedReferenceCount = 0;
      if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
        return pFVar12;
      }
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
        return pFVar12;
      }
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      local_108 = pTVar1;
      local_100 = pTVar13;
    }
    pTVar1 = local_100;
    pTVar13 = local_108;
    UMovieGraphPipeline::AddOutputFuture(param_1,(TFuture<bool> *)&local_108,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    local_138 = local_150;
    local_118 = this->_padding_;
    local_150 = (FString *)0x0;
    local_120 = (FScriptContainerElement)0x1;
    local_130 = pTVar13;
    local_128 = pTVar1;
    if (((AllWriters.AllocatorInstance.Data <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 <
         AllWriters.AllocatorInstance.Data + (longlong)AllWriters.ArrayMax * 0x28)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
      return pFVar12;
    }
    if (AllWriters.ArrayNum == AllWriters.ArrayMax) {
      AllWriters.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&AllWriters.AllocatorInstance,&AllWriters.ArrayMax);
    }
    FVar6.Data = AllWriters.AllocatorInstance.Data;
    lVar15 = (longlong)AllWriters.ArrayNum;
    AllWriters.ArrayNum = AllWriters.ArrayNum + 1;
    *(FString **)(AllWriters.AllocatorInstance.Data + lVar15 * 0x28) = local_138;
    *(TReferenceControllerBase<1> **)(FVar6.Data + lVar15 * 0x28 + 8) = local_130;
    *(TReferenceControllerBase<1> **)(FVar6.Data + lVar15 * 0x28 + 0x10) = local_128;
    FVar6.Data[lVar15 * 0x28 + 0x18] = local_120;
    *(longlong *)(FVar6.Data + lVar15 * 0x28 + 0x20) = local_118;
    local_128 = (TReferenceControllerBase<1> *)0x0;
    local_130 = (TReferenceControllerBase<1> *)0x0;
    local_138 = (FString *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar7 = local_138;
    if (local_138 != (FString *)0x0) {
      *(undefined4 *)((longlong)local_138 + 0x58) = 0;
      if (*(void **)((longlong)local_138 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_138 + 0x50));
      }
      TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pFVar7 + 0x10));
      if (*(void **)pFVar7 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar7);
      }
      ::operator_delete(pFVar7,0x60);
    }
    uVar10 = 0;
    if ((int)(AllWriters.ArrayNum - 1U) < AllWriters.ArrayNum) {
      uVar10 = ~(AllWriters.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMovieGraphCodecWriterWithPromise *)(*pcVar4)();
      return pFVar12;
    }
    pFVar12 = (FMovieGraphCodecWriterWithPromise *)
              (AllWriters.AllocatorInstance.Data + (longlong)(AllWriters.ArrayNum + -1) * 0x28);
    cVar9 = (**(code **)(this->_padding_ + 0x3c0))(this,(pFVar12->CodecWriter).Ptr);
    this->bHasError = cVar9 == '\0';
    if ((cVar9 == '\0') &&
       (local_168[0] = (bool)cVar9, TPromise<bool>::SetValue(&pFVar12->Promise,local_168),
       1 < (byte)LogMovieRenderPipelineIO._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_f8.DataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_f8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_f8.DataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_f8.DataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
    if (local_f8.FrameTemplatedFilePath.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FrameTemplatedFilePath.Data.AllocatorInstance.Data);
    }
    if (local_f8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FilePath.Data.AllocatorInstance.Data);
    }
    pFVar7 = local_150;
    if (local_150 != (FString *)0x0) {
      local_150[5].Data.ArrayNum = 0;
      pFVar3 = local_150[5].Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar7 + 1));
      pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar7,0x60);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((pFVar12 == (FMovieGraphCodecWriterWithPromise *)0x0) &&
     (1 < (byte)LogMovieRenderPipelineIO._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
LAB_14dd29d4b:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return pFVar12;
}

// GetOutputFilePaths @ 14dd2a310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphVideoOutputNode::GetOutputFilePaths
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          *param_3,TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
                   *param_4,FString *param_5,FString *param_6)

{
  UMoviePipelineExecutorShot *pUVar1;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 this_00;
  FName FVar2;
  UMovieGraphFileOutputNode *pUVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType _Src;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *pTVar5;
  UMovieGraphGlobalOutputSettingNode *pUVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  FMovieGraphFilenameResolveParams *pFVar11;
  FString *pFVar12;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar13;
  int iVar14;
  uint uVar15;
  UMovieGraphFileOutputNode *pUVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStackY_598 [32];
  FString local_558;
  FString local_548;
  ForAnyElementType local_538;
  int local_530;
  int local_52c;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *local_528;
  FMovieGraphOutputMergerFrame *local_520;
  UMovieGraphVideoOutputNode *local_518;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_510;
  UMovieGraphPipeline *local_508;
  UMovieGraphGlobalOutputSettingNode *local_500;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_4f8;
  FString local_4e8;
  TPairInitializer<FString_const_&,FString_const_&> *local_4d8;
  TPairInitializer<FString_const_&,FString_const_&> *pTStack_4d0;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FMovieGraphFilenameResolveParams local_438;
  undefined1 local_2d8 [32];
  void *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  void *local_298;
  undefined4 local_290;
  undefined1 local_288 [32];
  void *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  undefined4 local_254;
  void *local_248;
  undefined4 local_240;
  TPairInitializer<FString_const_&,FString_const_&> local_238;
  FString *local_228;
  undefined1 *local_220;
  FString *local_218;
  FString *local_210;
  undefined1 local_208 [72];
  undefined4 local_1c0;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  pUVar1 = (param_2->TraversalContext).Shot.field0_0x0.DebugPtr;
  local_528 = param_3;
  local_520 = param_2;
  local_518 = this;
  local_508 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UMoviePipelineExecutorShot *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->EvaluatedConfig).Object;
  local_500 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                        (this_00.DebugPtr,UMovieGraphNode::GlobalsPinName,true,true);
  FVar2.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
  FVar2.Number = *(uint *)&param_3->field_0x4;
  UMovieGraphEvaluatedConfig::GetSettingsForBranch
            (this_00.DebugPtr,&local_4f8,(UClass *)this->_padding_,FVar2,true,true);
  pUVar16 = (UMovieGraphFileOutputNode *)0x0;
  if (local_4f8.ArrayNum < 1) {
    if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(UMovieGraphFileOutputNode **)local_4f8.AllocatorInstance.Data;
    FMemory::Free(local_4f8.AllocatorInstance.Data);
    if (pUVar3 != (UMovieGraphFileOutputNode *)0x0) {
      pUVar9 = StaticClass();
      iVar14 = (int)pUVar9->_padding_;
      if ((iVar14 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar9->_padding_)) {
        pUVar16 = pUVar3;
      }
    }
  }
  lVar18 = *(longlong *)(*(longlong *)&param_3->field_0x48 + 0x18);
  local_558.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = (FString *)(lVar18 + 0x138);
  if (*(int *)(lVar18 + 0x140) < 2) {
    pFVar12 = &pUVar16->FileNameFormat;
  }
  local_558.Data.ArrayNum = (pFVar12->Data).ArrayNum;
  lVar18 = (longlong)local_558.Data.ArrayNum;
  pFVar4 = (pFVar12->Data).AllocatorInstance.Data;
  if (local_558.Data.ArrayNum == 0) {
    local_558.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_558.Data.ArrayNum,0,(ForAnyElementType *)&local_558,local_558.Data.ArrayNum
               ,&local_558.Data.ArrayMax);
    memcpy(local_558.Data.AllocatorInstance.Data,pFVar4,lVar18 * 2);
  }
  ::FString::FString(&local_498,L"camera_name");
  pTVar5 = local_528;
  local_238.Value = (FString *)&local_528->field_0x38;
  local_238.Key = &local_498;
  ::FString::FString(&local_4a8,L"render_pass");
  local_228 = &local_4a8;
  local_220 = &pTVar5->field_0x18;
  ::FString::FString(&local_4b8,L"ext");
  pwVar10 = (wchar_t *)(**(code **)(local_518->_padding_ + 0x3e0))();
  ::FString::FString(&local_4c8,pwVar10);
  local_218 = &local_4b8;
  local_210 = &local_4c8;
  local_4d8 = &local_238;
  pTStack_4d0 = (TPairInitializer<FString_const_&,FString_const_&> *)local_208;
  local_488._First = local_4d8;
  local_488._Last = pTStack_4d0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_208,&local_488);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  local_510.ObjectPtr.field0_0x0 = this_00.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  FMovieGraphFilenameResolveParams::MakeResolveParams
            (&local_1b8,(FMovieGraphRenderDataIdentifier *)pTVar5,local_508,
             (TObjectPtr<UMovieGraphEvaluatedConfig> *)&local_510.ObjectPtr,
             &local_520->TraversalContext,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_208);
  iVar14 = 0;
  if (local_558.Data.ArrayNum != 0) {
    iVar14 = local_558.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&local_1b8.FileNameOverride,(wchar_t *)local_558.Data.AllocatorInstance.Data,iVar14);
  if (pUVar1 == (UMoviePipelineExecutorShot *)0x0) {
    pFVar11 = FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams
                        (&local_438,&local_1b8);
    local_1b8.Version = UMovieGraphBlueprintLibrary::ResolveVersionNumber(pFVar11,true);
  }
  else {
    local_1b8.Version = (pUVar1->ShotInfo).VersionNumber;
  }
  local_2d8._0_8_ = (FScriptContainerElement *)0x0;
  local_2d8._8_8_ = 0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_2ac = 0x80;
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (void *)0x0;
  local_260 = 0;
  local_25c = 0x80;
  local_258 = 0xffffffff;
  local_254 = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_558,true);
  pUVar6 = local_500;
  local_538.Data = (FScriptContainerElement *)0x0;
  local_530 = (local_500->OutputDirectory).Path.Data.ArrayNum;
  lVar18 = (longlong)local_530;
  pFVar4 = (local_500->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (local_530 == 0) {
    local_52c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_530,0,&local_538,local_530,&local_52c);
    memcpy(local_538.Data,pFVar4,lVar18 * 2);
  }
  iVar14 = local_530;
  _Src.Data = local_538.Data;
  if (local_558.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = local_558.Data.ArrayNum + -1;
  }
  if ((local_530 == 0) && (iVar17 + 1 != 0)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = iVar17 + 1 + iVar8;
  local_548.Data.ArrayNum = local_530;
  if ((local_530 == 0) && (iVar8 == 0)) {
    local_548.Data.ArrayMax = 0;
  }
  else {
    uVar15 = local_530 + iVar8;
    if ((int)uVar15 < local_530) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar15,0,(ForAnyElementType *)&local_548,local_530,&local_548.Data.ArrayMax);
    if (iVar14 != 0) {
      memcpy(local_548.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar14 * 2);
    }
  }
  ::FString::PathAppend(&local_548,(wchar_t *)local_558.Data.AllocatorInstance.Data,iVar17);
  UMovieGraphFileOutputNode::DisambiguateFilename(&local_548,local_520,pUVar16,local_528);
  bVar7 = pUVar6->bOverwriteExistingOutput;
  pUVar6->bOverwriteExistingOutput = true;
  pFVar12 = UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
                      (&local_478,&local_548,&local_1b8,(FMovieGraphResolveArgs *)local_2d8);
  if (param_6 != pFVar12) {
    pFVar4 = (param_6->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_6->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_6->Data).ArrayNum = (pFVar12->Data).ArrayNum;
    (param_6->Data).ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  pUVar6->bOverwriteExistingOutput = bVar7;
  bVar7 = FPaths::IsRelative(param_6);
  if (bVar7) {
    pFVar12 = FPaths::ConvertRelativePathToFull(&local_468,param_6);
    if (param_6 != pFVar12) {
      pFVar4 = (param_6->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_6->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_6->Data).ArrayNum = (pFVar12->Data).ArrayNum;
      (param_6->Data).ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
                      (&local_458,&local_548,&local_1b8,(FMovieGraphResolveArgs *)local_2d8);
  if (param_5 != pFVar12) {
    pFVar4 = (param_5->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (param_5->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_5->Data).ArrayNum = (pFVar12->Data).ArrayNum;
    (param_5->Data).ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  bVar7 = FPaths::IsRelative(param_5);
  if (bVar7) {
    pFVar12 = FPaths::ConvertRelativePathToFull(&local_448,param_5);
    if (param_5 != pFVar12) {
      pFVar4 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_5->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_5->Data).ArrayNum = (pFVar12->Data).ArrayNum;
      (param_5->Data).ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  FPaths::GetPath(&local_4e8,param_5);
  this_01 = FPlatformFileManager::Get();
  pIVar13 = FPlatformFileManager::GetPlatformFile(this_01);
  (**(code **)((longlong)*pIVar13 + 0x200))(pIVar13);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  if (local_538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data);
  }
  local_240 = 0;
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_288,0,local_288._8_4_);
  bVar7 = local_288._12_4_ != 0;
  local_288._8_8_ = (ulonglong)(uint)local_288._12_4_ << 0x20;
  if (bVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
  }
  local_258 = 0xffffffff;
  local_254 = 0;
  local_260 = 0;
  if (0x80 < local_25c) {
    local_25c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10),0);
  }
  if (local_268 != (void *)0x0) {
    FMemory::Free(local_268);
  }
  if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_288._0_8_);
  }
  local_290 = 0;
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2d8,0,local_2d8._8_4_);
  bVar7 = local_2d8._12_4_ != 0;
  local_2d8._8_8_ = (ulonglong)(uint)local_2d8._12_4_ << 0x20;
  if (bVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_2d8,0,(int *)(local_2d8 + 0xc));
  }
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_2b0 = 0;
  if (0x80 < local_2ac) {
    local_2ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10),0);
  }
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2d8._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
  local_1c0 = 0;
  if ((void *)local_208._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_208._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd2d840

UClass * __cdecl UMovieGraphVideoOutputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVideoOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphVideoOutputNode,0xd0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphVideoOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphVideoOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVideoOutputNode.InnerSingleton;
}

// Initialize_EncodeThread @ 14dd33680

bool __thiscall
UMovieGraphVideoOutputNode::Initialize_EncodeThread
          (UMovieGraphVideoOutputNode *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x47,L"Pure virtual not implemented (%s)");
  return true;
}

// Initialize_GameThread @ 14dd336b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
__thiscall
UMovieGraphVideoOutputNode::Initialize_GameThread
          (UMovieGraphVideoOutputNode *this,FMovieGraphVideoNodeInitializationContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x46,L"Pure virtual not implemented (%s)");
  param_1->Pipeline = (UMovieGraphPipeline *)0x0;
  return (TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
          )(IVideoCodecWriter *)param_1;
}

// IsAudioSupported @ 14dd336f0

bool __thiscall UMovieGraphVideoOutputNode::IsAudioSupported(UMovieGraphVideoOutputNode *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x4c,L"Pure virtual not implemented (%s)");
  return false;
}

// IsFinishedWritingToDiskImpl @ 14dd33920

bool __thiscall
UMovieGraphVideoOutputNode::IsFinishedWritingToDiskImpl(UMovieGraphVideoOutputNode *this)

{
  return true;
}

// OnAllFramesFinalizedImpl @ 14dd373b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphVideoOutputNode::OnAllFramesFinalizedImpl
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  FFutureState *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res20 [8];
  
  iVar10 = AllWriters.ArrayNum;
  pFVar5 = AllWriters.AllocatorInstance.Data + (longlong)AllWriters.ArrayNum * 0x28;
  FVar6.Data = AllWriters.AllocatorInstance.Data;
  while( true ) {
    if (AllWriters.ArrayNum != iVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMovieGraphVideoOutputNode::FMovieGraphCodecWriterWithPromise,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    FVar2.Data = AllWriters.AllocatorInstance.Data;
    if (FVar6.Data == pFVar5) break;
    if (*(longlong *)(FVar6.Data + 0x20) == this->_padding_) {
      (**(code **)(this->_padding_ + 0x3d8))(this,*(undefined8 *)FVar6.Data);
      if (this->bHasError == false) {
        if (*(longlong *)(FVar6.Data + 8) == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(longlong *)(FVar6.Data + 8) == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        this_00 = *(FFutureState **)(FVar6.Data + 8);
        if (this_00->bComplete != (TAtomic<bool>)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(undefined1 *)this_00[1].Mutex.CriticalSection.Opaque1 = 1;
        FFutureState::MarkComplete(this_00);
      }
    }
    FVar6.Data = FVar6.Data + 0x28;
  }
  lVar4 = (longlong)AllWriters.ArrayNum;
  if (AllWriters.ArrayNum == 0) {
    this->bHasError = false;
    return;
  }
  iVar12 = 0;
  bVar3 = *(longlong *)(AllWriters.AllocatorInstance.Data + 0x20) != this->_padding_;
  lVar7 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar7 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar4) {
      pFVar5 = FVar2.Data + (lVar8 + (lVar7 + 2) * 4) * 8;
      do {
        if (bVar3 != (*(longlong *)pFVar5 != this->_padding_)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar5 = pFVar5 + 0x28;
      } while (lVar8 < lVar4);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar3 == false) {
      DestructItems<UMovieGraphVideoOutputNode::FMovieGraphCodecWriterWithPromise,int>
                ((FMovieGraphCodecWriterWithPromise *)(FVar2.Data + (longlong)iVar10 * 0x28),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(FVar2.Data + (longlong)iVar12 * 0x28,FVar2.Data + (longlong)iVar10 * 0x28,
                (longlong)iVar9 * 0x28);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar3 = (bool)(bVar3 ^ 1);
    lVar7 = lVar8;
    iVar10 = iVar11;
    if (lVar4 <= lVar8) {
      AllWriters.ArrayNum = iVar12;
      this->bHasError = false;
      return;
    }
  } while( true );
}

// OnAllFramesSubmittedImpl @ 14dd375f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphVideoOutputNode::OnAllFramesSubmittedImpl
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res20 [8];
  
  iVar2 = AllWriters.ArrayNum;
  pFVar1 = AllWriters.AllocatorInstance.Data + (longlong)AllWriters.ArrayNum * 0x28;
  FVar3.Data = AllWriters.AllocatorInstance.Data;
  while( true ) {
    if (AllWriters.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieGraphVideoOutputNode::FMovieGraphCodecWriterWithPromise,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar3.Data == pFVar1) break;
    if (*(longlong *)(FVar3.Data + 0x20) == this->_padding_) {
      (**(code **)(this->_padding_ + 0x3d0))(this,*(undefined8 *)FVar3.Data);
    }
    FVar3.Data = FVar3.Data + 0x28;
  }
  return;
}

// OnAllShotFramesSubmittedImpl @ 14dd37680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphVideoOutputNode::OnAllShotFramesSubmittedImpl
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          UMoviePipelineExecutorShot *param_2,TObjectPtr<UMovieGraphEvaluatedConfig> *param_3,
          bool param_4)

{
  int iVar1;
  UMovieGraphGlobalOutputSettingNode *pUVar2;
  LARGE_INTEGER local_res20;
  FString local_28 [2];
  
  pUVar2 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((param_3->field0_0x0).DebugPtr,UMovieGraphNode::GlobalsPinName,true,true);
  if (param_4) {
    ::operator/(local_28,&(pUVar2->OutputDirectory).Path,(FString *)&this->_padding_);
    iVar1 = ::FString::Find(local_28,L"{shot_name}",0xb,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      iVar1 = ::FString::Find(local_28,L"{camera_name}",0xd,IgnoreCase,FromStart,-1);
      if ((iVar1 == -1) && (2 < (byte)LogMovieRenderPipelineIO._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
      }
    }
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    QueryPerformanceCounter(&local_res20);
    (**(code **)(this->_padding_ + 0x388))(this,param_1,param_3);
    (**(code **)(this->_padding_ + 0x390))(this,param_1,param_3);
    QueryPerformanceCounter(&local_res20);
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnReceiveImageDataImpl @ 14dd38710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UMovieGraphVideoOutputNode::OnReceiveImageDataImpl
          (UMovieGraphVideoOutputNode *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          *param_3)

{
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  FName FVar5;
  UMovieGraphEvaluatedConfig *this_00;
  FName FVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  UMovieGraphVideoOutputNode *pUVar12;
  FMovieGraphOutputMergerFrame *pFVar13;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar14;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar15;
  bool bVar16;
  char cVar17;
  UClass *pUVar18;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar19;
  FMovieGraphCodecWriterWithPromise *pFVar20;
  FLightweightSourceData *pFVar21;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar22;
  byte bVar23;
  undefined8 *puVar24;
  ForAnyElementType FVar25;
  ForElementType<FSetElementId> FVar26;
  undefined1 *puVar27;
  IImagePixelDataPayload *pIVar28;
  int iVar29;
  int iVar30;
  FSoftObjectPath *this_01;
  UMovieGraphFileOutputNode *pUVar31;
  longlong lVar32;
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
  *pTVar33;
  uint uVar34;
  FMovieGraphRenderDataIdentifier *pFVar35;
  uint uVar36;
  int iVar37;
  FSoftObjectPath *pFVar38;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *pTVar39;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar40;
  undefined1 *puVar41;
  uint *puVar42;
  uint *puVar43;
  int iVar44;
  uint uVar45;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar46;
  FScriptContainerElement *pFVar47;
  uint uVar48;
  undefined1 auStackY_468 [32];
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416 [2];
  uint local_414;
  IImagePixelDataPayload *local_410;
  ForAnyElementType local_408;
  undefined8 local_400;
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
  *local_3f8;
  UMovieGraphVideoOutputNode *local_3f0;
  longlong local_3e8;
  FMovieGraphOutputMergerFrame *local_3e0;
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
  *local_3d8;
  TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
  local_3d0;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_3b0;
  int iStack_3a8;
  uint uStack_3a4;
  undefined1 *local_3a0;
  uint uStack_398;
  uint uStack_394;
  uint local_390;
  int iStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *local_380;
  undefined8 local_378;
  UObject *local_370;
  FName local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  undefined8 *local_320;
  FSoftObjectPath local_318;
  FSoftObjectPath local_2f8;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_2d8;
  int iStack_2d0;
  uint uStack_2cc;
  undefined1 *local_2c8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  UObject *local_2a8;
  UMovieGraphFileOutputNode *local_2a0;
  int local_298;
  int local_294;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_290;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_280;
  int local_270;
  int local_26c;
  UMovieGraphPipeline *local_268;
  UObject *local_260;
  FMovieGraphCodecWriterWithPromise *local_258;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  TAsyncCropImage<FLinearColor> local_1f0;
  TAsyncCropImage<FFloat16Color> local_1d0;
  TAsyncCropImage<FColor> local_1b0;
  FString local_190;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_180;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_170;
  undefined8 uStack_168;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  FString local_140;
  FMovieGraphRenderDataIdentifier local_130;
  undefined4 local_cc;
  undefined4 local_ac;
  TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  iVar29 = 0;
  local_414 = 0;
  if (this->bHasError != false) {
    return;
  }
  local_370 = (param_2->EvaluatedConfig).Object;
  local_3f8 = param_3;
  local_3f0 = this;
  local_3e0 = param_2;
  local_268 = param_1;
  UMovieGraphFileOutputNode::GetCompositedPasses(&local_3d0,param_2);
  pTVar1 = &param_2->ImageOutputData;
  local_a8.Pairs.Elements._0_8_ = 0;
  puVar8 = &(param_2->ImageOutputData).field_0x10;
  local_a8.Pairs.Elements._8_8_ = 0;
  local_a8.Pairs.Elements._32_8_ = 0;
  local_a8.Pairs.Elements._40_4_ = 0;
  uStack_2cc = 1;
  local_a8.Pairs.Elements._44_4_ = 0x80;
  local_a8.Pairs.Elements._48_4_ = 0xffffffff;
  local_a8.Pairs.Elements._52_4_ = 0;
  local_a8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.Pairs.HashSize = 0;
  iVar30 = *(int *)&(param_2->ImageOutputData).field_0x28;
  iStack_2bc = 0;
  iStack_2d0 = iVar29;
  local_2b8 = iVar29;
  if (iVar30 != 0) {
    puVar42 = *(uint **)&(param_2->ImageOutputData).field_0x20;
    if (puVar42 == (uint *)0x0) {
      puVar42 = (uint *)puVar8;
    }
    uVar36 = *puVar42;
    while (uVar36 == 0) {
      iStack_2d0 = iStack_2d0 + 1;
      local_2b8 = local_2b8 + 0x20;
      iStack_2bc = iVar30;
      if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2d0) goto LAB_14dd38852;
      uVar36 = puVar42[iStack_2d0];
    }
    uStack_2cc = ~(uVar36 - 1) & uVar36;
    uVar2 = (ulonglong)uStack_2cc * 2 + 1;
    lVar32 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_298 = (int)lVar32;
    iStack_2bc = local_298 + -1 + local_2b8;
    if (iVar30 < iStack_2bc) {
      iStack_2bc = iVar30;
    }
  }
LAB_14dd38852:
  uVar36 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  uStack_2b4 = local_cc;
  uVar34 = uVar36 & 0xffffffe0;
  iStack_2b0 = *(int *)&(param_2->ImageOutputData).field_0x8 -
               *(int *)&(param_2->ImageOutputData).field_0x34;
  TStack_248._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
  uStack_2c0 = 0xffffffff;
  TStack_248.CurrentBitIndex = iStack_2bc;
  TStack_248.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar36 >> 5;
  TStack_248._28_4_ = local_cc;
  TStack_248.BaseBitIndex = local_2b8;
  uStack_228 = CONCAT44(uStack_2ac,iStack_2b0);
  local_2d8 = pTVar1;
  local_2c8 = puVar8;
  local_250 = pTVar1;
  TStack_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar36 < 0) || (iVar30 < (int)uVar36)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar33 = local_3f8;
  uVar45 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  if (uVar36 != uVar45) {
    puVar27 = *(undefined1 **)&(param_2->ImageOutputData).field_0x20;
    puVar41 = puVar8;
    if (puVar27 != (undefined1 *)0x0) {
      puVar41 = puVar27;
    }
    uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar29 * 4);
    while (uVar36 == 0) {
      iVar29 = iVar29 + 1;
      uVar34 = uVar34 + 0x20;
      uVar36 = uVar45;
      if ((int)(((int)(uVar45 - 1) >> 0x1f & 0x1fU) + (uVar45 - 1)) >> 5 < iVar29)
      goto LAB_14dd38990;
      uVar36 = *(uint *)(puVar41 + (longlong)iVar29 * 4);
    }
    uVar2 = (ulonglong)(~(uVar36 - 1) & uVar36) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_26c = (int)lVar32;
    uVar36 = (uVar34 - 1) + local_26c;
    if ((int)uVar45 < (int)uVar36) {
      uVar36 = uVar45;
    }
  }
LAB_14dd38990:
  do {
    pTVar14 = local_250;
    if (*(int *)&local_250->field_0x8 - *(int *)&local_250->field_0x34 != (int)uStack_228) {
      local_418 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_418);
    }
    if (((TStack_248.CurrentBitIndex == uVar36) &&
        (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) && (pTVar14 == pTVar1)
       ) {
      TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
      ::Append<FDefaultSetAllocator>
                (&local_3e0->NodeInstanceToPayloads,
                 (TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
                  *)&local_a8);
      iVar29 = *(int *)&(param_2->ImageOutputData).field_0x28;
      iStack_3a8 = 0;
      local_390 = 0;
      uStack_3a4 = 1;
      uStack_394 = 0;
      if (iVar29 == 0) goto LAB_14dd38dff;
      puVar42 = *(uint **)&(param_2->ImageOutputData).field_0x20;
      puVar43 = (uint *)puVar8;
      if (puVar42 != (uint *)0x0) {
        puVar43 = puVar42;
      }
      uVar36 = *puVar43;
      break;
    }
    pFVar35 = (FMovieGraphRenderDataIdentifier *)
              ((longlong)TStack_248.CurrentBitIndex * 0x58 + *(longlong *)pTVar14);
    lVar32 = *(longlong *)((longlong)pFVar35[1].RootBranchName + 0x18);
    local_3e8 = lVar32;
    if (*(int *)(lVar32 + 0x200) == 0) {
LAB_14dd38a4e:
      bVar16 = false;
    }
    else {
      local_414 = local_414 | 1;
      local_318.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_318.AssetPath.PackageName.Number = 0;
      local_318.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_318.AssetPath.AssetName.Number = 0;
      local_318.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.SubPathString.Data.ArrayNum = 0;
      local_318.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_318,(UObject *)local_3f0->_padding_);
      this_01 = *(FSoftObjectPath **)(lVar32 + 0x1f8);
      pFVar38 = this_01 + *(int *)(lVar32 + 0x200);
      for (; this_01 != pFVar38; this_01 = this_01 + 1) {
        bVar16 = FSoftObjectPath::operator==(this_01,&local_318);
        if (bVar16) goto LAB_14dd38a4e;
      }
      bVar16 = true;
    }
    if (((local_414 & 1) != 0) &&
       (local_414 = local_414 & 0xfffffffe,
       local_318.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_318.SubPathString.Data.AllocatorInstance.Data);
    }
    if (!bVar16) {
      pTVar39 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                 *)(local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x50);
      for (FVar25.Data = local_3d0.AllocatorInstance.Data;
          (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
           *)FVar25.Data != pTVar39; FVar25.Data = FVar25.Data + 0x50) {
        bVar16 = FMovieGraphRenderDataIdentifier::operator==
                           (pFVar35,(FMovieGraphRenderDataIdentifier *)FVar25.Data);
        if (bVar16) {
          if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)FVar25.Data !=
              (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)0x0) goto LAB_14dd38d2a;
          break;
        }
      }
      local_130.RootBranchName = pFVar35->RootBranchName;
      ::FString::FString(&local_130.LayerName,&pFVar35->LayerName);
      ::FString::FString(&local_130.RendererName,&pFVar35->RendererName);
      ::FString::FString(&local_130.SubResourceName,&pFVar35->SubResourceName);
      ::FString::FString(&local_130.CameraName,&pFVar35->CameraName);
      uVar34 = ::GetTypeHash(&local_130);
      iVar29 = TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FMovieGraphRenderDataIdentifier>(pTVar33,uVar34,pFVar35);
      pFVar13 = local_3e0;
      if (iVar29 != -1) {
        if (((local_3e0->EvaluatedConfig).Object == (UObject *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                ,0x67,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UMovieGraphEvaluatedConfig::GetSettingsForBranch
                  ((UMovieGraphEvaluatedConfig *)(pFVar13->EvaluatedConfig).Object,&local_290,
                   (UClass *)local_3f0->_padding_,pFVar35->RootBranchName,false,true);
        if (local_290.ArrayNum < 1) {
          if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.AllocatorInstance.Data);
          }
LAB_14dd38bc2:
          pUVar31 = (UMovieGraphFileOutputNode *)0x0;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphVideoOutputNode.cpp"
                              ,0x69,
                              L"Video output should not exist without a parent node in the graph.");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
          pUVar31 = *(UMovieGraphFileOutputNode **)local_290.AllocatorInstance.Data;
          FMemory::Free(local_290.AllocatorInstance.Data);
          if (pUVar31 == (UMovieGraphFileOutputNode *)0x0) goto LAB_14dd38bc2;
          pUVar18 = StaticClass();
          iVar29 = (int)pUVar18->_padding_;
          if ((*(int *)(pUVar31->_padding_ + 0x38) < iVar29) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar31->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
              &pUVar18->_padding_)) goto LAB_14dd38bc2;
        }
        uVar34 = ((uint)((ulonglong)pUVar31 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar31 >> 4)) *
                 -0x7a143595;
        uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
        uVar34 = uVar34 >> 0x10 ^ uVar34;
        local_2a0 = pUVar31;
        if (local_a8.Pairs.Elements._8_4_ != local_a8.Pairs.Elements._52_4_) {
          FVar26 = (ForElementType<FSetElementId>)&local_a8.Pairs.Hash;
          if (local_a8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_a8.Pairs.Hash.SecondaryData;
          }
          for (iVar29 = *(int *)((longlong)FVar26 +
                                (ulonglong)(local_a8.Pairs.HashSize - 1U & uVar34) * 4);
              iVar29 != -1;
              iVar29 = *(int *)((longlong)iVar29 * 0x20 + 0x18 + local_a8.Pairs.Elements._0_8_)) {
            if (*(UMovieGraphFileOutputNode **)
                 ((longlong)iVar29 * 0x20 + local_a8.Pairs.Elements._0_8_) == pUVar31) {
              if ((iVar29 != -1) &&
                 (lVar32 = (longlong)iVar29 * 0x20 + local_a8.Pairs.Elements._0_8_, lVar32 != 0)) {
                pTVar19 = (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>
                           *)(lVar32 + 8);
                goto LAB_14dd38c95;
              }
              break;
            }
          }
        }
        pTVar19 = TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UMovieGraphFileOutputNode_const_*>(&local_a8,uVar34,&local_2a0);
LAB_14dd38c95:
        pFVar47 = (pTVar19->AllocatorInstance).Data;
        if (((pFVar47 <= (FScriptContainerElement *)&local_3e8) &&
            ((FScriptContainerElement *)&local_3e8 < pFVar47 + (longlong)pTVar19->ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar29 = pTVar19->ArrayNum;
        if (iVar29 == pTVar19->ArrayMax) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
        }
        pTVar19->ArrayNum = iVar29 + 1;
        *(longlong *)((pTVar19->AllocatorInstance).Data + (longlong)iVar29 * 8) = local_3e8;
      }
    }
LAB_14dd38d2a:
    TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
  } while( true );
joined_r0x00014dd38dbc:
  if (uVar36 != 0) goto LAB_14dd38dd7;
  iStack_3a8 = iStack_3a8 + 1;
  local_390 = local_390 + 0x20;
  uStack_394 = iVar29;
  if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3a8) goto LAB_14dd38dff;
  uVar36 = puVar43[iStack_3a8];
  goto joined_r0x00014dd38dbc;
LAB_14dd38dd7:
  uStack_3a4 = ~(uVar36 - 1) & uVar36;
  uVar2 = (ulonglong)uStack_3a4 * 2 + 1;
  lVar32 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
    }
  }
  local_294 = (int)lVar32;
  uStack_394 = local_390 + -1 + local_294;
  if (iVar29 < (int)uStack_394) {
    uStack_394 = iVar29;
  }
LAB_14dd38dff:
  uVar36 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  iStack_38c = local_ac;
  bVar23 = (byte)uVar36 & 0x1f;
  iStack_388 = *(int *)&(param_2->ImageOutputData).field_0x8 -
               *(int *)&(param_2->ImageOutputData).field_0x34;
  uVar34 = uVar36 & 0xffffffe0;
  TStack_218._padding_ = CONCAT44(uStack_3a4,iStack_3a8);
  uStack_398 = 0xffffffff;
  TStack_218.CurrentBitIndex = uStack_394;
  TStack_218.UnvisitedBitMask = 0xffffffff;
  iVar30 = (int)uVar36 >> 5;
  TStack_218._28_4_ = local_ac;
  TStack_218.BaseBitIndex = local_390;
  uStack_1f8 = CONCAT44(uStack_384,iStack_388);
  uVar48 = 1 << bVar23;
  uVar45 = -1 << bVar23;
  local_220 = pTVar1;
  TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar36 < 0) || (iVar29 < (int)uVar36)) &&
     (local_3b0 = pTVar1, local_3a0 = puVar8,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar3 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  uStack_394 = uVar36;
  if (uVar36 != uVar3) {
    puVar27 = *(undefined1 **)&(param_2->ImageOutputData).field_0x20;
    puVar41 = puVar8;
    if (puVar27 != (undefined1 *)0x0) {
      puVar41 = puVar27;
    }
    uVar36 = uVar45 & *(uint *)(puVar41 + (longlong)iVar30 * 4);
    while (uVar36 == 0) {
      iVar30 = iVar30 + 1;
      uVar34 = uVar34 + 0x20;
      uStack_394 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar30) goto LAB_14dd38f23;
      uVar45 = 0xffffffff;
      uVar36 = *(uint *)(puVar41 + (longlong)iVar30 * 4);
    }
    uVar48 = ~(uVar36 - 1) & uVar36;
    uVar2 = (ulonglong)uVar48 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_270 = (int)lVar32;
    uStack_394 = (uVar34 - 1) + local_270;
    if ((int)uVar3 < (int)uStack_394) {
      uStack_394 = uVar3;
    }
  }
LAB_14dd38f23:
  iStack_38c = iStack_2bc;
  iStack_388 = *(int *)&(param_2->ImageOutputData).field_0x8 -
               *(int *)&(param_2->ImageOutputData).field_0x34;
  uStack_168 = CONCAT44(uVar48,iVar30);
  uStack_158 = CONCAT44(uStack_394,uVar45);
  local_150 = CONCAT44(iStack_2bc,uVar34);
  uStack_148 = CONCAT44(uStack_384,iStack_388);
  local_3b0 = pTVar1;
  iStack_3a8 = iVar30;
  uStack_3a4 = uVar48;
  local_3a0 = puVar8;
  uStack_398 = uVar45;
  local_390 = uVar34;
  local_170 = pTVar1;
  local_160 = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
LAB_14dd38f73:
  pTVar1 = local_220;
  if (*(int *)&local_220->field_0x8 - *(int *)&local_220->field_0x34 != (int)uStack_1f8) {
    local_417 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_417);
  }
  pFVar13 = local_3e0;
  if (((TStack_218.CurrentBitIndex == uStack_158._4_4_) && (TStack_218.Array == local_160)) &&
     (pTVar1 == local_170)) {
    local_a8.Pairs.HashSize = 0;
    if (local_a8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_a8);
    DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
              ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
    if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)local_3d0.AllocatorInstance.Data ==
        (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)0x0) {
      return;
    }
    FMemory::Free(local_3d0.AllocatorInstance.Data);
    return;
  }
  pTVar39 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
             *)((longlong)TStack_218.CurrentBitIndex * 0x58 + *(longlong *)pTVar1);
  if (((local_3e0->EvaluatedConfig).Object == (UObject *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar12 = local_3f0;
  FVar6.ComparisonIndex.Value = *(uint *)&pTVar39->field_0x0;
  FVar6.Number = *(uint *)&pTVar39->field_0x4;
  UMovieGraphEvaluatedConfig::GetSettingsForBranch
            ((UMovieGraphEvaluatedConfig *)(pFVar13->EvaluatedConfig).Object,&local_280,
             (UClass *)local_3f0->_padding_,FVar6,false,true);
  if (local_280.ArrayNum < 1) {
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
  }
  else {
    uVar2 = *(ulonglong *)local_280.AllocatorInstance.Data;
    FMemory::Free(local_280.AllocatorInstance.Data);
    if (uVar2 != 0) {
      pUVar18 = StaticClass();
      iVar29 = (int)pUVar18->_padding_;
      if (((iVar29 <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) + (longlong)iVar29 * 8) ==
           &pUVar18->_padding_)) && ((*(uint *)(uVar2 + 8) >> 0x1e & 1) == 0)) {
        uVar36 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
        if (local_a8.Pairs.Elements._8_4_ != local_a8.Pairs.Elements._52_4_) {
          FVar26 = (ForElementType<FSetElementId>)&local_a8.Pairs.Hash;
          if (local_a8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_a8.Pairs.Hash.SecondaryData;
          }
          for (iVar29 = *(int *)((longlong)FVar26 +
                                (ulonglong)
                                (local_a8.Pairs.HashSize - 1U & (uVar36 >> 0x10 ^ uVar36)) * 4);
              iVar29 != -1;
              iVar29 = *(int *)((longlong)iVar29 * 0x20 + 0x18 + local_a8.Pairs.Elements._0_8_)) {
            if (*(ulonglong *)((longlong)iVar29 * 0x20 + local_a8.Pairs.Elements._0_8_) == uVar2) {
              if (((iVar29 != -1) &&
                  (lVar32 = (longlong)iVar29 * 0x20 + local_a8.Pairs.Elements._0_8_, lVar32 != 0))
                 && ((undefined8 *)(lVar32 + 8) != (undefined8 *)0x0)) {
                pTVar33 = *(TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                            **)&pTVar39->field_0x48;
                local_410 = ((TSharedPtr<IImagePixelDataPayload,1> *)&(pTVar33->Elements).field_0x18
                            )->Object;
                puVar24 = *(undefined8 **)(lVar32 + 8);
                puVar9 = puVar24 + *(int *)(lVar32 + 0x10);
                goto joined_r0x00014dd39161;
              }
              break;
            }
          }
        }
      }
    }
  }
  goto LAB_14dd399e7;
joined_r0x00014dd39161:
  local_3f8 = pTVar33;
  if (puVar24 == puVar9) goto LAB_14dd399e7;
  if ((IImagePixelDataPayload *)*puVar24 == local_410) {
    pFVar20 = GetOrCreateOutputWriter(pUVar12,local_268,pFVar13,pTVar39,&local_3d0);
    local_258 = pFVar20;
    if ((pFVar20 == (FMovieGraphCodecWriterWithPromise *)0x0) || (pUVar12->bHasError != false)) {
      uVar36 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
      if (*(int *)&(pFVar13->NodeInstanceToPayloads).field_0x8 ==
          *(int *)&(pFVar13->NodeInstanceToPayloads).field_0x34) goto LAB_14dd398ad;
      puVar8 = *(undefined1 **)&(pFVar13->NodeInstanceToPayloads).field_0x40;
      puVar27 = &(pFVar13->NodeInstanceToPayloads).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar27 = puVar8;
      }
      iVar29 = *(int *)(puVar27 +
                       (ulonglong)
                       (*(int *)&(pFVar13->NodeInstanceToPayloads).field_0x48 - 1U &
                       (uVar36 >> 0x10 ^ uVar36)) * 4);
      if (iVar29 == -1) goto LAB_14dd398ad;
      lVar32 = *(longlong *)&pFVar13->NodeInstanceToPayloads;
      goto LAB_14dd39891;
    }
    pFVar21 = TMapBase<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
                          *)&((pFVar20->CodecWriter).Ptr)->LightweightSourceData,
                         *(uint *)(local_410 + 3),(int *)(local_410 + 3));
    TVar40.Ptr = (FImagePixelData *)0x0;
    local_3d8 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                 *)0x0;
    pFVar21->SubmittedFrameCount = pFVar21->SubmittedFrameCount + 1;
    if ((*(int *)&local_410[0x2f].field_0x4 == *(int *)&local_410[0x2e].field_0x4) &&
       (*(int *)(local_410 + 0x30) == *(int *)(local_410 + 0x2f))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    uVar4 = *(undefined8 *)(*(longlong *)&pTVar39->field_0x48 + 8);
    if (((int)uVar4 == *(int *)(local_410 + 0x20)) &&
       ((int)((ulonglong)uVar4 >> 0x20) == *(int *)&local_410[0x20].field_0x4)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    cVar17 = (**(code **)(pUVar12->_padding_ + 0x3b0))(pUVar12);
    TVar46.Ptr = (FImagePixelData *)pTVar33;
    TVar15.Ptr = (FImagePixelData *)local_3f8;
    if (((cVar17 != '\0') && (bVar16)) && (bVar11)) {
      iVar29 = *(int *)(*(longlong *)&pTVar39->field_0x48 + 0x10);
      if (iVar29 == 0) {
        local_1b0.ParentWriteTask = (FImageWriteTask *)0x0;
        local_1b0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_1b0.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(undefined8 *)&local_410[0x2e].field_0x4;
        local_1b0.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(undefined8 *)&local_410[0x2f].field_0x4;
        TAsyncCropImage<FColor>::operator()(&local_1b0,(FImagePixelData *)pTVar33);
        TVar40.Ptr = local_1b0.OutCroppedImage.Ptr;
        local_1b0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TVar46.Ptr = TVar40.Ptr;
        TVar15.Ptr = TVar40.Ptr;
        local_3d8 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                     *)TVar40.Ptr;
      }
      else if (iVar29 == 1) {
        local_1d0.ParentWriteTask = (FImageWriteTask *)0x0;
        local_1d0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_1d0.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(undefined8 *)&local_410[0x2e].field_0x4;
        local_1d0.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(undefined8 *)&local_410[0x2f].field_0x4;
        TAsyncCropImage<FFloat16Color>::operator()(&local_1d0,(FImagePixelData *)pTVar33);
        TVar40.Ptr = local_1d0.OutCroppedImage.Ptr;
        local_1d0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TVar46.Ptr = TVar40.Ptr;
        TVar15.Ptr = TVar40.Ptr;
        local_3d8 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                     *)TVar40.Ptr;
      }
      else {
        TVar46.Ptr = TVar40.Ptr;
        TVar15.Ptr = TVar40.Ptr;
        if (iVar29 == 2) {
          local_1f0.ParentWriteTask = (FImageWriteTask *)0x0;
          local_1f0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
          local_1f0.CropRect.field0_0x0._s_0.Min.field0_0x0 =
               (TIntPoint<int>)*(undefined8 *)&local_410[0x2e].field_0x4;
          local_1f0.CropRect.field0_0x0._s_0.Max.field0_0x0 =
               (TIntPoint<int>)*(undefined8 *)&local_410[0x2f].field_0x4;
          TAsyncCropImage<FLinearColor>::operator()(&local_1f0,(FImagePixelData *)pTVar33);
          TVar40.Ptr = local_1f0.OutCroppedImage.Ptr;
          local_1f0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
          TVar46.Ptr = TVar40.Ptr;
          TVar15.Ptr = TVar40.Ptr;
          local_3d8 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                       *)TVar40.Ptr;
        }
      }
    }
    local_3f8 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                 *)TVar15.Ptr;
    iVar29 = local_3d0.ArrayNum;
    if (local_410[0x29].field_0x4 != '\0') {
      local_408.Data = (FScriptContainerElement *)0x0;
      local_400 = 0;
      pFVar47 = local_3d0.AllocatorInstance.Data + 8;
      pFVar35 = (FMovieGraphRenderDataIdentifier *)
                (local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x50);
      uVar36 = local_414;
      goto LAB_14dd393a5;
    }
    local_380 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                 *)0x0;
    local_378 = 0;
    pcVar10 = *(code **)(pUVar12->_padding_ + 0x3c8);
    ::FName::ToString((FName *)pTVar39,&local_190);
    local_2a8 = local_370;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_370 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_370);
    }
    (*pcVar10)(pUVar12,(pFVar20->CodecWriter).Ptr,TVar46.Ptr,&local_380);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
              (local_380,(int)local_378);
    FVar25.Data = (FScriptContainerElement *)local_380;
    goto LAB_14dd39802;
  }
  puVar24 = puVar24 + 1;
  goto joined_r0x00014dd39161;
  while (iVar29 = *(int *)((longlong)iVar29 * 0x20 + 0x18 + lVar32), iVar29 != -1) {
LAB_14dd39891:
    if (*(ulonglong *)((longlong)iVar29 * 0x20 + lVar32) == uVar2) {
      if ((iVar29 != -1) && (lVar32 = (longlong)iVar29 * 0x20 + lVar32, lVar32 != 0)) {
        pTVar33 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                   *)(lVar32 + 8);
        goto LAB_14dd398af;
      }
      break;
    }
  }
LAB_14dd398ad:
  pTVar33 = (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
             *)0x0;
LAB_14dd398af:
  local_3f8 = pTVar33;
  if (((*(IImagePixelDataPayload ***)&pTVar33->Elements <= &local_410) &&
      (&local_410 <
       *(IImagePixelDataPayload ***)&pTVar33->Elements + *(int *)&(pTVar33->Elements).field_0xc)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar29 = (((TIntPoint<int> *)&(pTVar33->Elements).field_0x8)->field0_0x0)._s_0.X;
  if (iVar29 != 0) {
    puVar9 = *(undefined8 **)&pTVar33->Elements;
    iVar44 = 0;
    lVar32 = 0;
    bVar16 = (IImagePixelDataPayload *)*puVar9 != local_410;
    pIVar28 = local_410;
    iVar30 = 0;
    do {
      iVar37 = iVar30;
      do {
        lVar32 = lVar32 + 1;
        iVar37 = iVar37 + 1;
        if (iVar29 <= lVar32) break;
      } while (bVar16 == ((IImagePixelDataPayload *)puVar9[lVar32] != pIVar28));
      if (bVar16 != false) {
        if (iVar44 != iVar30) {
          memmove(puVar9 + iVar44,puVar9 + iVar30,(longlong)(iVar37 - iVar30) << 3);
          pIVar28 = local_410;
        }
        iVar44 = iVar44 + (iVar37 - iVar30);
      }
      bVar16 = (bool)(bVar16 ^ 1);
      iVar30 = iVar37;
    } while (lVar32 < iVar29);
    (((TIntPoint<int> *)&(local_3f8->Elements).field_0x8)->field0_0x0)._s_0.X = iVar44;
  }
LAB_14dd399e7:
  TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
  goto LAB_14dd38f73;
LAB_14dd393a5:
  if (local_3d0.ArrayNum != iVar29) {
    local_416[0] = 0;
    `TCheckedPointerIterator<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_416);
  }
  pUVar12 = local_3f0;
  if ((FMovieGraphRenderDataIdentifier *)(pFVar47 + -8) == pFVar35) goto LAB_14dd396d6;
  if (local_410[0x29].field_0x3 != '\0') {
    lVar32 = *(longlong *)(*(longlong *)(pFVar47 + 0x40) + 0x18);
    if (*(int *)(lVar32 + 0x200) == 0) {
LAB_14dd39439:
      bVar16 = false;
    }
    else {
      uVar36 = uVar36 | 2;
      local_2f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_2f8.AssetPath.PackageName.Number = 0;
      local_2f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_2f8.AssetPath.AssetName.Number = 0;
      local_2f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.SubPathString.Data.ArrayNum = 0;
      local_2f8.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_2f8,(UObject *)local_3f0->_padding_);
      bVar16 = TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::Contains<FSoftClassPath>
                         ((TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *)(lVar32 + 0x1f8),
                          (FSoftClassPath *)&local_2f8);
      if (bVar16) goto LAB_14dd39439;
      bVar16 = true;
    }
    if (((uVar36 & 2) != 0) &&
       (uVar36 = uVar36 & 0xfffffffd,
       local_2f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_2f8.SubPathString.Data.AllocatorInstance.Data);
    }
    if ((!bVar16) &&
       (FVar5.ComparisonIndex.Value = *(uint *)&pTVar39->field_0x0,
       FVar5.Number = *(uint *)&pTVar39->field_0x4,
       FVar5 == ((FMovieGraphRenderDataIdentifier *)(pFVar47 + -8))->RootBranchName)) {
      iVar30 = *(int *)&pTVar39->field_0x40;
      if (iVar30 == *(int *)(pFVar47 + 0x38)) {
        if (1 < iVar30) {
          iVar30 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)&pTVar39->field_0x38,*(wchar_t **)(pFVar47 + 0x30));
          bVar16 = iVar30 == 0;
          goto LAB_14dd39491;
        }
      }
      else {
        bVar16 = iVar30 + *(int *)(pFVar47 + 0x38) == 1;
LAB_14dd39491:
        if (!bVar16) goto LAB_14dd396cd;
      }
      local_368 = ((FMovieGraphRenderDataIdentifier *)(pFVar47 + -8))->RootBranchName;
      local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_360.Data.ArrayNum = 0;
      local_360.Data.ArrayMax = 0;
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      local_350.Data.ArrayMax = 0;
      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_340.Data.ArrayNum = 0;
      local_340.Data.ArrayMax = 0;
      local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_330.Data.ArrayNum = 0;
      local_330.Data.ArrayMax = 0;
      local_320 = (undefined8 *)0x0;
      ::FString::operator=(&local_360,(FString *)pFVar47);
      ::FString::operator=(&local_350,(FString *)(pFVar47 + 0x10));
      ::FString::operator=(&local_340,(FString *)(pFVar47 + 0x20));
      ::FString::operator=(&local_330,(FString *)(pFVar47 + 0x30));
      pFVar13 = local_3e0;
      if (((local_3e0->EvaluatedConfig).Object == (UObject *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                              ,0x61,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = (UMovieGraphEvaluatedConfig *)(pFVar13->EvaluatedConfig).Object;
      FVar6 = ((FMovieGraphRenderDataIdentifier *)(pFVar47 + -8))->RootBranchName;
      pUVar18 = UMovieGraphFileOutputNode::StaticClass();
      pTVar22 = UMovieGraphEvaluatedConfig::GetSettingsForBranch
                          (this_00,&local_180,pUVar18,FVar6,false,false);
      iVar30 = pTVar22->ArrayNum;
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      plVar7 = *(longlong **)(pFVar47 + 0x40);
      if (iVar30 < 2) {
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_3c0);
        puVar9 = local_320;
        local_320 = local_3c0;
        puVar24 = (undefined8 *)0x0;
        local_3c0 = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
          puVar24 = local_3c0;
        }
      }
      else {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_3b8);
        puVar9 = local_320;
        local_320 = local_3b8;
        local_3b8 = (undefined8 *)0x0;
        puVar24 = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
          puVar24 = local_3b8;
        }
      }
      if (puVar24 != (undefined8 *)0x0) {
        (**(code **)*puVar24)(puVar24,1);
      }
      if (((local_408.Data <=
            (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
             *)&local_368) &&
          ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
            *)&local_368 <
           (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
            *)(local_408.Data + (longlong)local_400._4_4_ * 0x50))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar30 = (int)local_400;
      if ((int)local_400 == local_400._4_4_) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_408,(int *)((longlong)&local_400 + 4));
      }
      local_400 = CONCAT44(local_400._4_4_,iVar30 + 1);
      TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
      ::
      TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                  *)(local_408.Data + (longlong)iVar30 * 0x50),
                 (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                  *)&local_368);
      if (local_320 != (undefined8 *)0x0) {
        (**(code **)*local_320)(local_320,1);
      }
      FMovieGraphRenderDataIdentifier::~FMovieGraphRenderDataIdentifier
                ((FMovieGraphRenderDataIdentifier *)&local_368);
    }
  }
LAB_14dd396cd:
  pFVar47 = pFVar47 + 0x50;
  goto LAB_14dd393a5;
LAB_14dd396d6:
  pcVar10 = *(code **)(local_3f0->_padding_ + 0x3c8);
  local_414 = uVar36;
  ::FName::ToString((FName *)pTVar39,&local_140);
  TVar40.Ptr = (FImagePixelData *)local_3d8;
  local_260 = local_370;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_370 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_370);
  }
  (*pcVar10)(pUVar12,(local_258->CodecWriter).Ptr,local_3f8,&local_408);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
            ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
              *)local_408.Data,(int)local_400);
  FVar25.Data = local_408.Data;
LAB_14dd39802:
  if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
       *)FVar25.Data !=
      (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
       *)0x0) {
    FMemory::Free(FVar25.Data);
  }
  if ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
       *)TVar40.Ptr !=
      (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
       *)0x0) {
    (*(code *)**(undefined8 **)
                &((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                   *)TVar40.Ptr)->Elements)(TVar40.Ptr,1);
  }
  goto LAB_14dd399e7;
}

// StaticRegisterNativesUMovieGraphVideoOutputNode @ 14dd454a0

void __cdecl UMovieGraphVideoOutputNode::StaticRegisterNativesUMovieGraphVideoOutputNode(void)

{
  return;
}

// WriteFrame_EncodeThread @ 14dd4c250

void __thiscall
UMovieGraphVideoOutputNode::WriteFrame_EncodeThread
          (UMovieGraphVideoOutputNode *this,IVideoCodecWriter *param_1,FImagePixelData *param_2,
          TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
          *param_3,TObjectPtr<UMovieGraphEvaluatedConfig> param_4,FString *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\Nodes\\MovieGraphVideoOutputNode.h"
             ,0x48,L"Pure virtual not implemented (%s)");
  return;
}

