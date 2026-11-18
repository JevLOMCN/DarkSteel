// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 28

// Call @ 14dc78450

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,void,FString_&>::
Call(void *param_1,FString *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FString FStack_18;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)(*(longlong *)((longlong)param_1 + 8) + 0x50));
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset(*(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            **)((longlong)param_1 + 8));
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x10);
  puVar2 = *(undefined8 **)param_1;
  *puVar2 = *puVar1;
  ::FString::operator=((FString *)(puVar2 + 1),(FString *)(puVar1 + 1));
  ::FString::operator=((FString *)(puVar2 + 3),(FString *)(puVar1 + 3));
  ::FString::operator=((FString *)(puVar2 + 5),(FString *)(puVar1 + 5));
  ::FString::operator=((FString *)(puVar2 + 7),(FString *)(puVar1 + 7));
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper
            (&FStack_18,param_2,*(FMovieGraphFilenameResolveParams **)param_1,false,
             *(FMovieGraphResolveArgs **)((longlong)param_1 + 8));
  if (param_2 != &FStack_18) {
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_2->Data).AllocatorInstance.Data = FStack_18.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = FStack_18.Data.ArrayNum;
    (param_2->Data).ArrayMax = FStack_18.Data.ArrayMax;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14dcbe300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,void,FImagePixelData_*>::
Call(void *param_1,FImagePixelData **param_2)

{
  FImagePixelData *this;
  code *pcVar1;
  bool bVar2;
  FImageView *pFVar3;
  FImageView local_28;
  
  this = *param_2;
  if (this == (FImagePixelData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOCIOHelper.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FImagePixelData::GetImageView(this,&local_28);
  FOpenColorIOWrapperProcessor::TransformImage(param_1,pFVar3);
  return;
}

// Call @ 14dcbe370

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  UMovieGraphEvaluatedConfig *this;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UMovieGraphGlobalOutputSettingNode *pUVar5;
  UMovieGraphPipeline *pUVar6;
  FString *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStackY_368 [32];
  undefined1 auStack_318 [8];
  ForAnyElementType FStack_310;
  undefined8 uStack_308;
  FString FStack_300;
  TPairInitializer<FString_&&,FString_&&> TStack_2f0;
  ForAnyElementType FStack_2e0;
  int iStack_2d8;
  int aiStack_2d4 [3];
  undefined1 auStack_2c8 [16];
  FString *pFStack_2b8;
  undefined1 *puStack_2b0;
  FString FStack_2a8;
  FString FStack_298;
  undefined1 auStack_288 [32];
  void *pvStack_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  ForElementType<FSetElementId> FStack_248;
  int iStack_240;
  undefined1 auStack_238 [32];
  void *pvStack_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  void *pvStack_1f8;
  undefined4 uStack_1f0;
  undefined1 auStack_1e8 [32];
  void *pvStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  void *pvStack_1a8;
  undefined4 uStack_1a0;
  FMovieGraphFilenameResolveParams FStack_198;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 8));
  if ((!bVar3) &&
     (bVar3 = ``UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::
              __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(auStack_318), !bVar3)) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x18);
  this = *(UMovieGraphEvaluatedConfig **)(lVar1 + 0xc0);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieGraphEvaluatedConfig *)0x0)) {
    GC::MarkAsReachable((UObject *)this);
  }
  uVar10 = *(uint *)(lVar1 + 0x130);
  pFVar13 = (FScriptContainerElement *)0x0;
  FStack_310.Data = (FScriptContainerElement *)0x0;
  uStack_308 = 0;
  iVar12 = 0;
  if ((int)uVar10 < 2) {
    ::FString::PrintfImpl((FString *)&TStack_2f0,L"%s_%s_%s_%s_%s_SS_%d_TS_%d.%d");
    if (FStack_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_310.Data);
    }
    FStack_310.Data = (FScriptContainerElement *)TStack_2f0.Key;
    uStack_308 = CONCAT44(TStack_2f0.Value._4_4_,TStack_2f0.Value._0_4_);
  }
  else if (&FStack_310 != (ForAnyElementType *)(lVar1 + 0x128)) {
    pFVar2 = ((ForAnyElementType *)(lVar1 + 0x128))->Data;
    uStack_308 = (ulonglong)uVar10;
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,&FStack_310,uVar10,(int *)((longlong)&uStack_308 + 4));
    memcpy(FStack_310.Data,pFVar2,(longlong)(int)uVar10 * 2);
  }
  pUVar5 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     (this,UMovieGraphNode::GlobalsPinName,true,false);
  FStack_2e0.Data = (FScriptContainerElement *)0x0;
  iStack_2d8 = (pUVar5->OutputDirectory).Path.Data.ArrayNum;
  lVar9 = (longlong)iStack_2d8;
  pFVar2 = (pUVar5->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (iStack_2d8 == 0) {
    aiStack_2d4[0] = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iStack_2d8,0,&FStack_2e0,iStack_2d8,aiStack_2d4);
    memcpy(FStack_2e0.Data,pFVar2,lVar9 * 2);
  }
  iVar11 = iStack_2d8;
  _Src.Data = FStack_2e0.Data;
  iVar14 = (int)uStack_308 + -1;
  if ((int)uStack_308 == 0) {
    iVar14 = 0;
  }
  FStack_300.Data.ArrayNum = iStack_2d8;
  if ((iStack_2d8 == 0) && (iVar14 != -1)) {
    iVar4 = iVar14 + 2;
LAB_14dcb57e0:
    FStack_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 == 0) {
      FStack_300.Data.ArrayMax = 0;
      goto LAB_14dcb5837;
    }
  }
  else {
    iVar4 = iVar14 + 1;
    if (iStack_2d8 == 0) goto LAB_14dcb57e0;
  }
  FStack_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = iStack_2d8 + iVar4;
  if ((int)uVar10 < iStack_2d8) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar10);
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,(ForAnyElementType *)&FStack_300,iStack_2d8,&FStack_300.Data.ArrayMax);
  if (iVar11 != 0) {
    memcpy(FStack_300.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 2);
  }
LAB_14dcb5837:
  ::FString::PathAppend(&FStack_300,(wchar_t *)FStack_310.Data,iVar14);
  pFVar8 = (FString *)0x0;
  uStack_25c = 0x80;
  auStack_288._0_8_ = (FScriptContainerElement *)0x0;
  auStack_288._8_8_ = 0;
  pvStack_268 = (void *)0x0;
  uStack_260 = 0;
  uStack_254 = 0;
  FStack_248 = (ForElementType<FSetElementId>)0x0;
  iStack_240 = 0;
  uStack_258 = 0xffffffff;
  ::FString::FString((FString *)auStack_2c8,L"exr");
  ::FString::FString(&FStack_2a8,L"ext");
  pFStack_2b8 = &FStack_2a8;
  puStack_2b0 = auStack_2c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)auStack_288,&TStack_2f0,(bool *)&pFStack_2b8);
  if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)auStack_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_2c8._0_8_);
  }
  auStack_238._0_8_ = (FScriptContainerElement *)0x0;
  auStack_238._8_8_ = 0;
  pvStack_218 = (void *)0x0;
  uStack_210 = 0;
  uStack_20c = 0x80;
  uStack_208 = 0xffffffff;
  uStack_204 = 0;
  pvStack_1f8 = (void *)0x0;
  uStack_1f0 = 0;
  auStack_1e8._0_8_ = (FScriptContainerElement *)0x0;
  auStack_1e8._8_8_ = 0;
  pvStack_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  uStack_1bc = 0x80;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  pvStack_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  TStack_2f0.Key = (FString *)this;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieGraphEvaluatedConfig *)0x0)) {
    GC::MarkAsReachable((UObject *)this);
  }
  pUVar6 = (UMovieGraphPipeline *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
  FMovieGraphFilenameResolveParams::MakeResolveParams
            (&FStack_198,(FMovieGraphRenderDataIdentifier *)(lVar1 + 0x38),pUVar6,
             (TObjectPtr<UMovieGraphEvaluatedConfig> *)&TStack_2f0,
             (FMovieGraphTraversalContext *)(lVar1 + 0x18),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)auStack_288);
  pFVar7 = UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
                     ((FString *)auStack_2c8,&FStack_300,&FStack_198,
                      (FMovieGraphResolveArgs *)auStack_238);
  if (&FStack_298 != pFVar7) {
    pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)auStack_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_2c8._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&FStack_198);
  uStack_1a0 = 0;
  if (pvStack_1a8 != (void *)0x0) {
    FMemory::Free(pvStack_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_1e8,0,auStack_1e8._8_4_);
  iVar11 = SUB84(auStack_1e8._8_8_,4);
  auStack_1e8._8_8_ = auStack_1e8._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)auStack_1e8,0,(int *)(auStack_1e8 + 0xc));
  }
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  if (0x80 < uStack_1bc) {
    uStack_1bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_1e8 + 0x10),0);
  }
  if (pvStack_1c8 != (void *)0x0) {
    FMemory::Free(pvStack_1c8);
  }
  if ((FScriptContainerElement *)auStack_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_1e8._0_8_);
  }
  uStack_1f0 = 0;
  if (pvStack_1f8 != (void *)0x0) {
    FMemory::Free(pvStack_1f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_238,0,auStack_238._8_4_);
  iVar11 = SUB84(auStack_238._8_8_,4);
  auStack_238._8_8_ = auStack_238._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)auStack_238,0,(int *)(auStack_238 + 0xc));
  }
  uStack_208 = 0xffffffff;
  uStack_204 = 0;
  uStack_210 = 0;
  if (0x80 < uStack_20c) {
    uStack_20c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_238 + 0x10),0);
  }
  if (pvStack_218 != (void *)0x0) {
    FMemory::Free(pvStack_218);
  }
  if ((FScriptContainerElement *)auStack_238._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_238._0_8_);
  }
  iStack_240 = 0;
  if (FStack_248 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_248);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_288,0,auStack_288._8_4_);
  iVar11 = SUB84(auStack_288._8_8_,4);
  auStack_288._8_8_ = auStack_288._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)auStack_288,0,(int *)(auStack_288 + 0xc));
  }
  uStack_258 = 0xffffffff;
  uStack_254 = 0;
  uStack_260 = 0;
  if (0x80 < uStack_25c) {
    uStack_25c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_288 + 0x10),0);
  }
  if (pvStack_268 != (void *)0x0) {
    FMemory::Free(pvStack_268);
  }
  if ((FScriptContainerElement *)auStack_288._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_288._0_8_);
  }
  if (FStack_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_300.Data.AllocatorInstance.Data);
  }
  if (FStack_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data);
  }
  if (FStack_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_310.Data);
  }
  pFVar7 = ::operator_new(0x80);
  if (pFVar7 != (FString *)0x0) {
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)&___7FImageWriteTask__6B_;
    pFVar7[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&pFVar7[2].Data.AllocatorInstance.Data = 1;
    pFVar7[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7[5].Data.ArrayNum = 0;
    pFVar7[5].Data.ArrayMax = 0;
    pFVar7[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7[6].Data.ArrayNum = 0;
    pFVar7[6].Data.ArrayMax = 0;
    pFVar7[7].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8 = pFVar7;
  }
  *(undefined1 *)&pFVar8[1].Data.ArrayNum = 5;
  pFVar8[1].Data.ArrayMax = 0;
  iVar11 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange((FString *)&(pFVar8->Data).ArrayNum,(wchar_t *)pFVar13,iVar11);
  pFVar7 = pFVar8 + 6;
  if (pFVar7 != param_1) {
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = *(FScriptContainerElement **)param_1;
    *(undefined8 *)param_1 = 0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
  }
  TStack_2f0.Key = pFVar8;
  (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 8))
            (*(longlong **)((longlong)param_1 + 0x10),auStack_2c8,&TStack_2f0,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_2c8._8_8_);
  if (TStack_2f0.Key != (FString *)0x0) {
    (**(code **)((TStack_2f0.Key)->Data).AllocatorInstance.Data)(TStack_2f0.Key,1);
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// Call @ 14dcbe380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x00014dcbe3b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1b0))
            (pIVar1,param_2,*(undefined4 *)param_1,*(code **)((longlong)*pIVar1 + 0x1b0));
  return;
}

// Call @ 14dd18760

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::FSequenceRangeVisitor::GatherFromSection'::__l6::<lambda_1>,bool,TRange<FFrameTime>_>
::Call(void *param_1,TRange<FFrameTime> *param_2)

{
  bool bVar1;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound.Type.Value = (param_2->LowerBound).Type.Value;
  local_28.LowerBound._1_3_ = *(undefined3 *)&(param_2->LowerBound).field_0x1;
  local_28.LowerBound.Value.FrameNumber.Value = (param_2->LowerBound).Value.FrameNumber.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->LowerBound).Value.SubFrame;
  local_28.UpperBound.Value = (param_2->UpperBound).Value;
  bVar1 = ``UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l2::
          FSequenceRangeVisitor::GatherFromSection'::__l6::<lambda_1>::operator()(param_1,&local_28)
  ;
  return bVar1;
}

// Call @ 14dd18790

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  IImagePixelDataPayload *pIVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  TImagePixelData<FColor> *pTVar8;
  TImagePixelData<FColor> *this;
  TImagePixelData<FColor> *pTVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  IImagePixelDataPayload IVar12;
  bool bVar13;
  TImagePixelData<FColor> *pTStackX_8;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  TArray<FColor,TSizedDefaultAllocator<32>_> TStack_1c8;
  TIntPoint<int>_u_0 TStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  ECubeFace EStack_1a8;
  ERangeCompressionMode EStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  undefined2 uStack_198;
  undefined2 uStack_196;
  int iStack_194;
  undefined4 uStack_190;
  TArray<FColor,TSizedDefaultAllocator<64>_> TStack_188;
  TIntRect<int>_u_0 TStack_170;
  TSharedPtr<IImagePixelDataPayload,1> TStack_160;
  FMovieGraphTraversalContext FStack_148;
  FReadSurfaceDataFlags FStack_58;
  
  lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x1c8) + 0x28))
                    (*(longlong **)((longlong)param_1 + 0x1c8),auStackX_18);
  pTVar9 = (TImagePixelData<FColor> *)0x0;
  TStack_1b8 = (TIntPoint<int>_u_0)0x0;
  iVar2 = *(int *)(lVar5 + 4);
  piVar6 = (int *)(**(code **)(**(longlong **)((longlong)param_1 + 0x1c8) + 0x28))
                            (*(longlong **)((longlong)param_1 + 0x1c8),auStackX_20);
  iStack_1b0 = *piVar6;
  uVar10 = iStack_1b0 * iVar2;
  TStack_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1c8.ArrayNum = 0;
  TStack_1c8.ArrayMax = 0;
  iStack_1ac = iVar2;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&TStack_1c8.AllocatorInstance,&TStack_1c8.ArrayNum,&TStack_1c8.ArrayMax);
  }
  EStack_1a8 = CubeFace_MAX;
  EStack_1a4 = RCM_MinMax;
  fStack_19c = 16000.0;
  uStack_198 = 0;
  iStack_194 = 0;
  uStack_190 = 0;
  uStack_1a0 = uStack_1a0 & 0xffffff00;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"MRQ::FMovieGraphWidgetPass::ReadSurfaceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphWidgetRendererBaseNode.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  TStack_170._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_1b8;
  TStack_170._12_4_ = iStack_1ac;
  TStack_170._8_4_ = iStack_1b0;
  FStack_58._18_2_ = uStack_196;
  FStack_58.bOutputStencil = (bool)(undefined1)uStack_198;
  FStack_58.MipLevel = uStack_198._1_1_;
  FStack_58.ArrayIndex = iStack_194;
  FStack_58.CubeFace = EStack_1a8;
  FStack_58.CompressionMode = EStack_1a4;
  FStack_58._8_4_ = uStack_1a0;
  FStack_58.MaxDepthRange = fStack_19c;
  FStack_58.GPUIndex = 0;
  puVar7 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x1c8) + 0x10))();
  FRHICommandListImmediate::ReadSurfaceData
            (param_2,(FRHITexture *)*puVar7,(TIntRect<int> *)&TStack_170._s_0,&TStack_1c8,&FStack_58
            );
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMovieGraphTraversalContext::FMovieGraphTraversalContext
            (&FStack_148,(FMovieGraphTraversalContext *)((longlong)param_1 + 0x80));
  FStack_148.Time.OutputFrameNumber = *(int *)param_1;
  FStack_148.Time.FrameDeltaTime = *(float *)((longlong)param_1 + 0xc);
  FStack_148.Time.WorldTimeDilation = *(float *)((longlong)param_1 + 0x10);
  FStack_148.Time.ShotOutputFrameNumber = *(int *)((longlong)param_1 + 4);
  FStack_148.Time.RenderedFrameNumber = *(int *)((longlong)param_1 + 8);
  FStack_148.Time.bHasRelativeTimeBeenUsed = *(bool *)((longlong)param_1 + 0x14);
  FStack_148.Time.FrameRate = *(FFrameRate *)((longlong)param_1 + 0x20);
  FStack_148.Time.TemporalSampleIndex = *(int *)((longlong)param_1 + 0x28);
  FStack_148.Time.TemporalSampleCount = *(int *)((longlong)param_1 + 0x2c);
  FStack_148.Time.SpatialSampleIndex = *(int *)((longlong)param_1 + 0x30);
  FStack_148.Time.SpatialSampleCount = *(int *)((longlong)param_1 + 0x34);
  FStack_148.Time.bIsFirstTemporalSampleForFrame = *(bool *)((longlong)param_1 + 0x38);
  FStack_148.Time.bIsLastTemporalSampleForFrame = *(bool *)((longlong)param_1 + 0x39);
  FStack_148.Time.bDiscardOutput = *(bool *)((longlong)param_1 + 0x3a);
  FStack_148.Time.bRequiresAccumulator = *(bool *)((longlong)param_1 + 0x3b);
  FStack_148.Time.WorldSeconds = *(float *)((longlong)param_1 + 0x18);
  FStack_148.Time.MotionBlurFraction = *(float *)((longlong)param_1 + 0x1c);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)((longlong)param_1 + 0x40) != (UObject *)0x0)) {
    GC::MarkAsReachable(*(UObject **)((longlong)param_1 + 0x40));
  }
  FStack_148.Time.EvaluatedConfig.field0_0x0 =
       *(TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)((longlong)param_1 + 0x40);
  FStack_148.Time.RootTimeCode._0_8_ = *(undefined8 *)((longlong)param_1 + 0x48);
  FStack_148.Time.RootTimeCode._8_8_ = *(undefined8 *)((longlong)param_1 + 0x50);
  FStack_148.Time.RootTimeCode._16_8_ = *(undefined8 *)((longlong)param_1 + 0x58);
  FStack_148.Time.RootFrameNumber.Value = *(int *)((longlong)param_1 + 0x60);
  FStack_148.Time.ShotFrameNumber.Value = *(int *)((longlong)param_1 + 0x7c);
  FStack_148.Time.ShotTimeCode._0_8_ = *(undefined8 *)((longlong)param_1 + 100);
  FStack_148.Time.ShotTimeCode._8_8_ = *(undefined8 *)((longlong)param_1 + 0x6c);
  FStack_148.RenderDataIdentifier.RootBranchName = *(FName *)((longlong)param_1 + 0x178);
  FStack_148.Time.ShotTimeCode._16_8_ = *(undefined8 *)((longlong)param_1 + 0x74);
  ::FString::operator=
            (&FStack_148.RenderDataIdentifier.LayerName,(FString *)((longlong)param_1 + 0x180));
  ::FString::operator=
            (&FStack_148.RenderDataIdentifier.RendererName,(FString *)((longlong)param_1 + 400));
  ::FString::operator=
            (&FStack_148.RenderDataIdentifier.SubResourceName,(FString *)((longlong)param_1 + 0x1a0)
            );
  ::FString::operator=
            (&FStack_148.RenderDataIdentifier.CameraName,(FString *)((longlong)param_1 + 0x1b0));
  pTVar8 = ::operator_new(0x218);
  if (pTVar8 == (TImagePixelData<FColor> *)0x0) {
    IVar12 = (IImagePixelDataPayload)0x10;
    pTVar8 = pTVar9;
  }
  else {
    *(undefined4 *)&pTVar8->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar8->_padding_ + 4) = 1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieGraphSampleState_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    pTVar8->_padding_ = (longlong)&___7FMovieGraphSampleState_MovieGraph_UE__6B_;
    pTVar8->_padding_ = 0;
    pTVar8->_padding_ = 0;
    FMovieGraphTraversalContext::FMovieGraphTraversalContext
              ((FMovieGraphTraversalContext *)&pTVar8->Pixels);
    *(undefined1 *)&pTVar8[4].Pixels.ArrayNum = 0;
    IVar12 = (IImagePixelDataPayload)&pTVar8->_padding_;
    pTVar8[4].Pixels.ArrayMax = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5]._padding_ = 0;
    *(undefined4 *)&pTVar8[5]._padding_ = 0x1000000;
    *(undefined1 *)((longlong)&pTVar8[5]._padding_ + 4) = 0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6]._padding_ = 0;
    *(undefined4 *)&pTVar8[6]._padding_ = 0;
    *(undefined2 *)((longlong)&pTVar8[6]._padding_ + 4) = 1;
    pTVar8[6].Pixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar8[6].Pixels.ArrayNum = 0;
    pTVar8[7]._padding_ = 0;
    *(undefined4 *)&pTVar8[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar8[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&pTVar8[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar8[7]._padding_ + 4) = 0;
    pTVar8[7].Pixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pTVar8[7].Pixels.ArrayNum = 0;
    pTVar8[7].Pixels.ArrayMax = 0;
    pTVar8[8]._padding_ = 0;
    pTVar8[8]._padding_ = 0;
    pTVar8[8]._padding_ = 0;
    if (IVar12 == (IImagePixelDataPayload)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14dd0fb0c;
    }
  }
  if (((*(IImagePixelDataPayload *)((longlong)IVar12 + 8) == (IImagePixelDataPayload)0x0) ||
      (*(IImagePixelDataPayload *)((longlong)IVar12 + 0x10) == (IImagePixelDataPayload)0x0)) ||
     (*(int *)((longlong)*(IImagePixelDataPayload *)((longlong)IVar12 + 0x10) + 8) < 1)) {
    if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(IImagePixelDataPayload *)((longlong)IVar12 + 8) = IVar12;
    if (pTVar8 != *(TImagePixelData<FColor> **)((longlong)IVar12 + 0x10)) {
      if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
        LOCK();
        piVar6 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)((longlong)IVar12 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar6 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TImagePixelData<FColor> **)((longlong)IVar12 + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
LAB_14dd0fb0c:
  FMovieGraphTraversalContext::operator=
            ((FMovieGraphTraversalContext *)((longlong)IVar12 + 0x18),&FStack_148);
  *(IImagePixelDataPayload *)((longlong)IVar12 + 0x100) =
       *(IImagePixelDataPayload *)((longlong)param_1 + 0x1e0);
  pIVar1 = (IImagePixelDataPayload *)((longlong)IVar12 + 0x1f8);
  *(IImagePixelDataPayload *)((longlong)IVar12 + 0x108) =
       *(IImagePixelDataPayload *)((longlong)param_1 + 0x168);
  *(undefined8 *)((longlong)IVar12 + 0x174) = *(undefined8 *)((longlong)param_1 + 0x1e8);
  *(undefined8 *)((longlong)IVar12 + 0x17c) = *(undefined8 *)((longlong)param_1 + 0x1f0);
  *(undefined2 *)((longlong)IVar12 + 0x148) = 0;
  *(undefined1 *)((longlong)IVar12 + 0x14a) = *(undefined1 *)((longlong)param_1 + 0x1c0);
  *(undefined4 *)((longlong)IVar12 + 0x184) = *(undefined4 *)((longlong)param_1 + 0x1c4);
  *(undefined4 *)((longlong)IVar12 + 0x188) = *(undefined4 *)((longlong)param_1 + 0x200);
  if (pIVar1 != (IImagePixelDataPayload *)((longlong)param_1 + 0x208)) {
    DestructItems<FSoftClassPath,int>
              ((FSoftClassPath *)*(FScriptContainerElement **)pIVar1,
               *(int *)((longlong)IVar12 + 0x200));
    iVar2 = *(int *)((longlong)param_1 + 0x210);
    piVar6 = (int *)((longlong)IVar12 + 0x204);
    FVar11.Data = *(FScriptContainerElement **)((longlong)param_1 + 0x208);
    *(int *)((longlong)IVar12 + 0x200) = iVar2;
    if ((iVar2 == 0) && (*piVar6 == 0)) {
      *piVar6 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,*piVar6,(ForAnyElementType *)pIVar1,iVar2,piVar6);
      ConstructItems<FSoftClassPath,FSoftClassPath,int>
                (*(FScriptContainerElement **)pIVar1,(FSoftClassPath *)FVar11.Data,iVar2);
    }
  }
  ::FString::operator=((FString *)((longlong)IVar12 + 0x138),(FString *)((longlong)param_1 + 0x218))
  ;
  ::FString::operator=((FString *)((longlong)IVar12 + 0x1e8),(FString *)((longlong)param_1 + 0x228))
  ;
  FVar11.Data = TStack_1c8.AllocatorInstance.Data;
  TStack_188.ArrayNum = (long64)TStack_1c8.ArrayNum;
  TStack_188.ArrayMax = (long64)TStack_1c8.ArrayMax;
  TStack_188.AllocatorInstance.Data = TStack_1c8.AllocatorInstance.Data;
  TStack_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1c8.ArrayNum = 0;
  TStack_1c8.ArrayMax = 0;
  this = ::operator_new(0x40);
  if (this != (TImagePixelData<FColor> *)0x0) {
    if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    TStack_160.Object = (IImagePixelDataPayload *)IVar12;
    TStack_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
    pTVar9 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this,(TIntPoint<int> *)((longlong)param_1 + 0x1f8),&TStack_188,&TStack_160);
    FVar11.Data = TStack_188.AllocatorInstance.Data;
  }
  pTStackX_8 = pTVar9;
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if ((*(longlong *)((longlong)param_1 + 0x1d0) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 0x1d0) + 0x18))
            (*(longlong **)((longlong)param_1 + 0x1d0),&pTStackX_8);
  if (pTStackX_8 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)pTStackX_8->_padding_)(pTStackX_8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (FStack_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (FStack_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (FStack_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (FStack_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  if (TStack_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_1c8.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14dd187a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCropImage<FColor>::operator()'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `TAsyncCropImage<FColor>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd187b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCropImage<FLinearColor>::operator()'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `TAsyncCropImage<FLinearColor>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd187c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCropImage<FFloat16Color>::operator()'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `TAsyncCropImage<FFloat16Color>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd187d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l109::<lambda_2>,bool,TRange<FFrameTime>_>
::Call(void *param_1,TRange<FFrameTime> *param_2)

{
  ulonglong *puVar1;
  uchar uVar2;
  int iVar3;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  ulonglong local_48;
  ulonglong uStack_40;
  FFrameNumber local_28;
  
  uVar2 = (param_2->LowerBound).Type.Value;
  iVar3 = (param_2->LowerBound).Value.FrameNumber.Value;
  local_48 = CONCAT71(local_48._1_7_,2);
  local_48 = local_48 & 0xffffffff;
  uStack_40 = CONCAT71(uStack_40._1_7_,2);
  uStack_40 = uStack_40 & 0xffffffff;
  if (uVar2 != '\x02') {
    if ((uVar2 == '\x01') && ((param_2->LowerBound).Value.SubFrame == 0.0)) {
      local_res8 = CONCAT31(local_res8._1_3_,1);
      local_48 = CONCAT44(iVar3,local_res8);
    }
    else {
      local_res10 = CONCAT31(local_res10._1_3_,1);
      local_48 = CONCAT44(iVar3 + 1,local_res10);
    }
  }
  if ((param_2->UpperBound).Type.Value != '\x02') {
    local_28 = (param_2->UpperBound).Value.FrameNumber;
    uStack_40 = CONCAT44(local_28.Value,local_res18) & 0xffffffffffffff00;
  }
  puVar1 = *(ulonglong **)param_1;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  return false;
}

// Call @ 14dd7a3d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>
  ::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dd7a3f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dd7a400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataHalfFloat'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataHalfFloat'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x00014dd7a452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1b0))
            (pIVar1,param_2,*(undefined4 *)param_1,*(code **)((longlong)*pIVar1 + 0x1b0));
  return;
}

// Call @ 14dd7a460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::InitMemory'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::InitMemory'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a470

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  UMoviePipeline *this;
  undefined1 local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 8));
  if ((!bVar1) &&
     (bVar1 = ``FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>
              ::operator()'::__l2::<lambda_1>::operator()(local_res8), !bVar1)) {
    return;
  }
  this = (UMoviePipeline *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
  UMoviePipeline::OnSampleRendered(this,param_1);
  return;
}

// Call @ 14dd7a4c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITexture *pFVar1;
  FRHIGPUTextureReadback *pFVar2;
  FName *pFVar3;
  longlong *plVar4;
  FRHIGPUTextureReadback *pFVar5;
  longlong lVar6;
  FName FStackX_8;
  longlong alStack_18 [2];
  
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 == (FRHIGPUTextureReadback *)0x0) {
    pFVar2 = (FRHIGPUTextureReadback *)0x0;
  }
  else {
    pFVar3 = ::FName::FName(&FStackX_8,L"FMoviePipelineSurfaceReader");
    pFVar2 = FRHIGPUTextureReadback::FRHIGPUTextureReadback(pFVar2,*pFVar3);
  }
  plVar4 = (longlong *)(*(longlong *)param_1 + 0x18);
  if (plVar4 == alStack_18) {
    if (pFVar2 == (FRHIGPUTextureReadback *)0x0) {
      return;
    }
    pFVar5 = pFVar2 + 1;
    lVar6 = 8;
    do {
      pFVar1 = pFVar5[-1].DestinationStagingTextures[7].Reference;
      pFVar5 = (FRHIGPUTextureReadback *)(pFVar5[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    } while (lVar6 != 0);
    pFVar2->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    pFVar5 = pFVar2;
    if ((FRHIResource *)pFVar2->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2->_padding_);
    }
  }
  else {
    pFVar5 = (FRHIGPUTextureReadback *)*plVar4;
    *plVar4 = (longlong)pFVar2;
    if (pFVar5 == (FRHIGPUTextureReadback *)0x0) {
      return;
    }
    pFVar2 = pFVar5 + 1;
    lVar6 = 8;
    do {
      pFVar1 = pFVar2[-1].DestinationStagingTextures[7].Reference;
      pFVar2 = (FRHIGPUTextureReadback *)(pFVar2[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    } while (lVar6 != 0);
    pFVar5->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar5->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5->_padding_);
    }
  }
  ::operator_delete(pFVar5,0x58);
  return;
}

// Call @ 14dd7a4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::ZeroPlanes'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::ZeroPlanes'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a4e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  FMoviePipelineSurfaceReader *this;
  TSharedPtr<FImagePixelDataPayload,1> local_18;
  
  puVar1 = *(undefined8 **)param_1;
  this = (FMoviePipelineSurfaceReader *)*puVar1;
  if (this->bQueuedForCapture != false) {
    local_18.Object = (FImagePixelDataPayload *)puVar1[8];
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar1[9];
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMoviePipelineSurfaceReader::CopyReadbackTexture_RenderThread
              (this,(TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                     *)(*(longlong *)param_1 + 0x10),&local_18);
  }
  return;
}

// Call @ 14dd7a530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l30::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            ((TArray<float,TSizedDefaultAllocator<64>_> *)
             (*(longlong *)param_1 + 0x28 + (longlong)*param_2 * 0x18),
             (longlong)((*(int **)((longlong)param_1 + 8))[1] * **(int **)((longlong)param_1 + 8)),
             Default);
  return;
}

// Call @ 14dd7a570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedPlane::AccumulateSinglePlane'::__l107::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FImageOverlappedPlane::AccumulateSinglePlane'::__l107::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI);
  FRHICommandListImmediate::ImmediateFlush(param_2,DispatchToRHIThread,None);
  return;
}

// Call @ 14dd7a5c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>::operator()'::__l24::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>
  ::operator()'::__l24::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dd7a5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l33::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::AccumulatePixelData'::__l33::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dd7a5e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l55::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::AccumulatePixelData'::__l55::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dd7a5f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageOverlappedAccumulator::AccumulatePixelData'::__l163::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `FImageOverlappedAccumulator::AccumulatePixelData'::__l163::<lambda_4>::operator()
            (param_1,*param_2);
  return;
}

