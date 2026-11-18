// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 22

// StaticClass @ 14dc98610

UClass * __cdecl UMovieGraphDefaultRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton,
               StaticRegisterNativesUMovieGraphDefaultRenderer,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDefaultRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultRenderer>,local_res8,
               UMovieGraphRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton;
}

// UMovieGraphDefaultRenderer @ 14dcafa40

UMovieGraphDefaultRenderer * __thiscall
UMovieGraphDefaultRenderer::UMovieGraphDefaultRenderer
          (UMovieGraphDefaultRenderer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphDefaultRenderer__6B_;
  (this->RenderPassesInUse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderPassesInUse).ArrayNum = 0;
  (this->RenderPassesInUse).ArrayMax = 0;
  *(undefined8 *)&this->RenderTimeStatistics = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x20 = 0;
  this->bHasRenderedFirstViewThisFrame = false;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x48 = 0;
  *(undefined8 *)&this->PooledViewRenderTargets = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x34 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x48 = 0;
  *(undefined8 *)&this->PooledViewRenderTargetStates = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x8 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x20 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x28 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x34 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x40 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x48 = 0;
  *(undefined8 *)&this->PooledSurfaceQueues = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x8 = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x20 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x28 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x34 = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x40 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x48 = 0;
  *(undefined8 *)&this->PooledAccumulators = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x8 = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x20 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x28 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledAccumulators).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledAccumulators).field_0x34 = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x40 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OutstandingTasksMutex,4000);
  (this->OutstandingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 0;
  *(undefined8 *)&this->CameraOverscanCache = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x8 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x20 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x40 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  this->bHasWarnedAboutAnimatedOverscan = false;
  return this;
}

// UMovieGraphDefaultRenderer @ 14dcafc20

UMovieGraphDefaultRenderer * __thiscall
UMovieGraphDefaultRenderer::UMovieGraphDefaultRenderer
          (UMovieGraphDefaultRenderer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphDefaultRenderer__6B_;
  (this->RenderPassesInUse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderPassesInUse).ArrayNum = 0;
  (this->RenderPassesInUse).ArrayMax = 0;
  *(undefined8 *)&this->RenderTimeStatistics = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x20 = 0;
  this->bHasRenderedFirstViewThisFrame = false;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTimeStatistics).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x48 = 0;
  *(undefined8 *)&this->PooledViewRenderTargets = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x34 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x48 = 0;
  *(undefined8 *)&this->PooledViewRenderTargetStates = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x8 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x20 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x28 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x34 = 0;
  *(undefined8 *)&(this->PooledViewRenderTargetStates).field_0x40 = 0;
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x48 = 0;
  *(undefined8 *)&this->PooledSurfaceQueues = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x8 = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x20 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x28 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x34 = 0;
  *(undefined8 *)&(this->PooledSurfaceQueues).field_0x40 = 0;
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x48 = 0;
  *(undefined8 *)&this->PooledAccumulators = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x8 = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x20 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x28 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x2c = 0x80;
  *(undefined4 *)&(this->PooledAccumulators).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PooledAccumulators).field_0x34 = 0;
  *(undefined8 *)&(this->PooledAccumulators).field_0x40 = 0;
  *(undefined4 *)&(this->PooledAccumulators).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OutstandingTasksMutex,4000);
  (this->OutstandingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 0;
  *(undefined8 *)&this->CameraOverscanCache = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x8 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x20 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x40 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  this->bHasWarnedAboutAnimatedOverscan = false;
  return this;
}

// ~UMovieGraphDefaultRenderer @ 14dcb2c60

void __thiscall
UMovieGraphDefaultRenderer::~UMovieGraphDefaultRenderer(UMovieGraphDefaultRenderer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphDefaultRenderer__6B_;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraOverscanCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraOverscanCache);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->OutstandingTasks).AllocatorInstance.Data,
             (this->OutstandingTasks).ArrayNum);
  pFVar2 = (this->OutstandingTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutstandingTasksMutex);
  *(undefined4 *)&(this->PooledAccumulators).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledAccumulators).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledAccumulators);
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledSurfaceQueues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledSurfaceQueues);
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledViewRenderTargetStates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledViewRenderTargetStates);
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledViewRenderTargets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledViewRenderTargets);
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderTimeStatistics).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderTimeStatistics);
  pFVar2 = (this->RenderPassesInUse).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UMovieGraphRendererBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddOutstandingRenderTask_AnyThread @ 14dcb9b50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieGraphDefaultRenderer::AddOutstandingRenderTask_AnyThread
          (UMovieGraphDefaultRenderer *this,FTaskHandle param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  
  lpCriticalSection = &this->OutstandingTasksMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = &this->OutstandingTasks;
  TVar2.Reference = (FTaskBase *)(pTVar8->AllocatorInstance).Data;
  if ((TVar2.Reference <= (ulonglong)param_1.Pimpl.Reference) &&
     ((ulonglong)param_1.Pimpl.Reference <
      (FTaskBase *)
      (((TVar2.Reference)->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
      (longlong)(this->OutstandingTasks).ArrayMax * 8 + -0x58))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->OutstandingTasks).ArrayNum;
  piVar1 = &(this->OutstandingTasks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->OutstandingTasks).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = *(undefined8 *)param_1.Pimpl.Reference;
  *(undefined8 *)param_1.Pimpl.Reference = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar4 = *(undefined8 **)param_1.Pimpl.Reference;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// AddReferencedObjects @ 14dcba0b0

void __cdecl
UMovieGraphDefaultRenderer::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  ulonglong uVar1;
  UObject *pUVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FString *pFVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  UObject *pUVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_2;
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar10 = GetTypeName<UMovieGraphDefaultRenderer>(&local_68);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar9 = GetPrivateStaticClass();
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    pFVar10 = GetTypeName<UMovieGraphDefaultRenderer>(&local_58);
    pwVar13 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UObject>(&local_48,param_1);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar12);
  }
  iVar14 = 0;
  iVar3 = *(int *)&param_1[4].field_0x18;
  pUVar2 = param_1 + 4;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pUVar15 = *(UObject **)&param_1[4].field_0x10;
    if (*(UObject **)&param_1[4].field_0x10 == (UObject *)0x0) {
      pUVar15 = pUVar2;
    }
    uVar11 = *(uint *)pUVar15;
    while (uVar11 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dcba1ac;
      uVar11 = *(uint *)((longlong)&pUVar15->field_0x0 + (longlong)iVar14 * 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_res18 = (int)lVar4;
    iVar8 = local_res18 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14dcba1ac:
  uVar11 = *(uint *)&param_1[4].field_0x18;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar7,iVar14);
  TStack_90.CurrentBitIndex = iVar8;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar8;
  TStack_90.BaseBitIndex = iVar16;
  uStack_70 = CONCAT44(uStack_9c,*(int *)&param_1[3].field_0x20 - *(int *)&param_1[4].field_0x24);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), param_2 = local_res10, bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_1[4].field_0x18;
  if (uVar11 != uVar7) {
    pUVar15 = pUVar2;
    if (*(UObject **)&param_1[4].field_0x10 != (UObject *)0x0) {
      pUVar15 = *(UObject **)&param_1[4].field_0x10;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((longlong)&pUVar15->field_0x0 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      iVar14 = iVar14 + 1;
      uVar17 = uVar17 + 0x20;
      uVar11 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar14) goto LAB_14dcba2b1;
      uVar11 = *(uint *)((longlong)&pUVar15->field_0x0 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = (int)lVar4 + -1 + uVar17;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14dcba2b1:
  while( true ) {
    if (*(int *)&param_1[3].field_0x20 - *(int *)&param_1[4].field_0x24 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar11) && ((UObject *)TStack_90.Array == pUVar2)) break;
    FReferenceCollector::AddStableReferenceFwd
              (param_2,(FObjectPtr *)
                       (*(longlong *)&param_1[3].field_0x18 +
                       (longlong)TStack_90.CurrentBitIndex * 0x68 + 0x58));
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// CreateSurfaceQueue @ 14dcbff80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMoviePipelineSurfaceQueue,1> * __thiscall
UMovieGraphDefaultRenderer::CreateSurfaceQueue
          (UMovieGraphDefaultRenderer *this,
          TSharedPtr<FMoviePipelineSurfaceQueue,1> *__return_storage_ptr__,
          FRenderTargetInitParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FMoviePipelineSurfaceQueue,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FMoviePipelineSurfaceQueue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMoviePipelineSurfaceQueue___00_SharedPointerInternals__6B_
    ;
    FMoviePipelineSurfaceQueue::FMoviePipelineSurfaceQueue
              ((FMoviePipelineSurfaceQueue *)(pTVar3 + 1),
               (TIntPoint<int>)(param_1->Size).field0_0x0._s_0,param_1->PixelFormat,6,true);
    if ((FMoviePipelineSurfaceQueue *)(pTVar3 + 1) == (FMoviePipelineSurfaceQueue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FMoviePipelineSurfaceQueue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FMoviePipelineSurfaceQueue *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return __return_storage_ptr__;
}

// CreateViewRenderTarget @ 14dcc0090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UTextureRenderTarget2D> __thiscall
UMovieGraphDefaultRenderer::CreateViewRenderTarget
          (UMovieGraphDefaultRenderer *this,FRenderTargetInitParams *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  TIntPoint<int>_u_0 TVar3;
  longlong *plVar4;
  uint *in_R8;
  undefined1 auStack_148 [32];
  undefined1 local_118 [8];
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_110;
  longlong local_d8;
  void *local_d0;
  undefined4 local_c8 [2];
  undefined1 local_c0 [64];
  void *local_80;
  undefined4 local_78;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar1 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar2);
  local_110._0_8_ = pUVar1;
  TVar3 = (TIntPoint<int>_u_0)
          StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_d8 != 0) {
    plVar4 = (longlong *)local_c8;
    if ((longlong *)local_c0._16_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_c0._16_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
                    /* WARNING: Store size is inaccurate */
  *(TIntPoint<int>_u_0 *)(param_1->Size).field0_0x0.XY = TVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3 != (TIntPoint<int>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3);
    TVar3 = (param_1->Size).field0_0x0;
  }
  *(undefined8 *)&((UObject *)((longlong)TVar3 + 0x140))->field_0x20 = 0;
  *(undefined8 *)((longlong)TVar3 + 0x168) = 0;
  *(uint *)((longlong)(param_1->Size).field0_0x0 + 0x150) = in_R8[2];
  UTextureRenderTarget2D::InitCustomFormat
            ((UTextureRenderTarget2D *)(param_1->Size).field0_0x0,*in_R8,in_R8[1],
             *(EPixelFormat *)((longlong)in_R8 + 0xd),SUB41(in_R8[3],0));
  plVar4 = *(longlong **)(param_1->Size).field0_0x0.XY;
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_118,EstimatedTotal);
  (**(code **)(*plVar4 + 400))(plVar4,local_118);
  FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_118);
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_70);
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c0);
  local_c8[0] = 0;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_110);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return (TObjectPtr<UTextureRenderTarget2D>)(TObjectPtr<UTextureRenderTarget2D>_u_0)param_1;
}

// FlushAsyncEngineSystems @ 14dcc8890

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
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultRenderer::FlushAsyncEngineSystems
          (UMovieGraphDefaultRenderer *this,TObjectPtr<UMovieGraphEvaluatedConfig> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCommandList *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UMovieGraphGlobalGameOverridesNode *pUVar9;
  UMovieGraphCameraSettingNode *pUVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  UWorld *pUVar14;
  FAssetCompilingManager *this_00;
  FRenderCommandList *this_01;
  FRenderCommandTag *pFVar15;
  FStreamingManagerCollection *pFVar16;
  UClass *pUVar17;
  ULandscapeSubsystem *this_02;
  UObject *pUVar18;
  undefined ***pppuVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  FMinimalCameraInfo *pFVar23;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  undefined8 local_108;
  FMinimalCameraInfo *local_100;
  int local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TOptional<TArrayView<UE::Math::TVector<double>,int>_>_u_0 local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined ***local_a0;
  undefined1 local_98 [16];
  undefined **local_88 [3];
  undefined ***local_70;
  byte local_68;
  FSyncScope local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar9 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalGameOverridesNode>
                     ((param_1->field0_0x0).DebugPtr,UMovieGraphNode::GlobalsPinName,true,false);
  if (pUVar9 == (UMovieGraphGlobalGameOverridesNode *)0x0) {
    return;
  }
  pUVar10 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                      ((param_1->field0_0x0).DebugPtr,UMovieGraphNode::GlobalsPinName,true,false);
  if (pUVar10 == (UMovieGraphCameraSettingNode *)0x0) {
    return;
  }
  if (pUVar9->bFlushLevelStreaming != false) {
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x180))(pUVar12);
    if (lVar13 != 0) {
      pUVar11 = UMovieGraphPipeline::StaticClass();
      pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
      pUVar14 = (UWorld *)(**(code **)(*(longlong *)pUVar12 + 0x180))(pUVar12);
      UWorld::BlockTillLevelStreamingCompleted(pUVar14);
    }
  }
  if (pUVar9->bFlushAssetCompiler != false) {
    this_00 = FAssetCompilingManager::Get();
    FAssetCompilingManager::FinishAllCompilation(this_00);
  }
  if (pUVar9->bFlushShaderCompiler != false) {
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    pUVar14 = (UWorld *)(**(code **)(*(longlong *)pUVar12 + 0x180))(pUVar12);
    UMaterialInterface::SubmitRemainingJobsForWorld(pUVar14,Background);
  }
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_58);
  lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
  local_a0 = (undefined ***)0x0;
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::`18'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_b0 = (uint)*(byte *)(lVar13 + 0x188);
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems_::__l18::TSTR_VirtualTextureSystemFlushCommand437>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
  }
  else {
    if (this_01->bInitialized == 0) {
      FRenderCommandList::Init(this_01);
    }
    iVar2 = (this_01->CommandLists).ArrayNum;
    uVar20 = iVar2 - 1;
    uVar7 = 0;
    if ((int)uVar20 < iVar2) {
      uVar7 = ~uVar20 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_148 = (FScriptContainerElement *)(longlong)(int)uVar20;
      local_140 = (FScriptContainerElement *)(longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar2 = (this_01->CommandLists).ArrayNum;
    local_88[1]._4_4_ = uStack_ac;
    local_88[1]._0_4_ = uStack_b0;
    local_88[0] = local_b8;
    local_88[2] = (undefined **)local_a8;
    local_68 = 2;
    pFVar3 = (this_01->CommandLists).AllocatorInstance.Data;
    local_98._0_8_ = local_c8[0];
    local_70 = local_a0;
    local_c8[0] = (code *)0x0;
    pFVar15 = (FRenderCommandTag *)
              TRenderCommandTag<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::TSTR_VirtualTextureSystemFlushCommand437>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar3 + (iVar2 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_98,pFVar15);
    uVar21 = (ulonglong)local_68;
    if ((2 < uVar21) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_98._0_8_ != (code *)0x0) {
        pppuVar19 = (undefined ***)(local_98 + 0x10);
        if (local_70 != (undefined ***)0x0) {
          pppuVar19 = local_70;
        }
        (*(code *)(*pppuVar19)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(local_98);
    }
  }
  if (local_c8[0] != (code *)0x0) {
    pppuVar19 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar19 = local_a0;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_58);
  if (pUVar9->bFlushStreamingManagers != false) {
    pFVar16 = IStreamingManager::Get();
    pcVar5 = *(code **)(pFVar16->_padding_ + 0x10);
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x180))(pUVar12);
    (*pcVar5)(pFVar16,*(undefined4 *)(lVar13 + 0x91c),1);
    (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16,0,0);
  }
  if (pUVar9->bFlushGrassStreaming == false) {
    return;
  }
  lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
  pUVar11 = Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_14dcc8be6;
  }
  else if (pUVar11 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14dcc8be6:
    pUVar17 = Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
    if (pUVar17 != (UClass *)0x0) {
      iVar2 = (int)pUVar17->_padding_;
      if (((int)pUVar11->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar17->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) goto LAB_14dcc8c17;
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_14dcc8c17:
  this_02 = (ULandscapeSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)(lVar13 + 0xac0),pUVar11);
  if (this_02 != (ULandscapeSubsystem *)0x0) {
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar18 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    uVar7 = *(uint *)(pUVar18 + 0xb);
    uVar20 = 0;
    if ((int)uVar7 < *(int *)(pUVar12 + 8)) {
      uVar20 = ~uVar7 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (local_148 = (FScriptContainerElement *)(longlong)(int)uVar7,
       local_140 = (FScriptContainerElement *)(longlong)*(int *)(pUVar12 + 8),
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(undefined8 *)(*(longlong *)&pUVar12[7].field_0x20 + (longlong)(int)uVar7 * 8);
    bVar6 = pUVar10->bRenderAllCameras;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    pUVar11 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    (**(code **)(**(longlong **)&pUVar12[4].field_0x20 + 0x330))
              (*(longlong **)&pUVar12[4].field_0x20,&local_100,uVar4,bVar6);
    iVar2 = local_f8;
    pFVar22 = (FScriptContainerElement *)&local_100->ViewInfo;
    pFVar23 = local_100 + local_f8;
    while( true ) {
      if (local_f8 != iVar2) {
        local_118[0] = 0;
        `TCheckedPointerIterator<UE::MovieGraph::FMinimalCameraInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_118);
      }
      if ((FMinimalCameraInfo *)(pFVar22 + -0x10) == pFVar23) break;
      if (local_110.Data <= pFVar22) {
        if (pFVar22 < local_110.Data + (longlong)local_108._4_4_ * 0x18) {
          local_130 = (longlong)(int)local_108;
          local_128 = 0x18;
          local_140 = local_110.Data;
          local_148 = pFVar22;
          local_138 = (longlong)local_108._4_4_;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar8 = (int)local_108;
      if ((int)local_108 == local_108._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_110,(int *)((longlong)&local_108 + 4));
      }
      local_108 = CONCAT44(local_108._4_4_,iVar8 + 1);
      uVar4 = *(undefined8 *)(pFVar22 + 8);
      *(undefined8 *)(local_110.Data + (longlong)iVar8 * 0x18) = *(undefined8 *)pFVar22;
      *(undefined8 *)(local_110.Data + (longlong)iVar8 * 0x18 + 8) = uVar4;
      pFVar1 = pFVar22 + 0x10;
      pFVar22 = pFVar22 + 0x8e0;
      *(undefined8 *)(local_110.Data + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)pFVar1;
    }
    DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_100,local_f8);
    if (local_100 != (FMinimalCameraInfo *)0x0) {
      FMemory::Free(local_100);
    }
    iVar2 = (int)local_108;
    local_e8 = local_110.Data;
    if (((int)local_108 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_e0 = iVar2;
    local_d8._8_8_ = CONCAT44(uStack_dc,iVar2);
    local_d8.TypedValue.DataPtr = (TVector<double> *)local_e8;
    if ((iVar2 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ULandscapeSubsystem::RegenerateGrass
              (this_02,false,true,
               (TOptional<TArrayView<UE::Math::TVector<double>,int>_> *)&local_d8.TypedValue);
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
  }
  return;
}

// GetCameraInfo @ 14dccaea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraInfo * __thiscall
UMovieGraphDefaultRenderer::GetCameraInfo
          (UMovieGraphDefaultRenderer *this,FCameraInfo *__return_storage_ptr__,int param_1)

{
  FString *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  FCameraInfo *pFVar15;
  AActor *pAVar16;
  void *pvVar17;
  uint uVar18;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  FMinimalCameraInfo *local_48;
  int local_40;
  
  FMinimalViewInfo::FMinimalViewInfo(&__return_storage_ptr__->ViewInfo);
  __return_storage_ptr__->ViewActor = (AActor *)0x0;
  pFVar1 = &__return_storage_ptr__->CameraName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CameraName).Data.ArrayNum = 0;
  (__return_storage_ptr__->CameraName).Data.ArrayMax = 0;
  __return_storage_ptr__->bAllowCameraAspectRatio = true;
  __return_storage_ptr__->DoFSensorScale = 1.0;
  __return_storage_ptr__->bUseCameraManagerPostProcess = true;
  pUVar12 = UMovieGraphPipeline::StaticClass();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  pUVar12 = UMovieGraphPipeline::StaticClass();
  pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  uVar18 = *(uint *)(pUVar14 + 0xb);
  uVar9 = 0;
  if ((int)uVar18 < *(int *)(pUVar13 + 8)) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FCameraInfo *)(*pcVar6)();
    return pFVar15;
  }
  lVar3 = *(longlong *)(*(longlong *)&pUVar13[7].field_0x20 + (longlong)(int)uVar18 * 8);
  uVar18 = 0;
  if (param_1 < 0) {
    iVar2 = *(int *)(lVar3 + 0x48);
    pvVar17 = *(void **)(lVar3 + 0x40);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = CONCAT44(local_50._4_4_,iVar2);
    if (iVar2 == 0) {
      local_50 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,&local_58,iVar2,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,pvVar17,(longlong)iVar2 * 2);
    }
    uVar9 = uVar18;
    FVar7.Data = local_58.Data;
    if (pFVar1 != (FString *)&local_58) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_58.Data;
      (__return_storage_ptr__->CameraName).Data.ArrayNum = (int)local_50;
      (__return_storage_ptr__->CameraName).Data.ArrayMax = local_50._4_4_;
      local_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = local_58.Data;
    }
    goto joined_r0x00014dccb158;
  }
  if (param_1 < *(int *)(lVar3 + 0x58)) {
    if ((param_1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FCameraInfo *)(*pcVar6)();
      return pFVar15;
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x50) + 0x20 + (longlong)param_1 * 0x28);
    pvVar17 = *(void **)(*(longlong *)(lVar3 + 0x50) + 0x18 + (longlong)param_1 * 0x28);
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    if (iVar2 == 0) goto LAB_14dccb0dd;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_68,iVar2,(int *)((longlong)&local_60 + 4));
LAB_14dccb111:
    memcpy(local_68.Data,pvVar17,(longlong)iVar2 * 2);
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x48);
    pvVar17 = *(void **)(lVar3 + 0x40);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    if (iVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,&local_68,iVar2,(int *)((longlong)&local_60 + 4));
      goto LAB_14dccb111;
    }
LAB_14dccb0dd:
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = local_60 & 0xffffffff;
  }
  uVar9 = param_1;
  FVar7.Data = local_68.Data;
  if (pFVar1 != (FString *)&local_68) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_68.Data;
    (__return_storage_ptr__->CameraName).Data.ArrayNum = (int)local_60;
    (__return_storage_ptr__->CameraName).Data.ArrayMax = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = local_68.Data;
  }
joined_r0x00014dccb158:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  pUVar12 = UMovieGraphPipeline::StaticClass();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  plVar5 = *(longlong **)&pUVar13[4].field_0x20;
  pcVar6 = *(code **)(*plVar5 + 0x330);
  pUVar12 = UMovieGraphPipeline::StaticClass();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  pUVar12 = UMovieGraphPipeline::StaticClass();
  pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  uVar11 = *(uint *)(pUVar14 + 0xb);
  uVar10 = uVar18;
  if ((int)uVar11 < *(int *)(pUVar13 + 8)) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FCameraInfo *)(*pcVar6)();
    return pFVar15;
  }
  (*pcVar6)(plVar5,&local_48,
            *(undefined8 *)(*(longlong *)&pUVar13[7].field_0x20 + (longlong)(int)uVar11 * 8),
            (byte)((uint)param_1 >> 0x1f) ^ 1);
  if (((int)uVar9 < 0) || (local_40 <= (int)uVar9)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7835893065314206212>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
                       ,0x204,"MinimalCameraInfos.IsValidIndex(LocalArrayIndex)");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FCameraInfo *)(*pcVar6)();
      return pFVar15;
    }
  }
  else {
    uVar11 = uVar18;
    if ((int)uVar9 < local_40) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FCameraInfo *)(*pcVar6)();
      return pFVar15;
    }
    FMinimalViewInfo::operator=(&__return_storage_ptr__->ViewInfo,&local_48[(int)uVar9].ViewInfo);
    if ((int)uVar9 < local_40) {
      uVar18 = ~uVar9 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FCameraInfo *)(*pcVar6)();
      return pFVar15;
    }
    pAVar16 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_48 + (int)uVar9));
    __return_storage_ptr__->ViewActor = pAVar16;
  }
  DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_48,local_40);
  if (local_48 != (FMinimalCameraInfo *)0x0) {
    FMemory::Free(local_48);
  }
  return __return_storage_ptr__;
}

// GetCameraLocationsForFrame @ 14dccb880

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultRenderer::GetCameraLocationsForFrame
          (UMovieGraphDefaultRenderer *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          UMoviePipelineExecutorShot *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  FMinimalCameraInfo *pFVar11;
  undefined1 local_28 [8];
  FMinimalCameraInfo *local_20;
  int local_18;
  
  pUVar8 = UMovieGraphPipeline::StaticClass();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  (**(code **)(**(longlong **)&pUVar9[4].field_0x20 + 0x330))
            (*(longlong **)&pUVar9[4].field_0x20,&local_20,param_2,param_3);
  iVar5 = local_18;
  pFVar11 = local_20 + local_18;
  pFVar10 = (FScriptContainerElement *)&local_20->ViewInfo;
  while( true ) {
    if (local_18 != iVar5) {
      local_28[0] = 0;
      `TCheckedPointerIterator<UE::MovieGraph::FMinimalCameraInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_28);
    }
    if ((FMinimalCameraInfo *)(pFVar10 + -0x10) == pFVar11) break;
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar10) && (pFVar10 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar7;
    }
    param_1->ArrayNum = iVar7 + 1;
    uVar4 = *(undefined8 *)(pFVar10 + 8);
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar2 + (longlong)iVar7 * 0x18;
    *(undefined8 *)pFVar1 = *(undefined8 *)&pFVar10->field_0x0;
    *(undefined8 *)(pFVar1 + 8) = uVar4;
    pFVar1 = pFVar10 + 0x10;
    pFVar10 = pFVar10 + 0x8e0;
    *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0x18 + 0x10) = *(undefined8 *)pFVar1;
  }
  DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_20,local_18);
  if (local_20 != (FMinimalCameraInfo *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// GetCameraOverscan @ 14dccba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UMovieGraphDefaultRenderer::GetCameraOverscan(UMovieGraphDefaultRenderer *this,int param_1)

{
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  int iVar1;
  FCameraInfo *pFVar2;
  float *pfVar3;
  undefined1 *puVar4;
  undefined1 auStack_9a8 [32];
  float local_988 [2];
  float local_980 [2];
  TPairInitializer<int_const_&,float_const_&> local_978;
  float *local_968;
  FCameraInfo local_958;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  this_00 = &this->CameraOverscanCache;
  local_980[0] = (float)param_1;
  if (*(int *)&(this->CameraOverscanCache).field_0x8 !=
      *(int *)&(this->CameraOverscanCache).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CameraOverscanCache).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CameraOverscanCache).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CameraOverscanCache).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x10) == param_1) {
          pfVar3 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                   ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                  *)this_00,param_1);
          return *pfVar3;
        }
        iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  pFVar2 = GetCameraInfo(this,&local_958,param_1);
  local_988[0] = (pFVar2->ViewInfo).Overscan;
  if (local_958.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_958.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.
                  Data);
  }
  local_978.Value = local_980;
  local_968 = local_988;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,float_const_&>_>
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)this_00,&local_978,(bool *)&local_978.Value);
  return local_988[0];
}

// GetOrCreateSurfaceQueue @ 14dccf3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMoviePipelineSurfaceQueue,1> * __thiscall
UMovieGraphDefaultRenderer::GetOrCreateSurfaceQueue
          (UMovieGraphDefaultRenderer *this,
          TSharedPtr<FMoviePipelineSurfaceQueue,1> *__return_storage_ptr__,
          FRenderTargetInitParams *param_1)

{
  TMap<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedPtr<FMoviePipelineSurfaceQueue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMoviePipelineSurfaceQueue *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FRenderTargetInitParams *local_38;
  FMoviePipelineSurfaceQueue **local_30;
  TIntPoint<int>_u_0 local_28;
  undefined8 uStack_20;
  
  local_28._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(param_1->Size).field0_0x0;
  uStack_20._0_4_ = param_1->TargetGamma;
  uStack_20._4_1_ = param_1->bForceLinearGamma;
  uStack_20._5_1_ = param_1->PixelFormat;
  uStack_20._6_1_ = param_1->bIncludeInPreviewWindow;
  uStack_20._7_1_ = param_1->field_0xf;
  this_00 = &this->PooledSurfaceQueues;
  uVar4 = UE::MovieGraph::DefaultRenderer::GetTypeHash((FRenderTargetInitParams *)&local_28._s_0);
  iVar5 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams>
                    ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,param_1);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x28;
    pTVar7 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pTVar7 = pTVar8;
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      if ((pTVar7->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FMoviePipelineSurfaceQueue,1> *)(*pcVar2)();
        return pTVar6;
      }
      FMoviePipelineSurfaceQueue::UpdateLastUsedFrame
                ((FMoviePipelineSurfaceQueue *)pTVar7->_padding_);
      __return_storage_ptr__->Object = (FMoviePipelineSurfaceQueue *)pTVar7->_padding_;
      pTVar8 = *(TReferenceControllerBase<1> **)&pTVar7->SharedReferenceCount;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  pTVar7 = ::operator_new(0x38);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTStack_40 = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMoviePipelineSurfaceQueue___00_SharedPointerInternals__6B_
    ;
    FMoviePipelineSurfaceQueue::FMoviePipelineSurfaceQueue
              ((FMoviePipelineSurfaceQueue *)(pTVar7 + 1),
               (TIntPoint<int>)(param_1->Size).field0_0x0._s_0,param_1->PixelFormat,6,true);
    local_48 = (FMoviePipelineSurfaceQueue *)(pTVar7 + 1);
    if ((local_48 == (FMoviePipelineSurfaceQueue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMoviePipelineSurfaceQueue,1> *)(*pcVar2)();
      return pTVar6;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar7;
    pTStack_40 = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  local_30 = &local_48;
  local_38 = param_1;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_>
            ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>
              *)&stack0x00000008,(bool *)&local_38);
  __return_storage_ptr__->Object = local_48;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return __return_storage_ptr__;
}

// GetOrCreateViewRenderTarget @ 14dccf5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
UMovieGraphDefaultRenderer::GetOrCreateViewRenderTarget
          (UMovieGraphDefaultRenderer *this,FRenderTargetInitParams *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  UTextureRenderTarget2D *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStackY_408 [32];
  UTextureRenderTarget2D *local_3c8 [2];
  TIntPoint<int>_u_0 local_3b8;
  undefined8 uStack_3b0;
  FName local_3a8;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  TIntPoint<int>_u_0 local_358;
  undefined8 uStack_350;
  FName local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  TIntPoint<int>_u_0 local_300;
  undefined8 uStack_2f8;
  FName local_2f0;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  undefined1 local_2a8 [8];
  TObjectPtr<UTextureRenderTarget2D> *local_2a0;
  TIntPoint<int>_u_0 *local_298;
  UTextureRenderTarget2D **local_290;
  TIntPoint<int>_u_0 *local_288;
  TObjectPtr<UTextureRenderTarget2D> **local_280;
  TIntPoint<int>_u_0 local_278;
  undefined8 uStack_270;
  TIntPoint<int>_u_0 local_268;
  undefined8 uStack_260;
  FMovieGraphRenderDataIdentifier local_258;
  FMovieGraphRenderDataIdentifier local_210;
  undefined1 local_1c8 [128];
  undefined1 local_148 [72];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_3b8._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(param_1->Size).field0_0x0;
  uStack_3b0._0_4_ = param_1->TargetGamma;
  uStack_3b0._4_1_ = param_1->bForceLinearGamma;
  uStack_3b0._5_1_ = param_1->PixelFormat;
  uStack_3b0._6_1_ = param_1->bIncludeInPreviewWindow;
  uStack_3b0._7_1_ = param_1->field_0xf;
  local_3a8 = param_2->RootBranchName;
  puVar13 = (undefined8 *)0x0;
  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.Data.ArrayNum = 0;
  local_3a0.Data.ArrayMax = 0;
  local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.Data.ArrayNum = 0;
  local_390.Data.ArrayMax = 0;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.Data.ArrayNum = 0;
  local_370.Data.ArrayMax = 0;
  ::FString::operator=(&local_3a0,&param_2->LayerName);
  ::FString::operator=(&local_390,&param_2->RendererName);
  ::FString::operator=(&local_380,&param_2->SubResourceName);
  ::FString::operator=(&local_370,&param_2->CameraName);
  FVar2.Data = local_3a0.Data.AllocatorInstance.Data;
  lVar11 = (longlong)local_3a0.Data.ArrayNum;
  local_348 = local_3a8;
  local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Data.ArrayNum = local_3a0.Data.ArrayNum;
  local_358 = local_3b8;
  uStack_350 = uStack_3b0;
  if (local_3a0.Data.ArrayNum == 0) {
    local_340.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_340,local_3a0.Data.ArrayNum
               ,&local_340.Data.ArrayMax);
    memcpy(local_340.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
  }
  FVar2.Data = local_390.Data.AllocatorInstance.Data;
  lVar11 = (longlong)local_390.Data.ArrayNum;
  local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.Data.ArrayNum = local_390.Data.ArrayNum;
  if (local_390.Data.ArrayNum == 0) {
    local_330.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_390.Data.ArrayNum,0,(ForAnyElementType *)&local_330,local_390.Data.ArrayNum
               ,&local_330.Data.ArrayMax);
    memcpy(local_330.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
  }
  FVar2.Data = local_380.Data.AllocatorInstance.Data;
  lVar11 = (longlong)local_380.Data.ArrayNum;
  local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_320.Data.ArrayNum = local_380.Data.ArrayNum;
  if (local_380.Data.ArrayNum == 0) {
    local_320.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_380.Data.ArrayNum,0,(ForAnyElementType *)&local_320,local_380.Data.ArrayNum
               ,&local_320.Data.ArrayMax);
    memcpy(local_320.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
  }
  FVar2.Data = local_370.Data.AllocatorInstance.Data;
  lVar11 = (longlong)local_370.Data.ArrayNum;
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.Data.ArrayNum = local_370.Data.ArrayNum;
  if (local_370.Data.ArrayNum == 0) {
    local_310.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_370.Data.ArrayNum,0,(ForAnyElementType *)&local_310,local_370.Data.ArrayNum
               ,&local_310.Data.ArrayMax);
    memcpy(local_310.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
  }
  local_258.RootBranchName = local_348;
  ::FString::FString(&local_258.LayerName,&local_340);
  ::FString::FString(&local_258.RendererName,&local_330);
  ::FString::FString(&local_258.SubResourceName,&local_320);
  ::FString::FString(&local_258.CameraName,&local_310);
  uVar4 = ::GetTypeHash(&local_258);
  local_278 = local_358;
  uStack_270 = uStack_350;
  uVar5 = UE::MovieGraph::DefaultRenderer::GetTypeHash((FRenderTargetInitParams *)&local_278._s_0);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  iVar6 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                    ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
                      *)&this->PooledViewRenderTargets,
                     uVar4 + uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) ^ uVar5,
                     (FMovieGraphImagePreviewDataPoolParams *)&local_3b8._s_0);
  FVar2.Data = local_3a0.Data.AllocatorInstance.Data;
  if (iVar6 != -1) {
    lVar11 = (longlong)iVar6 * 0x68 + *(longlong *)&this->PooledViewRenderTargets;
    puVar12 = (undefined8 *)(lVar11 + 0x58);
    if (lVar11 == 0) {
      puVar12 = puVar13;
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar11 = (longlong)local_3a0.Data.ArrayNum;
      local_2f0 = local_3a8;
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e8.Data.ArrayNum = local_3a0.Data.ArrayNum;
      local_300 = local_3b8;
      uStack_2f8 = uStack_3b0;
      if (local_3a0.Data.ArrayNum == 0) {
        local_2e8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_2e8,
                   local_3a0.Data.ArrayNum,&local_2e8.Data.ArrayMax);
        memcpy(local_2e8.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
      }
      FVar2.Data = local_390.Data.AllocatorInstance.Data;
      lVar11 = (longlong)local_390.Data.ArrayNum;
      local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.Data.ArrayNum = local_390.Data.ArrayNum;
      if (local_390.Data.ArrayNum == 0) {
        local_2d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_390.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8,
                   local_390.Data.ArrayNum,&local_2d8.Data.ArrayMax);
        memcpy(local_2d8.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
      }
      FVar2.Data = local_380.Data.AllocatorInstance.Data;
      lVar11 = (longlong)local_380.Data.ArrayNum;
      local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.Data.ArrayNum = local_380.Data.ArrayNum;
      if (local_380.Data.ArrayNum == 0) {
        local_2c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_380.Data.ArrayNum,0,(ForAnyElementType *)&local_2c8,
                   local_380.Data.ArrayNum,&local_2c8.Data.ArrayMax);
        memcpy(local_2c8.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
      }
      FVar2.Data = local_370.Data.AllocatorInstance.Data;
      lVar11 = (longlong)local_370.Data.ArrayNum;
      local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Data.ArrayNum = local_370.Data.ArrayNum;
      if (local_370.Data.ArrayNum == 0) {
        local_2b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_370.Data.ArrayNum,0,(ForAnyElementType *)&local_2b8,
                   local_370.Data.ArrayNum,&local_2b8.Data.ArrayMax);
        memcpy(local_2b8.Data.AllocatorInstance.Data,FVar2.Data,lVar11 * 2);
      }
      local_210.RootBranchName = local_2f0;
      ::FString::FString(&local_210.LayerName,&local_2e8);
      ::FString::FString(&local_210.RendererName,&local_2d8);
      ::FString::FString(&local_210.SubResourceName,&local_2c8);
      ::FString::FString(&local_210.CameraName,&local_2b8);
      uVar4 = ::GetTypeHash(&local_210);
      local_268 = local_300;
      uStack_260 = uStack_2f8;
      uVar5 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                        ((FRenderTargetInitParams *)&local_268._s_0);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      iVar6 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
              ::
              FindIndexByHash<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                        ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                          *)&this->PooledViewRenderTargetStates,
                         uVar4 + uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) ^ uVar5,
                         (FMovieGraphImagePreviewDataPoolParams *)&local_3b8._s_0);
      if ((iVar6 == -1) ||
         (puVar13 = (undefined8 *)
                    ((longlong)iVar6 * 0x68 + *(longlong *)&this->PooledViewRenderTargetStates),
         puVar13 == (undefined8 *)0x0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar7 = (UTextureRenderTarget2D *)(*pcVar1)();
          return pUVar7;
        }
      }
      puVar13[0xb] = GFrameCounter;
      pUVar7 = (UTextureRenderTarget2D *)*puVar12;
      goto LAB_14dccfd3e;
    }
  }
  pUVar8 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar9);
  local_1c8._8_8_ = pUVar8;
  local_3c8[0] = (UTextureRenderTarget2D *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar10 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_3c8[0] != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3c8[0]);
  }
  *(undefined8 *)&(local_3c8[0]->ClearColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(local_3c8[0]->ClearColor).field0_0x0 + 8) = 0;
  *(float *)&local_3c8[0]->_padding_ = param_1->TargetGamma;
  UTextureRenderTarget2D::InitCustomFormat
            (local_3c8[0],(param_1->Size).field0_0x0._s_0.X,(param_1->Size).field0_0x0._s_0.Y,
             param_1->PixelFormat,param_1->bForceLinearGamma);
  pUVar7 = local_3c8[0];
  FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_148,EstimatedTotal);
  (**(code **)(pUVar7->_padding_ + 400))(pUVar7,local_148);
  FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_148);
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f0);
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 8));
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  local_298 = &local_3b8;
  local_290 = local_3c8;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>_>
            ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
              *)&this->PooledViewRenderTargets,
             (TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,TObjectPtr<UTextureRenderTarget2D>_const_&>
              *)local_2a8,(bool *)&local_298);
  local_2a0 = (TObjectPtr<UTextureRenderTarget2D> *)GFrameCounter;
  local_288 = &local_3b8;
  local_280 = &local_2a0;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>_>
            ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
              *)&this->PooledViewRenderTargetStates,
             (TPairInitializer<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams_&,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState_&&>
              *)(local_2a8 + 4),(bool *)&local_288);
  pUVar7 = local_3c8[0];
LAB_14dccfd3e:
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// GetPreviewData @ 14dcd0d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphDefaultRenderer::GetPreviewData
          (UMovieGraphDefaultRenderer *this,
          TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FScriptContainerElement *_Src;
  TIntPoint<int>_u_0 TVar2;
  code *pcVar3;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *pTVar4;
  UMovieGraphDefaultRenderer *pUVar5;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *pTVar6;
  bool bVar7;
  ulonglong uVar8;
  TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
  *pTVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  FMovieGraphImagePreviewDataPoolParams *pFVar15;
  uint uVar16;
  uint uVar17;
  TIntPoint<int>_u_0 *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *local_1b0;
  UMovieGraphDefaultRenderer *local_1a8;
  TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *local_1a0;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  FString local_160;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  uint uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar8 = 0;
  local_178 = 0;
  local_98.Elements._44_4_ = 0x80;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  puVar1 = &(this->PooledViewRenderTargets).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_1b0 = &this->PooledViewRenderTargets;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  uStack_190 = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  uStack_18c = 1;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar22 = *(uint *)&(this->PooledViewRenderTargets).field_0x28;
  uStack_17c = uStack_190;
  if (uVar22 != 0) {
    puVar21 = *(uint **)&(this->PooledViewRenderTargets).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar17 = *puVar21;
    uVar19 = uVar8;
    uVar20 = uVar8;
    uStack_190 = 0;
    local_178 = 0;
    while (uVar17 == 0) {
      iVar13 = (int)uVar19;
      local_178 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_178;
      uStack_190 = iVar13 + 1;
      uVar19 = (ulonglong)uStack_190;
      uStack_17c = uVar22;
      if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < (int)uStack_190)
      goto LAB_14dcd0e9d;
      uVar17 = puVar21[(longlong)iVar13 + 1];
    }
    uStack_18c = -uVar17 & uVar17;
    uVar19 = (ulonglong)uStack_18c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_168 = (int)lVar10;
    uStack_17c = (local_178 - 1) + local_168;
    if ((int)uVar22 < (int)uStack_17c) {
      uStack_17c = uVar22;
    }
  }
LAB_14dcd0e9d:
  uVar17 = *(uint *)&(this->PooledViewRenderTargets).field_0x28;
  iStack_170 = *(int *)&(this->PooledViewRenderTargets).field_0x8 -
               *(int *)&(this->PooledViewRenderTargets).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uStack_18c,uStack_190);
  uStack_180 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_17c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_118._28_4_ = local_a4;
  TStack_118.BaseBitIndex = local_178;
  uStack_f8 = CONCAT44(uStack_16c,iStack_170);
  local_1a8 = this;
  local_1a0 = __return_storage_ptr__;
  local_198 = local_1b0;
  local_188 = puVar1;
  local_120 = local_1b0;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || ((int)uVar22 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  pUVar5 = local_1a8;
  pTVar4 = local_1b0;
  uVar22 = *(uint *)&(this->PooledViewRenderTargets).field_0x28;
  if (uVar17 != uVar22) {
    puVar12 = *(undefined1 **)&(this->PooledViewRenderTargets).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar22;
      if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar13)
      goto LAB_14dcd0fc0;
      uVar17 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_164 = (int)lVar10;
    uVar17 = local_164 + -1 + uVar16;
    if ((int)uVar22 < (int)uVar17) {
      uVar17 = uVar22;
    }
  }
LAB_14dcd0fc0:
  while( true ) {
    pTVar6 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    if (((TStack_118.CurrentBitIndex == uVar17) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar4))
    break;
    pFVar15 = (FMovieGraphImagePreviewDataPoolParams *)
              (*(longlong *)pTVar6 + (longlong)TStack_118.CurrentBitIndex * 0x68);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_98,&local_160,(bool *)&(pFVar15->Identifier).CameraName);
    pTVar11 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                      *)&pUVar5->PooledViewRenderTargetStates,pFVar15);
    if ((pTVar11 ==
         (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    if (uVar8 < *(ulonglong *)&pTVar11->field_0x58) {
      uVar8 = *(ulonglong *)&pTVar11->field_0x58;
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  iVar13 = *(int *)&(this->PooledViewRenderTargets).field_0x28;
  iStack_148 = 0;
  local_130 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar13 != 0) {
    puVar21 = *(uint **)&(this->PooledViewRenderTargets).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar22 = *puVar21;
    while (uVar22 == 0) {
      lVar10 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iStack_148) goto LAB_14dcd10ed;
      uVar22 = puVar21[lVar10 + 1];
    }
    uStack_144 = -uVar22 & uVar22;
    uVar19 = (ulonglong)uStack_144 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_160.Data.AllocatorInstance.Data._4_4_ = (int)lVar10;
    iStack_134 = local_130 + -1 + local_160.Data.AllocatorInstance.Data._4_4_;
    if (iVar13 < iStack_134) {
      iStack_134 = iVar13;
    }
  }
LAB_14dcd10ed:
  uVar22 = *(uint *)&(pUVar5->PooledViewRenderTargets).field_0x28;
  local_150 = &pUVar5->PooledViewRenderTargets;
  uStack_12c = uStack_17c;
  iStack_128 = *(int *)&(pUVar5->PooledViewRenderTargets).field_0x8 -
               *(int *)&(pUVar5->PooledViewRenderTargets).field_0x34;
  uVar17 = uVar22 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_144,iStack_148);
  TStack_e8.CurrentBitIndex = iStack_134;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar22 >> 5;
  TStack_e8._28_4_ = uStack_17c;
  TStack_e8.BaseBitIndex = local_130;
  uStack_c8 = CONCAT44(uStack_124,iStack_128);
  local_140 = puVar1;
  local_f0 = local_150;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || (iVar13 < (int)uVar22)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  uVar16 = *(uint *)&(this->PooledViewRenderTargets).field_0x28;
  if (uVar22 != uVar16) {
    puVar12 = *(undefined1 **)&(this->PooledViewRenderTargets).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar14 * 4);
    while (uVar22 == 0) {
      lVar10 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar22 = uVar16;
      if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar14)
      goto LAB_14dcd11f1;
      uVar22 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_160.Data.ArrayNum = (int)lVar10;
    uVar22 = local_160.Data.ArrayNum + -1 + uVar17;
    if ((int)uVar16 < (int)uVar22) {
      uVar22 = uVar16;
    }
  }
LAB_14dcd11f1:
  while( true ) {
    pTVar4 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_1c7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
    }
    if (((TStack_e8.CurrentBitIndex == uVar22) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar4 == local_1b0)) break;
    pFVar15 = (FMovieGraphImagePreviewDataPoolParams *)
              (*(longlong *)pTVar4 + (longlong)TStack_e8.CurrentBitIndex * 0x68);
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = (pFVar15->Identifier).RendererName.Data.ArrayNum;
    lVar10 = (longlong)local_1b8;
    _Src = (pFVar15->Identifier).RendererName.Data.AllocatorInstance.Data;
    if (local_1b8 == 0) {
      local_1b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
      memcpy(local_1c0.Data,_Src,lVar10 * 2);
    }
    if ((pFVar15->RenderInitParams).bIncludeInPreviewWindow != false) {
      pTVar11 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                        *)&local_1a8->PooledViewRenderTargetStates,pFVar15);
      if ((pTVar11 ==
           (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
            *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FMovieGraphImagePreviewData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      pTVar9 = local_1a0;
      if (*(ulonglong *)&pTVar11->field_0x58 == uVar8) {
        iVar13 = local_1a0->ArrayNum;
        if (iVar13 == local_1a0->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&local_1a0->AllocatorInstance,&local_1a0->ArrayMax);
        }
        pTVar9->ArrayNum = iVar13 + 1;
        pTVar18 = (TIntPoint<int>_u_0 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 0x58)
        ;
        DefaultConstructItems<FMovieGraphImagePreviewData,int>(pTVar18,1);
        pTVar18[1] = *(TIntPoint<int>_u_0 *)&(pFVar15->Identifier).RootBranchName;
        ::FString::operator=((FString *)&pTVar18[2]._s_0,&(pFVar15->Identifier).LayerName);
        ::FString::operator=((FString *)&pTVar18[4]._s_0,&(pFVar15->Identifier).RendererName);
        ::FString::operator=((FString *)&pTVar18[6]._s_0,&(pFVar15->Identifier).SubResourceName);
        ::FString::operator=((FString *)&pTVar18[8]._s_0,&(pFVar15->Identifier).CameraName);
        TVar2 = pFVar15[1].RenderInitParams.Size.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2 != (TIntPoint<int>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2);
        }
        *pTVar18 = TVar2;
        *(bool *)(pTVar18 + 10) = 1 < (int)(local_98.Elements._8_4_ - local_98.Elements._52_4_);
      }
    }
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return local_1a0;
}

// GetPrivateStaticClass @ 14dcd2530

UClass * __cdecl UMovieGraphDefaultRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton,
               StaticRegisterNativesUMovieGraphDefaultRenderer,0x260,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDefaultRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultRenderer>,local_res8,
               UMovieGraphRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton;
}

// GetRenderTimeStatistics @ 14dcd35f0

FRenderTimeStatistics * __thiscall
UMovieGraphDefaultRenderer::GetRenderTimeStatistics(UMovieGraphDefaultRenderer *this,int param_1)

{
  FRenderTimeStatistics *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<int,UE::MovieGraph::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,UE::MovieGraph::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>_>
                       *)&this->RenderTimeStatistics,param_1,local_res10);
  return pFVar1;
}

// Render @ 14dcdf910

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
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultRenderer::Render
          (UMovieGraphDefaultRenderer *this,FMovieGraphTimeStepData *param_1)

{
  undefined1 *puVar1;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *pTVar2;
  int *piVar3;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *this_01;
  TMap<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *pTVar4;
  TMap<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  UMoviePipelineExecutorShot *pUVar7;
  UMoviePipelineExecutorJob *pUVar8;
  UMovieGraphTimeStepBase *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  code *pcVar12;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 TVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
  *pTVar17;
  UClass *pUVar18;
  UObject *pUVar19;
  UObject *pUVar20;
  UMovieGraphPipeline *this_02;
  FMovieGraphTimeStepData *pFVar21;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *pTVar22;
  undefined8 *puVar23;
  FDateTime FVar24;
  IConsoleVariable *pIVar25;
  ulonglong uVar26;
  FMovieGraphImagePreviewDataPoolParams *pFVar27;
  longlong lVar28;
  UMovieGraphEvaluatedConfig *pUVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  UMovieGraphEvaluatedConfig *pUVar34;
  uint uVar35;
  UMovieGraphEvaluatedConfig *pUVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 local_res8 [8];
  FMovieGraphTimeStepData *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_300 [16];
  uint uStack_2f0;
  uint uStack_2ec;
  longlong local_2e8;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *pTStack_2e0;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *local_2d8;
  char local_2d0;
  char cStack_2cf;
  longlong *local_2c8;
  undefined1 auStack_2c0 [16];
  uint uStack_2b0;
  uint uStack_2ac;
  longlong local_2a8;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
  *local_298;
  char local_290;
  char cStack_28f;
  int local_288;
  int local_284;
  UMoviePipelineExecutorJob *local_280;
  UMoviePipelineExecutorShot *local_278;
  UMovieGraphEvaluatedConfig *local_270;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_268;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_260;
  undefined8 local_258;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_250;
  undefined8 local_248;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_240;
  undefined8 local_238;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_230;
  undefined8 local_228;
  FMovieGraphTimeStepData FStack_220;
  undefined4 local_198;
  undefined4 local_194;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_190 [2];
  undefined1 local_180 [32];
  longlong local_160;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *pTStack_158;
  undefined1 local_150 [32];
  longlong local_130;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
  *pTStack_128;
  TIntPoint<int>_u_0 local_120;
  undefined8 uStack_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [136];
  
  local_res10 = param_1;
  FlushAsyncEngineSystems(this,&param_1->EvaluatedConfig);
  uVar26 = 0;
  if (param_1->bIsFirstTemporalSampleForFrame != false) {
    this_00 = &this->CameraOverscanCache;
    bVar38 = 1 < *(int *)&(this->CameraOverscanCache).field_0x48;
    if (!bVar38) {
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                      *)this_00);
    }
    puVar1 = &(this->CameraOverscanCache).field_0xc;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
    iVar15 = *(int *)&(this->CameraOverscanCache).field_0x2c;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
    if ((iVar15 < 0) || (0x80 < iVar15)) {
      *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraOverscanCache).field_0x10,0);
    }
    if (bVar38) {
      *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 1;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)this_00);
    }
  }
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId251,"MRQ_RemoveCompletedOutstandingTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xfb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
  }
  lpCriticalSection = &this->OutstandingTasksMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < (this->OutstandingTasks).ArrayNum) {
    this_01 = &this->OutstandingTasks;
    uVar37 = uVar26;
    do {
      uVar31 = (uint)uVar26;
      uVar35 = 0;
      if ((int)uVar31 < (this->OutstandingTasks).ArrayNum) {
        uVar35 = ~uVar31 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar28 = *(longlong *)((this_01->AllocatorInstance).Data + uVar37 * 8);
      if ((lVar28 == 0) || (*(char *)(lVar28 + 0xd0) != '\0')) {
        uVar35 = 0;
        if ((int)uVar31 < (this->OutstandingTasks).ArrayNum) {
          uVar35 = ~uVar31 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_01,uVar31);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_01->AllocatorInstance,(this->OutstandingTasks).ArrayNum,
                   &(this->OutstandingTasks).ArrayMax);
        uVar31 = uVar31 - 1;
        uVar37 = uVar37 - 1;
      }
      uVar26 = (ulonglong)(uVar31 + 1);
      uVar37 = uVar37 + 1;
      param_1 = local_res10;
    } while ((int)(uVar31 + 1) < (this->OutstandingTasks).ArrayNum);
  }
  pUVar34 = (UMovieGraphEvaluatedConfig *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar4 = &this->PooledSurfaceQueues;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_180,
             (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)pTVar4);
  local_2d0 = '\0';
  cStack_2cf = '\0';
  stack0xfffffffffffffd08 = local_180._16_16_;
  auStack_300._0_8_ = local_180._8_8_;
  local_2e8 = local_160;
  pTStack_2e0 = pTStack_158;
  uVar26 = local_180._24_8_ >> 0x20;
  local_2d8 = (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
               *)pTVar4;
  if (local_180._28_4_ < *(int *)(local_180._16_8_ + 0x18)) {
    do {
      lVar28 = *(longlong *)local_180._0_8_;
      if ((*(longlong *)(lVar28 + 0x10 + (longlong)(int)uVar26 * 0x28) == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar38)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar38 = FMoviePipelineSurfaceQueue::IsStale
                         (*(FMoviePipelineSurfaceQueue **)
                           (lVar28 + 0x10 + (longlong)(int)uVar26 * 0x28));
      if (bVar38) {
        lVar33 = (longlong)(int)uStack_2ec;
        lVar28 = *(longlong *)local_180._0_8_;
        if ((*(longlong *)(lVar28 + 0x10 + lVar33 * 0x28) == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar38)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FMoviePipelineSurfaceQueue::Shutdown
                  (*(FMoviePipelineSurfaceQueue **)(lVar28 + 0x10 + lVar33 * 0x28));
        TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2e0,uStack_2ec);
        local_2d0 = '\x01';
      }
      uStack_2f0 = uStack_2f0 & ~auStack_300._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_300);
      uVar26 = (ulonglong)uStack_2ec;
    } while ((int)uStack_2ec < *(int *)(auStack_300._8_8_ + 0x18));
    if ((local_2d0 != '\0') && (cStack_2cf != '\0')) {
      uVar35 = *(int *)&(local_2d8->Elements).field_0x8 - *(int *)&(local_2d8->Elements).field_0x34;
      if (uVar35 < 4) {
        iVar15 = 1;
      }
      else {
        uVar26 = (ulonglong)((uVar35 >> 1) + 7) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_198 = (undefined4)lVar28;
        iVar15 = 1 << ((byte)lVar28 & 0x1f);
      }
      if (((0 < (int)uVar35) && (local_2d8->HashSize < iVar15)) || (iVar15 < local_2d8->HashSize)) {
        local_2d8->HashSize = iVar15;
        TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_2d8);
      }
    }
  }
  pTVar5 = &this->PooledViewRenderTargets;
  TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_150,
             (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
              *)pTVar5);
  local_290 = '\0';
  cStack_28f = '\0';
  stack0xfffffffffffffd48 = local_150._16_16_;
  local_2c8 = (longlong *)local_150._0_8_;
  auStack_2c0._0_8_ = local_150._8_8_;
  local_2a8 = local_130;
  pTStack_2a0 = pTStack_128;
  uVar26 = local_150._24_8_ >> 0x20;
  uVar35 = local_150._28_4_;
  local_298 = (TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
               *)pTVar5;
  if ((int)uVar35 < *(int *)(local_150._16_8_ + 0x18)) {
    do {
      plVar11 = local_2c8;
      pTVar17 = TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                        *)&this->PooledViewRenderTargetStates,
                       (FMovieGraphImagePreviewDataPoolParams *)
                       ((longlong)(int)uVar26 * 0x68 + *local_2c8));
      if ((pTVar17 ==
           (TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>
            *)0x0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar38)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (3 < GFrameCounter - *(longlong *)&pTVar17->field_0x58) {
        pFVar27 = (FMovieGraphImagePreviewDataPoolParams *)((longlong)(int)uVar35 * 0x68 + *plVar11)
        ;
        if (*(int *)&(this->PooledViewRenderTargetStates).field_0x8 !=
            *(int *)&(this->PooledViewRenderTargetStates).field_0x34) {
          local_120._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(pFVar27->RenderInitParams).Size.field0_0x0;
          uStack_118._0_4_ = (pFVar27->RenderInitParams).TargetGamma;
          uStack_118._4_1_ = (pFVar27->RenderInitParams).bForceLinearGamma;
          uStack_118._5_1_ = (pFVar27->RenderInitParams).PixelFormat;
          uStack_118._6_1_ = (pFVar27->RenderInitParams).bIncludeInPreviewWindow;
          uStack_118._7_1_ = (pFVar27->RenderInitParams).field_0xf;
          local_110 = (pFVar27->Identifier).RootBranchName;
          ::FString::FString(&local_108,&(pFVar27->Identifier).LayerName);
          ::FString::FString(&local_f8,&(pFVar27->Identifier).RendererName);
          ::FString::FString(&local_e8,&(pFVar27->Identifier).SubResourceName);
          ::FString::FString(&local_d8,&(pFVar27->Identifier).CameraName);
          uVar31 = UE::MovieGraph::DefaultRenderer::GetTypeHash
                             ((FMovieGraphImagePreviewDataPoolParams *)&local_120._s_0);
          TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
          ::RemoveImpl<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams>
                    ((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState,0>,FDefaultSetAllocator>
                      *)&this->PooledViewRenderTargetStates,uVar31,pFVar27);
        }
        TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2a0,uVar35);
        local_290 = '\x01';
      }
      uStack_2b0 = uStack_2b0 & ~auStack_2c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2c0);
      uVar26 = (ulonglong)uStack_2ac;
      uVar35 = uStack_2ac;
    } while ((int)uStack_2ac < *(int *)(auStack_2c0._8_8_ + 0x18));
    if ((local_290 != '\0') && (cStack_28f != '\0')) {
      uVar35 = *(int *)&(local_298->Elements).field_0x8 - *(int *)&(local_298->Elements).field_0x34;
      if (uVar35 < 4) {
        iVar15 = 1;
      }
      else {
        uVar26 = (ulonglong)((uVar35 >> 1) + 7) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_194 = (undefined4)lVar28;
        iVar15 = 1 << ((byte)lVar28 & 0x1f);
      }
      if (((0 < (int)uVar35) && (local_298->HashSize < iVar15)) || (iVar15 < local_298->HashSize)) {
        local_298->HashSize = iVar15;
        TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
        ::Rehash(local_298);
      }
    }
  }
  pUVar18 = UMovieGraphPipeline::StaticClass();
  pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
  (**(code **)(*(longlong *)pUVar19 + 0x360))(pUVar19,0);
  pUVar18 = UMovieGraphPipeline::StaticClass();
  pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
  pUVar18 = UMovieGraphPipeline::StaticClass();
  pUVar20 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
  uVar35 = *(uint *)(pUVar20 + 0xb);
  uVar31 = 0;
  if ((int)uVar35 < *(int *)(pUVar19 + 8)) {
    uVar31 = ~uVar35 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar38)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar28 = *(longlong *)(*(longlong *)&pUVar19[7].field_0x20 + (longlong)(int)uVar35 * 8);
  pUVar18 = UMovieGraphPipeline::StaticClass();
  this_02 = (UMovieGraphPipeline *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
  uVar35 = this_02->CurrentShotIndex;
  pUVar36 = pUVar34;
  if ((int)uVar35 < (this_02->ActiveShotList).ArrayNum) {
    pUVar36 = (UMovieGraphEvaluatedConfig *)(ulonglong)(~uVar35 >> 0x1f);
  }
  if (((int)pUVar36 == 0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar38)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pUVar7 = *(UMoviePipelineExecutorShot **)
            ((this_02->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar35 * 8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UMoviePipelineExecutorShot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  local_268.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  local_228 = 0;
  FStack_220.OutputFrameNumber = 0;
  FStack_220.ShotOutputFrameNumber = 0;
  FStack_220.TemporalSampleIndex = 0;
  FStack_220.TemporalSampleCount = 0;
  FStack_220.SpatialSampleIndex = 0;
  FStack_220.SpatialSampleCount = 0;
  FStack_220.RootTimeCode.Hours = 0;
  FStack_220.RootTimeCode.Minutes = 0;
  FStack_220.RootTimeCode.Seconds = 0;
  FStack_220.RootTimeCode.Frames = 0;
  local_260.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  local_258 = 0;
  local_250.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  local_248 = 0;
  local_240.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  local_238 = 0;
  local_230.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  FStack_220.RenderedFrameNumber = 0;
  FStack_220.FrameDeltaTime = 0.0;
  FStack_220.WorldTimeDilation = 0.0;
  FStack_220.bHasRelativeTimeBeenUsed = false;
  FStack_220.WorldSeconds = 0.0;
  FStack_220.MotionBlurFraction = 0.0;
  FStack_220.FrameRate.Numerator = 0;
  FStack_220.FrameRate.Denominator = 0;
  FStack_220.bIsFirstTemporalSampleForFrame = false;
  FStack_220.bIsLastTemporalSampleForFrame = false;
  FStack_220.bDiscardOutput = false;
  FStack_220.bRequiresAccumulator = false;
  FStack_220.EvaluatedConfig.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
  FStack_220.RootTimeCode.Subframe = 0.0;
  FStack_220.RootTimeCode.bDropFrameFormat = false;
  FStack_220.RootFrameNumber.Value = 0;
  FStack_220.ShotTimeCode.Hours = 0;
  FStack_220.ShotTimeCode.Minutes = 0;
  FStack_220.ShotTimeCode.Seconds = 0;
  FStack_220.ShotTimeCode.Frames = 0;
  FStack_220.ShotTimeCode.Subframe = 0.0;
  FStack_220.ShotTimeCode.bDropFrameFormat = false;
  FStack_220.ShotFrameNumber.Value = 0;
  local_288 = this_02->CurrentShotIndex;
  local_284 = (this_02->ActiveShotList).ArrayNum;
  pUVar8 = (this_02->CurrentJobDuplicate).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  local_280 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_278 = pUVar7;
  local_270 = (UMovieGraphEvaluatedConfig *)UMovieGraphPipeline::GetRootGraphForShot(this_02,pUVar7)
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  pUVar9 = (this_02->GraphTimeStepInstance).field0_0x0.DebugPtr;
  pFVar21 = (FMovieGraphTimeStepData *)(**(code **)(*(longlong *)pUVar9 + 0x2c8))(pUVar9,local_c8);
  FMovieGraphTimeStepData::operator=(&FStack_220,pFVar21);
  if ((param_1->bIsFirstTemporalSampleForFrame != false) && (*(char *)(lVar28 + 0xcc) == '\x03')) {
    pUVar18 = UMovieGraphPipeline::StaticClass();
    pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
    pTVar10 = *(TReferenceControllerBase<1> **)&pUVar19[0xc].field_0x8;
    plVar11 = *(longlong **)(pUVar19 + 0xc);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar22 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)
              (**(code **)(*plVar11 + 8))(plVar11,param_1->OutputFrameNumber);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    *(int *)(pTVar22 + 1) = local_288;
    *(int *)((longlong)pTVar22 + 0xc) = local_284;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_280 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_280);
    }
    pTVar22[2].DebugPtr = (UMovieGraphEvaluatedConfig *)local_280;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_278 != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_278);
    }
    pTVar22[3].DebugPtr = (UMovieGraphEvaluatedConfig *)local_278;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_270 != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_270);
    }
    TVar13 = local_260;
    pTVar22[4].DebugPtr = local_270;
    pTVar2 = pTVar22 + 6;
    pTVar22[5] = local_268;
    if (pTVar2 != &local_260) {
      iVar15 = (int)local_258;
      lVar28 = (longlong)(int)local_258;
      piVar3 = (int *)((longlong)pTVar22 + 0x3c);
      *(int *)(pTVar22 + 7) = (int)local_258;
      if (((int)local_258 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_258,*piVar3,(ForAnyElementType *)&pTVar2->ObjectPtr,(int)local_258
                   ,piVar3);
        if (iVar15 != 0) {
          memcpy((FScriptContainerElement *)pTVar2->DebugPtr,TVar13.DebugPtr,lVar28 * 2);
        }
      }
    }
    TVar13 = local_250;
    pTVar2 = pTVar22 + 8;
    if (pTVar2 != &local_250) {
      iVar15 = (int)local_248;
      lVar28 = (longlong)(int)local_248;
      piVar3 = (int *)((longlong)pTVar22 + 0x4c);
      *(int *)(pTVar22 + 9) = (int)local_248;
      if (((int)local_248 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_248,*piVar3,(ForAnyElementType *)&pTVar2->ObjectPtr,(int)local_248
                   ,piVar3);
        if (iVar15 != 0) {
          memcpy((FScriptContainerElement *)pTVar2->DebugPtr,TVar13.DebugPtr,lVar28 * 2);
        }
      }
    }
    TVar13 = local_240;
    pTVar2 = pTVar22 + 10;
    if (pTVar2 != &local_240) {
      iVar15 = (int)local_238;
      lVar28 = (longlong)(int)local_238;
      piVar3 = (int *)((longlong)pTVar22 + 0x5c);
      *(int *)(pTVar22 + 0xb) = (int)local_238;
      if (((int)local_238 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_238,*piVar3,(ForAnyElementType *)&pTVar2->ObjectPtr,(int)local_238
                   ,piVar3);
        if (iVar15 != 0) {
          memcpy((FScriptContainerElement *)pTVar2->DebugPtr,TVar13.DebugPtr,lVar28 * 2);
        }
      }
    }
    TVar13 = local_230;
    pTVar2 = pTVar22 + 0xc;
    if (pTVar2 != &local_230) {
      iVar15 = (int)local_228;
      lVar28 = (longlong)(int)local_228;
      piVar3 = (int *)((longlong)pTVar22 + 0x6c);
      *(int *)(pTVar22 + 0xd) = (int)local_228;
      if (((int)local_228 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_228,*piVar3,(ForAnyElementType *)&pTVar2->ObjectPtr,(int)local_228
                   ,piVar3);
        if (iVar15 != 0) {
          memcpy((FScriptContainerElement *)pTVar2->DebugPtr,TVar13.DebugPtr,lVar28 * 2);
        }
      }
    }
    FMovieGraphTimeStepData::operator=
              ((FMovieGraphTimeStepData *)&pTVar22[0xe].ObjectPtr,&FStack_220);
    pUVar36 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
    pUVar29 = pUVar34;
    if (pUVar36 != (UMovieGraphEvaluatedConfig *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar36);
      pUVar29 = pUVar36;
    }
    if (pTVar22 == local_190) {
      if (pUVar29 != (UMovieGraphEvaluatedConfig *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar29);
      }
    }
    else {
      if (pTVar22->DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pTVar22->DebugPtr);
      }
      pTVar22->DebugPtr = pUVar29;
    }
    pFVar30 = (this->RenderPassesInUse).AllocatorInstance.Data;
    iVar15 = (this->RenderPassesInUse).ArrayNum;
    pFVar6 = pFVar30 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->RenderPassesInUse).ArrayNum != iVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphRenderPassNode>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar30 == pFVar6) break;
      (**(code **)(**(longlong **)pFVar30 + 0x3b0))
                (*(longlong **)pFVar30,(param_1->EvaluatedConfig).field0_0x0.DebugPtr,pTVar22 + 0x1e
                );
      pFVar30 = pFVar30 + 8;
    }
    puVar23 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d0))(this);
    if (puVar23 == (undefined8 *)0x0) {
      bVar38 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7835893065314206023>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
                          ,0x147,"TimeStats");
      if (bVar38) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      FVar24 = FDateTime::UtcNow();
      *puVar23 = *(undefined8 *)FVar24.Ticks;
    }
  }
  this->bHasRenderedFirstViewThisFrame = false;
  pFVar30 = (this->RenderPassesInUse).AllocatorInstance.Data;
  iVar15 = (this->RenderPassesInUse).ArrayNum;
  pFVar6 = pFVar30 + (longlong)iVar15 * 8;
  while( true ) {
    if ((this->RenderPassesInUse).ArrayNum != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphRenderPassNode>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    iVar32 = (int)pUVar34;
    if (pFVar30 == pFVar6) break;
    iVar16 = (**(code **)(**(longlong **)pFVar30 + 0x3b8))();
    pUVar34 = (UMovieGraphEvaluatedConfig *)(ulonglong)(uint)(iVar32 + iVar16);
    pFVar30 = pFVar30 + 8;
  }
  if (1 < iVar32) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar38)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar25 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.HairStrands.Strands.MotionVectorCheckViewID"
                         ,1);
    if (pIVar25 != (IConsoleVariable *)0x0) {
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar25,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
  }
  pFVar30 = (this->RenderPassesInUse).AllocatorInstance.Data;
  iVar15 = (this->RenderPassesInUse).ArrayNum;
  pFVar6 = pFVar30 + (longlong)iVar15 * 8;
  while( true ) {
    if ((this->RenderPassesInUse).ArrayNum != iVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphRenderPassNode>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar30 == pFVar6) break;
    (**(code **)(**(longlong **)pFVar30 + 0x3a8))(*(longlong **)pFVar30,&local_288,param_1);
    pFVar30 = pFVar30 + 8;
  }
  if (1 < iVar32) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar38)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar25 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.HairStrands.Strands.MotionVectorCheckViewID"
                         ,1);
    if (pIVar25 != (IConsoleVariable *)0x0) {
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar25,1,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
  }
  pUVar18 = UMovieGraphPipeline::StaticClass();
  pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
  (**(code **)(*(longlong *)pUVar19 + 0x360))(pUVar19,1);
  if (local_230.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
    FMemory::Free(local_230.DebugPtr);
  }
  if (local_240.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
    FMemory::Free(local_240.DebugPtr);
  }
  if (local_250.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
    FMemory::Free(local_250.DebugPtr);
  }
  if (local_260.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
    FMemory::Free(local_260.DebugPtr);
  }
  return;
}

// StaticRegisterNativesUMovieGraphDefaultRenderer @ 14dce6500

void __cdecl UMovieGraphDefaultRenderer::StaticRegisterNativesUMovieGraphDefaultRenderer(void)

{
  return;
}

// TeardownRenderingPipelineForShot @ 14dce6e10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultRenderer::TeardownRenderingPipelineForShot
          (UMovieGraphDefaultRenderer *this,UMoviePipelineExecutorShot *param_1)

{
  int *piVar1;
  TMap<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *this_00;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FMoviePipelineSurfaceQueue *this_01;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId172,"MRQ_TeardownRenderingPipeline",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
  }
  if (CpuChannel->Enabled < 0) {
    FlushRenderingCommands();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId176,"MRQ_WaitForRenderWorkFinished",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xb0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId176);
    FlushRenderingCommands();
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"MRQ_WaitForGPUReadbackFinished",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  this_00 = &this->PooledSurfaceQueues;
  iVar13 = 0;
  iVar5 = *(int *)&(this->PooledSurfaceQueues).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PooledSurfaceQueues).field_0x10;
  iVar15 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->PooledSurfaceQueues).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_60.Array;
    }
    uVar18 = *puVar16;
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dce6f90;
      uVar18 = puVar16[lVar11 + 1];
    }
    uVar9 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar15 + -1 + (int)lVar11;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14dce6f90:
  puVar17 = &(this->PooledSurfaceQueues).field_0x10;
  uVar18 = *(uint *)&(this->PooledSurfaceQueues).field_0x28;
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar9,iVar13);
  uVar9 = uVar18 & 0xffffffe0;
  iVar13 = (int)uVar18 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PooledSurfaceQueues).field_0x8 -
                       *(int *)&(this->PooledSurfaceQueues).field_0x34);
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(this->PooledSurfaceQueues).field_0x28;
  if (uVar18 != uVar6) {
    puVar14 = *(undefined1 **)&(this->PooledSurfaceQueues).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dce70b0;
      uVar18 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar18 = (int)lVar11 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14dce70b0:
  while( true ) {
    if (*(int *)&(this->PooledSurfaceQueues).field_0x8 -
        *(int *)&(this->PooledSurfaceQueues).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar18) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) break;
    this_01 = *(FMoviePipelineSurfaceQueue **)
               (*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28
               );
    if (this_01 != (FMoviePipelineSurfaceQueue *)0x0) {
      FMoviePipelineSurfaceQueue::Shutdown(this_01);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId195,"MRQ_WaitForAccumulationTasksFinished",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xc3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId195);
  }
  pTVar2 = &this->OutstandingTasks;
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (pTVar2,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(pTVar2->AllocatorInstance).Data,(this->OutstandingTasks).ArrayNum);
  piVar1 = &(this->OutstandingTasks).ArrayMax;
  (this->OutstandingTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"MRQ_TeardownRenderPasses",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  pFVar12 = (this->RenderPassesInUse).AllocatorInstance.Data;
  iVar5 = (this->RenderPassesInUse).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->RenderPassesInUse).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphRenderPassNode>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar12 + 0x3a0))();
    pFVar12 = pFVar12 + 8;
  }
  (this->RenderPassesInUse).ArrayNum = 0;
  if ((this->RenderPassesInUse).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RenderPassesInUse).AllocatorInstance,0,
               &(this->RenderPassesInUse).ArrayMax);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
             *)&this->PooledViewRenderTargets);
    TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
             *)&this->PooledAccumulators);
    TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
             *)this_00);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId215,"MRQ_ResetPooledData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphDefaultRenderer.cpp"
               ,0xd7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId215);
    TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>,0>,FDefaultSetAllocator>
             *)&this->PooledViewRenderTargets);
    TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
             *)&this->PooledAccumulators);
    TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
             *)this_00);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WarnAboutAnimatedOverscan @ 14dcecf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultRenderer::WarnAboutAnimatedOverscan
          (UMovieGraphDefaultRenderer *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  
  if (this->bHasWarnedAboutAnimatedOverscan == false) {
    pUVar4 = UMovieGraphPipeline::StaticClass();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    pUVar4 = UMovieGraphPipeline::StaticClass();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    uVar3 = 0;
    if ((int)*(uint *)(pUVar6 + 0xb) < *(int *)(pUVar5 + 8)) {
      uVar3 = ~*(uint *)(pUVar6 + 0xb) >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    this->bHasWarnedAboutAnimatedOverscan = true;
  }
  return;
}

// __VTableCtorCaller @ 14dcee7f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieGraphDefaultRenderer::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UMovieGraphDefaultRenderer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x24 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined4 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x24 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[0xb].field_0x18,4000);
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xe) = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xe].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xe].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xe].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 0xf) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

