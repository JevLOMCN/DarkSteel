// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 4

// GetSize @ 14f125ef0

TIntPoint<int> __thiscall FMovieViewport::GetSize(FMovieViewport *this)

{
  FSlateTexture2DRHIRef *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TIntPoint<int>_u_0 TVar6;
  TIntPoint<int>_u_0 in_RDX;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->SlateTexture).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f125f26;
      }
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar1 = (this->SlateTexture).Object;
    if (pFVar1 != (FSlateTexture2DRHIRef *)0x0) {
      uVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
      uVar5 = (**(code **)pFVar1->_padding_)(pFVar1);
      TVar6._s_0.Y = uVar4;
      TVar6._s_0.X = uVar5;
      goto LAB_14f125f2a;
    }
  }
LAB_14f125f26:
  TVar6 = (this->DefaultSize).field0_0x0;
LAB_14f125f2a:
  *(TIntPoint<int>_u_0 *)in_RDX = TVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (TIntPoint<int>)in_RDX;
}

// GetViewportRenderTargetTexture @ 14f126060

FSlateShaderResource * __thiscall
FMovieViewport::GetViewportRenderTargetTexture(FMovieViewport *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateTexture2DRHIRef *pFVar4;
  FSlateTexture2DRHIRef *pFVar5;
  FSlateTexture2DRHIRef *pFVar6;
  bool bVar7;
  uint uStackX_c;
  
  pFVar6 = (FSlateTexture2DRHIRef *)0x0;
  if ((((this->SlateTexture).Object == (FSlateTexture2DRHIRef *)0x0) ||
      (pTVar1 = (this->SlateTexture).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pFVar4 = (FSlateTexture2DRHIRef *)((ulonglong)uStackX_c << 0x20);
    pFVar5 = (FSlateTexture2DRHIRef *)0x0;
  }
  else {
    pFVar4 = (FSlateTexture2DRHIRef *)(this->SlateTexture).WeakReferenceCount.ReferenceController;
    pFVar5 = pFVar4;
    if (pFVar4 == (FSlateTexture2DRHIRef *)0x0) {
LAB_14f1260b1:
      pFVar4 = pFVar5;
      pFVar5 = pFVar6;
      pFVar6 = (FSlateTexture2DRHIRef *)&DAT_00000001;
    }
    else {
      aVar2 = *(atomic<int> *)&pFVar4->_padding_;
      do {
        pFVar5 = pFVar6;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14f1260b1;
        LOCK();
        aVar3 = *(atomic<int> *)&pFVar4->_padding_;
        bVar7 = aVar2 == aVar3;
        if (bVar7) {
          *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar7);
      pFVar5 = (this->SlateTexture).Object;
      pFVar6 = (FSlateTexture2DRHIRef *)&DAT_00000001;
    }
  }
  if (pFVar6 != (FSlateTexture2DRHIRef *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  return (FSlateShaderResource *)pFVar5;
}

// RequiresVsync @ 14f126800

bool __thiscall FMovieViewport::RequiresVsync(FMovieViewport *this)

{
  return false;
}

// SetTexture @ 14f1269c0

void __thiscall
FMovieViewport::SetTexture(FMovieViewport *this,TWeakPtr<FSlateTexture2DRHIRef,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSlateTexture2DRHIRef *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pFVar3 = param_1->Object;
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->SlateTexture).WeakReferenceCount.ReferenceController;
  (this->SlateTexture).Object = pFVar3;
  (this->SlateTexture).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

