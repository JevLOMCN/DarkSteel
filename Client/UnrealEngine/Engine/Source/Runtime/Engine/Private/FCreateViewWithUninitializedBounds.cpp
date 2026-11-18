// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FCreateViewWithUninitializedBounds @ 14877eb20

void __thiscall
RenderAssetInstanceTask::FCreateViewWithUninitializedBounds::~FCreateViewWithUninitializedBounds
          (FCreateViewWithUninitializedBounds *this)

{
  longlong *plVar1;
  FRenderAssetInstanceView *pFVar2;
  FRenderAssetInstanceState *pFVar3;
  void *pvVar4;
  
  pFVar2 = (this->ViewToRelease).Reference;
  if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->State).Reference;
  if (pFVar3 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar2 = (this->View).Reference;
  if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  pvVar4 = *(void **)&(this->OnWorkDoneDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator() @ 148810ee0

void __thiscall
RenderAssetInstanceTask::FCreateViewWithUninitializedBounds::operator()
          (FCreateViewWithUninitializedBounds *this,bool param_1)

{
  TRefCountPtr<FRenderAssetInstanceView> *pTVar1;
  longlong *plVar2;
  FRenderAssetInstanceState *pFVar3;
  FRenderAssetInstanceView *pFVar4;
  FRenderAssetInstanceView *pFVar5;
  undefined8 *puVar6;
  longlong local_18 [2];
  
  pFVar3 = (this->State).Reference;
  pFVar5 = ::operator_new(0x130);
  if (pFVar5 == (FRenderAssetInstanceView *)0x0) {
    pFVar5 = (FRenderAssetInstanceView *)0x0;
  }
  else {
    pFVar5 = FRenderAssetInstanceView::FRenderAssetInstanceView(pFVar5);
    if (pFVar5 != (FRenderAssetInstanceView *)0x0) {
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
    }
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x150,0x10,(int)pFVar3->_padding_,&(pFVar5->Bounds4).AllocatorInstance,
             &(pFVar5->Bounds4).ArrayNum,&(pFVar5->Bounds4).ArrayMax);
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->Elements,
             (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *)
             &pFVar3->_padding_);
  TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
  ::operator=(&pFVar5->RenderAssetMap,
              (TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
               *)&pFVar3->_padding_);
  pFVar5->MaxTexelFactor = *(float *)&pFVar3->_padding_;
  pTVar1 = &this->View;
  if (pTVar1 == (TRefCountPtr<FRenderAssetInstanceView> *)local_18) {
    plVar2 = &pFVar5->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) goto LAB_148810fb2;
    puVar6 = (undefined8 *)pFVar5->_padding_;
  }
  else {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = pFVar5;
    if (pFVar4 == (FRenderAssetInstanceView *)0x0) goto LAB_148810fb2;
    plVar2 = &pFVar4->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) goto LAB_148810fb2;
    puVar6 = (undefined8 *)pFVar4->_padding_;
    pFVar5 = pFVar4;
  }
  (*(code *)*puVar6)(pFVar5,1);
LAB_148810fb2:
  pFVar5 = (this->ViewToRelease).Reference;
  if (pFVar5 != (FRenderAssetInstanceView *)0x0) {
    (this->ViewToRelease).Reference = (FRenderAssetInstanceView *)0x0;
    plVar2 = &pFVar5->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148810fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar5->_padding_)(pFVar5,1);
      return;
    }
  }
  return;
}

// Sync @ 14885b240

void __thiscall
RenderAssetInstanceTask::FCreateViewWithUninitializedBounds::Sync
          (FCreateViewWithUninitializedBounds *this)

{
  FRenderAssetInstanceView *pFVar1;
  FRenderAssetInstanceState *pFVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  pFVar1 = (this->View).Reference;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&(this->OnWorkDoneDelegate).field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&(this->OnWorkDoneDelegate).field_0x8;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,pFVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar1 = (this->View).Reference;
  if (pFVar1 != (FRenderAssetInstanceView *)0x0) {
    (this->View).Reference = (FRenderAssetInstanceView *)0x0;
    plVar3 = &pFVar1->_padding_;
    *(int *)plVar3 = (int)*plVar3 + -1;
    if ((int)*plVar3 == 0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  pFVar2 = (this->State).Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    (this->State).Reference = (FRenderAssetInstanceState *)0x0;
    plVar3 = &pFVar2->_padding_;
    *(int *)plVar3 = (int)*plVar3 + -1;
    if ((int)*plVar3 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar1 = (this->ViewToRelease).Reference;
  if (pFVar1 != (FRenderAssetInstanceView *)0x0) {
    (this->ViewToRelease).Reference = (FRenderAssetInstanceView *)0x0;
    plVar3 = &pFVar1->_padding_;
    *(int *)plVar3 = (int)*plVar3 + -1;
    if ((int)*plVar3 == 0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return;
}

