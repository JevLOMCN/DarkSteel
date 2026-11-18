// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~FMovieGraphPanoSampleState @ 14ddcb1c0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoSampleState::~FMovieGraphPanoSampleState
          (FMovieGraphPanoSampleState *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar3 = (longlong *)this->_padding_;
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
  this->_padding_ = (longlong)&___7IImagePixelDataPayload__6B_;
  return;
}

// Copy @ 14ddd9740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoSampleState::Copy
          (FMovieGraphPanoSampleState *this,
          TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *__return_storage_ptr__)

{
  FMovieGraphSampleState *pFVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  undefined8 uVar9;
  double dVar10;
  atomic<int> *paVar11;
  atomic<int> *paVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  atomic<int> *paVar15;
  TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *pTVar16;
  longlong lVar17;
  atomic<int> *paVar18;
  
  pTVar14 = ::operator_new(0x330);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieGraphPanoSampleState_Rendering_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    FMovieGraphSampleState::FMovieGraphSampleState
              ((FMovieGraphSampleState *)(pTVar14 + 1),(FMovieGraphSampleState *)this);
    ((FMovieGraphSampleState *)(pTVar14 + 1))->_padding_ =
         (longlong)&___7FMovieGraphPanoSampleState_Rendering_MovieGraph_UE__6B_;
    lVar17 = 2;
    paVar11 = (atomic<int> *)&this->Pane;
    paVar12 = &pTVar14[0x21].SharedReferenceCount;
    do {
      paVar18 = paVar12;
      paVar15 = paVar11;
      uVar9 = *(undefined8 *)(paVar15 + 2);
      *(undefined8 *)paVar18 = *(undefined8 *)paVar15;
      *(undefined8 *)(paVar18 + 2) = uVar9;
      uVar9 = *(undefined8 *)(paVar15 + 6);
      *(undefined8 *)(paVar18 + 4) = *(undefined8 *)(paVar15 + 4);
      *(undefined8 *)(paVar18 + 6) = uVar9;
      uVar9 = *(undefined8 *)(paVar15 + 10);
      *(undefined8 *)(paVar18 + 8) = *(undefined8 *)(paVar15 + 8);
      *(undefined8 *)(paVar18 + 10) = uVar9;
      dVar10 = *(double *)(paVar15 + 0xe);
      *(undefined8 *)(paVar18 + 0xc) = *(undefined8 *)(paVar15 + 0xc);
      *(double *)(paVar18 + 0xe) = dVar10;
      uVar9 = *(undefined8 *)(paVar15 + 0x12);
      *(double *)(paVar18 + 0x10) = *(double *)(paVar15 + 0x10);
      *(undefined8 *)(paVar18 + 0x12) = uVar9;
      dVar10 = *(double *)(paVar15 + 0x16);
      *(double *)(paVar18 + 0x14) = *(double *)(paVar15 + 0x14);
      *(double *)(paVar18 + 0x16) = dVar10;
      uVar9 = *(undefined8 *)(paVar15 + 0x1a);
      *(undefined8 *)(paVar18 + 0x18) = *(undefined8 *)(paVar15 + 0x18);
      *(undefined8 *)(paVar18 + 0x1a) = uVar9;
      uVar9 = *(undefined8 *)(paVar15 + 0x1e);
      *(undefined8 *)(paVar18 + 0x1c) = *(undefined8 *)(paVar15 + 0x1c);
      *(undefined8 *)(paVar18 + 0x1e) = uVar9;
      lVar17 = lVar17 + -1;
      paVar11 = paVar15 + 0x20;
      paVar12 = paVar18 + 0x20;
    } while (lVar17 != 0);
    aVar6 = paVar15[0x21];
    aVar7 = paVar15[0x22];
    aVar8 = paVar15[0x23];
    paVar18[0x20] = paVar15[0x20];
    paVar18[0x21] = aVar6;
    paVar18[0x22] = aVar7;
    paVar18[0x23] = aVar8;
    *(undefined8 *)(paVar18 + 0x24) = *(undefined8 *)(paVar15 + 0x24);
  }
  pFVar1 = (FMovieGraphSampleState *)(pTVar14 + 1);
  if (pFVar1 == (FMovieGraphSampleState *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *)(*pcVar5)();
      return pTVar16;
    }
  }
  else {
    lVar17._0_4_ = pTVar14[1].SharedReferenceCount;
    lVar17._4_4_ = pTVar14[1].WeakReferenceCount;
    if (((lVar17 == 0) || (pTVar14[2]._padding_ == 0)) || (*(int *)(pTVar14[2]._padding_ + 8) < 1))
    {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FMovieGraphSampleState **)&pTVar14[1].SharedReferenceCount = pFVar1;
      if (pTVar14 != (TReferenceControllerBase<1> *)pTVar14[2]._padding_) {
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = (longlong *)pTVar14[2]._padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        pTVar14[2]._padding_ = (longlong)pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

