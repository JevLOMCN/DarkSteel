// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// FMovieGraphOutputMerger @ 14dcadfd0

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

FMovieGraphOutputMerger * __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::FMovieGraphOutputMerger
          (FMovieGraphOutputMerger *this,UMovieGraphPipeline *param_1)

{
  FName FVar1;
  TNode *_Dst;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  IImageWriteQueue *pIVar4;
  TNode *pTVar5;
  FName local_res8;
  
  pTVar5 = (TNode *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FMovieGraphOutputMerger_MovieGraph_UE__6B_;
  _Dst = ::operator_new(0x1f8);
  if (_Dst != (TNode *)0x0) {
    memset(_Dst,0,0x1f8);
    _Dst->NextNode = (TNode *)0x0;
    FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame(&_Dst->Item);
    pTVar5 = _Dst;
  }
  (this->FinishedFrames).Tail = pTVar5;
  (this->FinishedFrames).Head = pTVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakMoviePipeline).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FName)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakMoviePipeline).WeakPtr,(FObjectPtr)&local_res8);
  (this->PendingData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingData).Pairs.ArrayNum = 0;
  (this->PendingData).Pairs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingDataMutex,4000);
  FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res8,"ImageWriteQueue");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar4 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  this->Debug_ImageWriteQueue = pIVar4;
  return this;
}

// ~FMovieGraphOutputMerger @ 14dcb2240

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::~FMovieGraphOutputMerger(FMovieGraphOutputMerger *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  longlong *plVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingDataMutex);
  DestructItems<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,int>
            ((TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *)
             (this->PendingData).Pairs.AllocatorInstance.Data,(this->PendingData).Pairs.ArrayNum);
  pFVar3 = (this->PendingData).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->FinishedFrames).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->FinishedFrames).Tail = pTVar4->NextNode;
    FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame(&pTVar4->Item);
    ::operator_delete(pTVar4,0x1f8);
    pTVar4 = (this->FinishedFrames).Tail;
  }
  *(undefined ***)this = &___7IMovieGraphOutputMerger_MovieGraph_UE__6B_;
  plVar5 = *(longlong **)&this->field_0x10;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 14dcb5550

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
`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  UMovieGraphEvaluatedConfig *this_00;
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
  undefined1 local_318 [8];
  ForAnyElementType local_310;
  undefined8 local_308;
  FString local_300;
  TPairInitializer<FString_&&,FString_&&> local_2f0;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4 [3];
  undefined1 local_2c8 [16];
  FString *local_2b8;
  undefined1 *local_2b0;
  FString local_2a8;
  FString local_298;
  undefined1 local_288 [32];
  void *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  undefined4 local_254;
  ForElementType<FSetElementId> local_248;
  int local_240;
  undefined1 local_238 [32];
  void *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 local_204;
  void *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  void *local_1a8;
  undefined4 local_1a0;
  FMovieGraphFilenameResolveParams local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
  if ((!bVar3) &&
     (bVar3 = ``UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::
              __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(local_318), !bVar3)) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x18);
  this_00 = *(UMovieGraphEvaluatedConfig **)(lVar1 + 0xc0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  uVar10 = *(uint *)(lVar1 + 0x130);
  pFVar13 = (FScriptContainerElement *)0x0;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308 = 0;
  iVar12 = 0;
  if ((int)uVar10 < 2) {
    ::FString::PrintfImpl((FString *)&local_2f0,L"%s_%s_%s_%s_%s_SS_%d_TS_%d.%d");
    if (local_310.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data);
    }
    local_310.Data = (FScriptContainerElement *)local_2f0.Key;
    local_308 = CONCAT44(local_2f0.Value._4_4_,local_2f0.Value._0_4_);
  }
  else if (&local_310 != (ForAnyElementType *)(lVar1 + 0x128)) {
    pFVar2 = ((ForAnyElementType *)(lVar1 + 0x128))->Data;
    local_308 = (ulonglong)uVar10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,&local_310,uVar10,(int *)((longlong)&local_308 + 4));
    memcpy(local_310.Data,pFVar2,(longlong)(int)uVar10 * 2);
  }
  pUVar5 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     (this_00,UMovieGraphNode::GlobalsPinName,true,false);
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = (pUVar5->OutputDirectory).Path.Data.ArrayNum;
  lVar9 = (longlong)local_2d8;
  pFVar2 = (pUVar5->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (local_2d8 == 0) {
    local_2d4[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8,0,&local_2e0,local_2d8,local_2d4);
    memcpy(local_2e0.Data,pFVar2,lVar9 * 2);
  }
  iVar11 = local_2d8;
  _Src.Data = local_2e0.Data;
  iVar14 = (int)local_308 + -1;
  if ((int)local_308 == 0) {
    iVar14 = 0;
  }
  local_300.Data.ArrayNum = local_2d8;
  if ((local_2d8 == 0) && (iVar14 != -1)) {
    iVar4 = iVar14 + 2;
LAB_14dcb57e0:
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 == 0) {
      local_300.Data.ArrayMax = 0;
      goto LAB_14dcb5837;
    }
  }
  else {
    iVar4 = iVar14 + 1;
    if (local_2d8 == 0) goto LAB_14dcb57e0;
  }
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = local_2d8 + iVar4;
  if ((int)uVar10 < local_2d8) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,(ForAnyElementType *)&local_300,local_2d8,&local_300.Data.ArrayMax);
  if (iVar11 != 0) {
    memcpy(local_300.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 2);
  }
LAB_14dcb5837:
  ::FString::PathAppend(&local_300,(wchar_t *)local_310.Data,iVar14);
  pFVar8 = (FString *)0x0;
  local_25c = 0x80;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (void *)0x0;
  local_260 = 0;
  local_254 = 0;
  local_248 = (ForElementType<FSetElementId>)0x0;
  local_240 = 0;
  local_258 = 0xffffffff;
  ::FString::FString((FString *)local_2c8,L"exr");
  ::FString::FString(&local_2a8,L"ext");
  local_2b8 = &local_2a8;
  local_2b0 = local_2c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_288,&local_2f0,(bool *)&local_2b8);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = 0;
  local_218 = (void *)0x0;
  local_210 = 0;
  local_20c = 0x80;
  local_208 = 0xffffffff;
  local_204 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e8._0_8_ = (FScriptContainerElement *)0x0;
  local_1e8._8_8_ = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_2f0.Key = (FString *)this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pUVar6 = (UMovieGraphPipeline *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  FMovieGraphFilenameResolveParams::MakeResolveParams
            (&local_198,(FMovieGraphRenderDataIdentifier *)(lVar1 + 0x38),pUVar6,
             (TObjectPtr<UMovieGraphEvaluatedConfig> *)&local_2f0,
             (FMovieGraphTraversalContext *)(lVar1 + 0x18),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_288);
  pFVar7 = UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
                     ((FString *)local_2c8,&local_300,&local_198,(FMovieGraphResolveArgs *)local_238
                     );
  if (&local_298 != pFVar7) {
    pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_198);
  local_1a0 = 0;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1e8,0,local_1e8._8_4_);
  iVar11 = SUB84(local_1e8._8_8_,4);
  local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
  }
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1c0 = 0;
  if (0x80 < local_1bc) {
    local_1bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  local_1f0 = 0;
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_238,0,local_238._8_4_);
  iVar11 = SUB84(local_238._8_8_,4);
  local_238._8_8_ = local_238._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_238,0,(int *)(local_238 + 0xc));
  }
  local_208 = 0xffffffff;
  local_204 = 0;
  local_210 = 0;
  if (0x80 < local_20c) {
    local_20c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10),0);
  }
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_238._0_8_);
  }
  local_240 = 0;
  if (local_248 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_248);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_288,0,local_288._8_4_);
  iVar11 = SUB84(local_288._8_8_,4);
  local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
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
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if (local_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
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
  if (pFVar7 != this) {
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = *(FScriptContainerElement **)this;
    *(undefined8 *)this = 0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
  }
  local_2f0.Key = pFVar8;
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 8))
            (*(longlong **)((longlong)this + 0x10),local_2c8,&local_2f0,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c8._8_8_);
  if (local_2f0.Key != (FString *)0x0) {
    (**(code **)((local_2f0.Key)->Data).AllocatorInstance.Data)(local_2f0.Key,1);
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// AbandonOutstandingWork @ 14dcb8930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::AbandonOutstandingWork(FMovieGraphOutputMerger *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FMovieGraphOutputMergerFrame *pFVar4;
  undefined1 auStackY_238 [32];
  FMovieGraphOutputMergerFrame local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lpCriticalSection = &this->PendingDataMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    while (pTVar2 = ((this->FinishedFrames).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
      pTVar3 = (this->FinishedFrames).Tail;
      (this->FinishedFrames).Tail = pTVar2;
      memset(&local_208,0,0x1f0);
      pFVar4 = FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame(&local_208);
      FMovieGraphOutputMergerFrame::operator=(&((this->FinishedFrames).Tail)->Item,pFVar4);
      FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame(&local_208);
      if (pTVar3 != (TNode *)0x0) {
        FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame(&pTVar3->Item);
        ::operator_delete(pTVar3,0x1f8);
      }
    }
    DestructItems<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,int>
              ((TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *)
               (this->PendingData).Pairs.AllocatorInstance.Data,(this->PendingData).Pairs.ArrayNum);
    piVar1 = &(this->PendingData).Pairs.ArrayMax;
    (this->PendingData).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1f8,8,0,(ForAnyElementType *)&this->PendingData,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// AllocateNewOutputFrame_GameThread @ 14dcba6b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::AllocateNewOutputFrame_GameThread
          (FMovieGraphOutputMerger *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FMovieGraphOutputMergerFrame *pFVar3;
  int local_res10 [6];
  
  lpCriticalSection = &this->PendingDataMutex;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PendingData,local_res10[0]);
  if (pFVar3 != (FMovieGraphOutputMergerFrame *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PendingData.Find(InRenderedFrameNumber)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOutputMerger.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieGraphOutputMergerFrame *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Emplace<int_const_&>(&this->PendingData,local_res10);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar3;
}

// GetFinishedFrames @ 14dccd700

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TQueue<UE::MovieGraph::FMovieGraphOutputMergerFrame,1> * __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::GetFinishedFrames(FMovieGraphOutputMerger *this)

{
  return &this->FinishedFrames;
}

// GetNumOutstandingFrames @ 14dccf190

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

int __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::GetNumOutstandingFrames(FMovieGraphOutputMerger *this)

{
  return (this->PendingData).Pairs.ArrayNum;
}

// GetOutputFrame_GameThread @ 14dccff10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::GetOutputFrame_GameThread
          (FMovieGraphOutputMerger *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieGraphOutputMergerFrame *pFVar3;
  
  pFVar3 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PendingData,param_1);
  if (pFVar3 == (FMovieGraphOutputMergerFrame *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingData.Find(InRenderedFrameNumber)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOutputMerger.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieGraphOutputMergerFrame *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->PendingData,param_1);
  return pFVar3;
}

// OnCompleteRenderPassDataAvailable_AnyThread @ 14dcd89d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread
          (FMovieGraphOutputMerger *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *this_00;
  ulonglong uVar1;
  IImagePixelDataPayload *pIVar2;
  FImagePixelData *pFVar3;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar4;
  TNode *pTVar5;
  code *pcVar6;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  FMovieGraphOutputMergerFrame *pFVar10;
  TNode *pTVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  int iVar13;
  undefined1 *puVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar23;
  TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *this_01;
  undefined1 auStackY_418 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6;
  undefined1 local_3c5 [5];
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0 [8];
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_3a8;
  int local_3a0 [2];
  FMovieGraphOutputMergerFrame *local_398;
  LPCRITICAL_SECTION local_390;
  int local_388;
  int local_384;
  FMovieGraphRenderDataIdentifier *local_380;
  FMovieGraphRenderDataIdentifier *local_378;
  FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>
  local_370;
  FMovieGraphOutputMerger *local_368;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_360;
  int iStack_358;
  uint uStack_354;
  undefined1 *local_350;
  undefined4 uStack_348;
  int iStack_344;
  int local_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  FMovieGraphRenderDataIdentifier local_328;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FMovieGraphRenderDataIdentifier local_2a8;
  undefined4 local_244;
  undefined1 local_238 [256];
  undefined1 local_138 [64];
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [64];
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->PendingDataMutex;
  local_390 = lpCriticalSection;
  local_368 = this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pIVar2 = (param_1->Ptr->Payload).Object;
  if ((pIVar2 == (IImagePixelDataPayload *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOutputMerger.cpp"
                         ,0x7c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = &this->PendingData;
  pFVar10 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Find(this_01,*(int *)(pIVar2 + 0x10));
  local_398 = pFVar10;
  if (pFVar10 == (FMovieGraphOutputMergerFrame *)0x0) {
    local_3c8 = 0;
    bVar8 = `UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::
            __l10::<lambda_1>::operator()(&local_3c8);
    if (!bVar8) goto LAB_14dcd9426;
  }
  local_328.RootBranchName = *(FName *)(pIVar2 + 7);
  ::FString::FString(&local_328.LayerName,(FString *)(pIVar2 + 8));
  ::FString::FString(&local_328.RendererName,(FString *)(pIVar2 + 10));
  ::FString::FString(&local_328.SubResourceName,(FString *)(pIVar2 + 0xc));
  ::FString::FString(&local_328.CameraName,(FString *)(pIVar2 + 0xe));
  bVar8 = TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_>::
          Contains<FMovieGraphRenderDataIdentifier>(&pFVar10->ExpectedRenderPasses,&local_328);
  if (bVar8) {
LAB_14dcd8af3:
    local_2a8.RootBranchName = local_328.RootBranchName;
    this_00 = &pFVar10->ImageOutputData;
    ::FString::FString(&local_2a8.LayerName,&local_328.LayerName);
    ::FString::FString(&local_2a8.RendererName,&local_328.RendererName);
    ::FString::FString(&local_2a8.SubResourceName,&local_328.SubResourceName);
    ::FString::FString(&local_2a8.CameraName,&local_328.CameraName);
    uVar9 = ::GetTypeHash(&local_2a8);
    if (*(int *)&(pFVar10->ImageOutputData).field_0x8 !=
        *(int *)&(pFVar10->ImageOutputData).field_0x34) {
      puVar14 = *(undefined1 **)&(pFVar10->ImageOutputData).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(pFVar10->ImageOutputData).field_0x38;
      }
      iVar20 = *(int *)(puVar14 +
                       (ulonglong)(*(int *)&(pFVar10->ImageOutputData).field_0x48 - 1U & uVar9) * 4)
      ;
      while (iVar20 != -1) {
        lVar16 = (longlong)iVar20 * 0x58;
        bVar8 = FMovieGraphRenderDataIdentifier::operator==
                          ((FMovieGraphRenderDataIdentifier *)
                           (*(longlong *)&this_00->field_0x0 + lVar16),&local_328);
        if (bVar8) {
          lVar16 = *(longlong *)&this_00->field_0x0 + lVar16;
          if (lVar16 != 0) goto LAB_14dcd8bf0;
          break;
        }
        iVar20 = *(int *)(lVar16 + 0x50 + *(longlong *)&this_00->field_0x0);
      }
    }
    local_378 = &local_328;
    TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
              ((TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_3a0,
               (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)(ulonglong)uVar9,
               (bool *)&local_378);
    lVar16 = (longlong)local_3a0[0] * 0x58 + *(longlong *)&this_00->field_0x0;
LAB_14dcd8bf0:
    pTVar12 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(lVar16 + 0x48);
    uVar9 = 1;
    if (pTVar12 != param_1) {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = param_1->Ptr;
      param_1->Ptr = (FImagePixelData *)0x0;
      if (pFVar3 != (FImagePixelData *)0x0) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    iVar20 = *(int *)&(pFVar10->ImageOutputData).field_0x8 -
             *(int *)&(pFVar10->ImageOutputData).field_0x34;
    if (iVar20 == (pFVar10->ExpectedRenderPasses).ArrayNum) {
      local_3a8.DebugPtr = (UMoviePipelineExecutorJob *)&(pFVar10->ImageOutputData).field_0x10;
      iStack_358 = 0;
      iVar15 = *(int *)&(pFVar10->ImageOutputData).field_0x28;
      local_340 = 0;
      iVar13 = 0;
      iStack_344 = 0;
      if (iVar15 != 0) {
        puVar19 = *(uint **)&(pFVar10->ImageOutputData).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)local_3a8;
        }
        uVar22 = *puVar19;
        while (uVar22 == 0) {
          lVar16 = (longlong)iStack_358;
          local_340 = local_340 + 0x20;
          iStack_358 = iStack_358 + 1;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_358) {
            iVar13 = *(int *)&(pFVar10->ImageOutputData).field_0x28;
            iStack_344 = iVar15;
            goto LAB_14dcd8cc3;
          }
          uVar22 = puVar19[lVar16 + 1];
        }
        iVar13 = *(int *)&(pFVar10->ImageOutputData).field_0x28;
        uVar9 = -uVar22 & uVar22;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_388 = (int)lVar16;
        iStack_344 = local_388 + -1 + local_340;
        if (iVar13 < iStack_344) {
          iStack_344 = iVar15;
        }
      }
LAB_14dcd8cc3:
      uVar22 = *(uint *)&(pFVar10->ImageOutputData).field_0x28;
      uVar21 = uVar22 & 0xffffffe0;
      uStack_348 = 0xffffffff;
      TStack_2d0.CurrentBitIndex = iStack_344;
      TStack_2d0.UnvisitedBitMask = 0xffffffff;
      TStack_2d0._padding_ = CONCAT44(uVar9,iStack_358);
      uStack_33c = local_244;
      TStack_2d0._28_4_ = local_244;
      TStack_2d0.BaseBitIndex = local_340;
      uStack_2b0 = CONCAT44(uStack_334,iVar20);
      iVar15 = (int)uVar22 >> 5;
      local_360 = this_00;
      uStack_354 = uVar9;
      local_350 = (undefined1 *)local_3a8;
      iStack_338 = iVar20;
      local_2d8 = this_00;
      TStack_2d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3a8;
      if ((((int)uVar22 < 0) || (iVar13 < (int)uVar22)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = local_398;
      TVar23 = local_3a8;
      uVar9 = *(uint *)&((TObjectPtr<UMoviePipelineExecutorShot> *)&(local_3a8.DebugPtr)->_padding_)
                        ->field0_0x0;
      if (uVar22 != uVar9) {
        TVar4 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
                (((TObjectPtr<UMoviePipelineExecutorJob> *)&(local_3a8.DebugPtr)->_padding_)->
                field0_0x0).DebugPtr;
        TVar18 = local_3a8;
        if ((FMovieGraphOutputMergerFrame *)TVar4.DebugPtr != (FMovieGraphOutputMergerFrame *)0x0) {
          TVar18 = TVar4;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                 *(uint *)((longlong)
                           &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                              *)&(TVar18.DebugPtr)->_padding_)->Object + (longlong)iVar15 * 4);
        while (uVar22 == 0) {
          lVar16 = (longlong)iVar15;
          uVar21 = uVar21 + 0x20;
          iVar15 = iVar15 + 1;
          uVar22 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14dcd8de0;
          uVar22 = *(uint *)((longlong)
                             &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                                *)&(TVar18.DebugPtr)->_padding_)->Object + lVar16 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_384 = (int)lVar16;
        uVar22 = (uVar21 - 1) + local_384;
        if ((int)uVar9 < (int)uVar22) {
          uVar22 = uVar9;
        }
      }
LAB_14dcd8de0:
      while( true ) {
        pTVar7 = local_2d8;
        if (*(int *)(&local_2d8->field_0x0 + 8) - *(int *)(&local_2d8->field_0x0 + 0x34) !=
            (int)uStack_2b0) {
          local_3c7 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3c7);
        }
        if (((TStack_2d0.CurrentBitIndex == uVar22) &&
            ((UMoviePipelineExecutorJob *)TStack_2d0.Array == TVar23.DebugPtr)) &&
           (pTVar7 == this_00)) break;
        lVar16 = *(longlong *)
                  (*(longlong *)
                    ((longlong)TStack_2d0.CurrentBitIndex * 0x58 + 0x48 +
                    *(longlong *)&pTVar7->field_0x0) + 0x18);
        if ((lVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PassPayload",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphOutputMerger.cpp"
                               ,0x9f,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        Append<FDefaultSetAllocator>
                  (&pFVar10->FileMetadata,
                   (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)(lVar16 + 0x198));
        TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
      }
      local_370.Predicate.Predicate =
           (TDereferenceWrapper<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>
            )local_3b0;
      TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
      ::
      StableSort<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>
                ((TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
                  *)this_00,&local_370);
    }
    local_3c0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    local_3b8 = 0;
    for (iVar20 = 0; (-1 < iVar20 && (iVar20 < (this->PendingData).Pairs.ArrayNum));
        iVar20 = iVar20 + 1) {
      if ((iVar20 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = (FMovieGraphOutputMergerFrame *)
                ((this_01->Pairs).AllocatorInstance.Data + (longlong)iVar20 * 0x1f8);
      if (((local_3c0.DebugPtr <= pFVar10) &&
          (pFVar10 < (FMovieGraphOutputMergerFrame *)
                     ((longlong)
                      &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                         *)&(local_3c0.DebugPtr)->_padding_)->Object + (longlong)local_3b8._4_4_ * 4
                     ))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)local_3b8 == local_3b8._4_4_) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)&local_3c0.ObjectPtr,
                            (int *)((longlong)&local_3b8 + 4));
        local_3b8 = CONCAT44(local_3b8._4_4_,iVar15);
      }
      lVar16 = (longlong)(int)local_3b8;
      local_3b8 = CONCAT44(local_3b8._4_4_,(int)local_3b8 + 1);
      *(undefined4 *)
       ((longlong)
        &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
           *)&(local_3c0.DebugPtr)->_padding_)->Object + lVar16 * 4) =
           *(undefined4 *)&(pFVar10->EvaluatedConfig).Object;
    }
    iVar20 = (int)local_3b8;
    local_398 = (FMovieGraphOutputMergerFrame *)
                ((longlong)
                 &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)&(local_3c0.DebugPtr)->_padding_)->Object + (longlong)(int)local_3b8 * 4);
    TVar23 = local_3c0;
    while( true ) {
      pFVar10 = local_398;
      local_3a8 = TVar23;
      if ((int)local_3b8 != iVar20) {
        local_3c6 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3c6);
      }
      if ((FMovieGraphOutputMergerFrame *)TVar23.DebugPtr == pFVar10) break;
      iVar15 = *(int *)&((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                          *)&(TVar23.DebugPtr)->_padding_)->Object;
      pFVar10 = TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                ::Find(this_01,iVar15);
      if ((pFVar10 == (FMovieGraphOutputMergerFrame *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar10->ExpectedRenderPasses).ArrayNum !=
          *(int *)&(pFVar10->ImageOutputData).field_0x8 -
          *(int *)&(pFVar10->ImageOutputData).field_0x34) break;
      local_238._0_8_ = (UObject *)0x0;
      FMovieGraphTraversalContext::FMovieGraphTraversalContext
                ((FMovieGraphTraversalContext *)(local_238 + 8));
      uVar9 = (this->PendingData).Pairs.ArrayNum;
      uVar22 = 0;
      pFVar17 = (this_01->Pairs).AllocatorInstance.Data;
      local_238._240_8_ = (FMovieGraphRenderDataIdentifier *)0x0;
      local_238._248_4_ = 0;
      local_238._252_4_ = 0;
      local_138._0_8_ = 0;
      local_138._8_8_ = 0;
      local_138._32_8_ = 0;
      local_138._40_4_ = 0;
      local_138._44_4_ = 0x80;
      local_138._48_4_ = 0xffffffff;
      local_138._52_4_ = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_e8._32_8_ = 0;
      local_e8._40_4_ = 0;
      local_e8._44_4_ = 0x80;
      local_e8._48_4_ = 0xffffffff;
      local_e8._52_4_ = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_98._40_4_ = 0;
      local_98._44_4_ = 0x80;
      local_98._48_4_ = 0xffffffff;
      local_98._52_4_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      if (0 < (int)uVar9) {
        do {
          iVar13 = (uVar9 >> 1) + uVar22;
          if (*(int *)(pFVar17 + (longlong)iVar13 * 0x1f8) < iVar15) {
            uVar22 = iVar13 + (uVar9 & 1);
          }
          uVar21 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar21 != 0);
      }
      if ((((int)uVar22 < (this->PendingData).Pairs.ArrayNum) &&
          (*(int *)(pFVar17 + (longlong)(int)uVar22 * 0x1f8) <= iVar15)) && (uVar22 != 0xffffffff))
      {
        if (((int)uVar22 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FMovieGraphOutputMergerFrame::operator=
                  ((FMovieGraphOutputMergerFrame *)local_238,
                   (FMovieGraphOutputMergerFrame *)
                   ((this_01->Pairs).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x1f8 + 8));
        uVar9 = 0;
        if ((int)uVar22 < (this->PendingData).Pairs.ArrayNum) {
          uVar9 = ~uVar22 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (this_01->Pairs).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x1f8;
        FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame
                  ((FMovieGraphOutputMergerFrame *)(pFVar17 + 8));
        iVar15 = (this->PendingData).Pairs.ArrayNum + ~uVar22;
        if (iVar15 != 0) {
          memmove(pFVar17,pFVar17 + 0x1f8,(longlong)iVar15 * 0x1f8);
        }
        iVar15 = (this->PendingData).Pairs.ArrayNum + -1;
        (this->PendingData).Pairs.ArrayNum = iVar15;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1f8,8,(ForAnyElementType *)this_01,iVar15,&(this->PendingData).Pairs.ArrayMax);
        TVar23 = local_3a8;
      }
      else {
        local_3c5[0] = 0;
        `UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::
        __l33::<lambda_4>::operator()(local_3c5);
      }
      pTVar11 = ::operator_new(0x1f8);
      if (pTVar11 != (TNode *)0x0) {
        pTVar11->NextNode = (TNode *)0x0;
        FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
                  (&pTVar11->Item,(FMovieGraphOutputMergerFrame *)local_238);
        pTVar5 = (local_368->FinishedFrames).Head;
        (local_368->FinishedFrames).Head = pTVar11;
        pTVar5->NextNode = pTVar11;
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      local_f0 = 0;
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      DestructItems<FMovieGraphRenderDataIdentifier,int>
                ((FMovieGraphRenderDataIdentifier *)local_238._240_8_,local_238._248_4_);
      if ((FMovieGraphRenderDataIdentifier *)local_238._240_8_ !=
          (FMovieGraphRenderDataIdentifier *)0x0) {
        FMemory::Free((void *)local_238._240_8_);
      }
      if ((FScriptContainerElement *)local_238._96_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._96_8_);
      }
      if ((FScriptContainerElement *)local_238._80_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._80_8_);
      }
      if ((FScriptContainerElement *)local_238._64_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._64_8_);
      }
      if ((FScriptContainerElement *)local_238._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._48_8_);
      }
      if ((UObject *)local_238._0_8_ != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_238._0_8_);
      }
      TVar23.DebugPtr =
           (UMoviePipelineExecutorJob *)
           ((longlong)
            &((TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
               *)&(TVar23.DebugPtr)->_padding_)->Object + 4);
    }
    lpCriticalSection = local_390;
    if ((FMovieGraphOutputMergerFrame *)local_3c0.DebugPtr != (FMovieGraphOutputMergerFrame *)0x0) {
      FMemory::Free(local_3c0.DebugPtr);
    }
  }
  else {
    local_380 = &local_328;
    bVar8 = `UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::
            __l13::<lambda_2>::operator()(&local_380);
    if (bVar8) goto LAB_14dcd8af3;
  }
  if (local_328.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_328.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_328.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_328.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.LayerName.Data.AllocatorInstance.Data);
  }
LAB_14dcd9426:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// OnSingleSampleDataAvailable_AnyThread @ 14dcd9e20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread
          (FMovieGraphOutputMerger *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  IImageWriteQueue *pIVar1;
  FImagePixelData *pFVar2;
  FWeakObjectPtr FVar3;
  code *local_38 [5];
  undefined8 *local_10;
  
  pIVar1 = this->Debug_ImageWriteQueue;
  pFVar2 = param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  FVar3 = (this->WeakMoviePipeline).WeakPtr;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = pFVar2;
  *local_10 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  *(FWeakObjectPtr *)(local_10 + 2) = FVar3;
  local_10[3] = pIVar1;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return;
}

// operator() @ 15058caf0

bool __thiscall
`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l10::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6062323587862232954>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6062323587862232954>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cd30

bool __thiscall
`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l13::
<lambda_2>::operator()(void *this)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_88;
  FString local_78;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6062323587862232947>);
  if (bVar3) {
    pFVar1 = *(FName **)this;
    local_68 = *pFVar1;
    ::FString::FString(&local_60,(FString *)(pFVar1 + 1));
    ::FString::FString(&local_50,(FString *)(pFVar1 + 3));
    ::FString::FString(&local_40,(FString *)(pFVar1 + 5));
    ::FString::FString(&local_30,(FString *)(pFVar1 + 7));
    ::FName::ToString(&local_68,&local_78);
    ::FString::PrintfImpl
              (&local_88,L"LayerName: %s RootBranch: %s Renderer:%s SubResource: %s Camera: %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6062323587862232947>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15058ceaa;
    }
  }
  bVar3 = false;
LAB_15058ceaa:
  if ((bVar5) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15058cf70

bool __thiscall
`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l33::
<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6062323587862232895>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6062323587862232895>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

