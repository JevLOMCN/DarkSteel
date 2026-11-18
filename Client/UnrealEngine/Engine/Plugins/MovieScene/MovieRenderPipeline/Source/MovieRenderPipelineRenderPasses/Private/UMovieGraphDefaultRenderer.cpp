// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// GetOrCreateAccumulatorPool<FImageOverlappedAccumulator> @ 14ddc1970

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> * __thiscall
UMovieGraphDefaultRenderer::GetOrCreateAccumulatorPool<FImageOverlappedAccumulator>
          (UMovieGraphDefaultRenderer *this,
          TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>
          *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> *pTVar9;
  FName *pFVar10;
  undefined1 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  TReferenceControllerBase<1> *local_res8;
  FName local_res18;
  FName local_res20;
  FSurfaceAccumulatorPool *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FSurfaceAccumulatorPool *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FName *local_68;
  FSurfaceAccumulatorPool **local_60;
  FString local_58 [2];
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  uVar13 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
       `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                    ::__l2::Name,"ImageOverlappedAccumulator");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
          Name;
  uVar7 = ::GetTypeHash(`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                        ::__l2::Name.ComparisonIndex.Value);
  if (*(int *)&(this->PooledAccumulators).field_0x8 !=
      *(int *)&(this->PooledAccumulators).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PooledAccumulators).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PooledAccumulators).field_0x38;
    }
    uVar7 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->PooledAccumulators).field_0x48 - 1U & FVar5.Number + uVar7) *
                     4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar10 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this->PooledAccumulators);
        if (*pFVar10 == FVar5) {
          pTVar8 = (TReferenceControllerBase<1> *)(pFVar10 + 1);
          if (pFVar10 == (FName *)0x0) {
            pTVar8 = pTVar12;
          }
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            __return_storage_ptr__->Object = *(FSurfaceAccumulatorPool **)&pTVar8->_padding_;
            pTVar12 = *(TReferenceControllerBase<1> **)&pTVar8->SharedReferenceCount;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
            if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar7 = pFVar10[3].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  pTVar8 = ::operator_new(0x58);
  local_res8 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSurfaceAccumulatorPool_DefaultRenderer_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar8 + 3),4000);
    uVar13 = (ulonglong)_tls_index;
    pTVar12 = pTVar8;
  }
  local_78 = (FSurfaceAccumulatorPool *)(pTVar12 + 1);
  pTStack_70 = pTVar12;
  if (local_78 == (FSurfaceAccumulatorPool *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> *)(*pcVar4)()
      ;
      return pTVar9;
    }
  }
  else if (((local_78->_padding_ == 0) || (*(longlong *)&pTVar12[1].SharedReferenceCount == 0)) ||
          (*(int *)(*(longlong *)&pTVar12[1].SharedReferenceCount + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78->_padding_ = (longlong)local_78;
    if (pTVar12 != *(TReferenceControllerBase<1> **)&pTVar12[1].SharedReferenceCount) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar12[1].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12[1].SharedReferenceCount = pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  local_88 = local_78;
  pTStack_80 = pTStack_70;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
         `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                      ::__l2::Name,"ImageOverlappedAccumulator");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res18 = `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::
                  __l2::Name;
    ::FName::ToString(&local_res18,local_58);
    UE::Logging::Private::BasicLog<5>
              (&`public:_class_TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>___cdecl_UMovieGraphDefaultRenderer::GetOrCreateAccumulatorPool<FImageOverlappedAccumulator>(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
       `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                    ::__l2::Name,"ImageOverlappedAccumulator");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res20 = `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::
                __l2::Name;
  local_68 = &local_res20;
  local_60 = &local_88;
  TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&&,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_&>_>
            ((TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
              *)&this->PooledAccumulators,
             (TPairInitializer<FName_&&,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_&>
              *)&local_res8,(bool *)&local_68);
  __return_storage_ptr__->Object = local_88;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_80;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  local_88 = (FSurfaceAccumulatorPool *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

