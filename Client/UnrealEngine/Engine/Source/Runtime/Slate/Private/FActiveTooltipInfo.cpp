// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~FActiveTooltipInfo @ 1426ffaf0

void __thiscall FSlateUser::FActiveTooltipInfo::~FActiveTooltipInfo(FActiveTooltipInfo *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->SourceWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->TooltipVisualizer).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->Tooltip).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// Reset @ 14277e300

void __thiscall FSlateUser::FActiveTooltipInfo::Reset(FActiveTooltipInfo *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  
  pSVar6 = (SWidget *)0x0;
  if ((((this->SourceWidget).Object != (SWidget *)0x0) &&
      (pTVar3 = (this->SourceWidget).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    pSVar9 = (SWidget *)(this->SourceWidget).WeakReferenceCount.ReferenceController;
    pSVar7 = pSVar6;
    pSVar8 = pSVar9;
    if (pSVar9 == (SWidget *)0x0) {
LAB_14277e356:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar9 = pSVar8;
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      aVar2 = *(atomic<int> *)&pSVar9->_padding_;
      do {
        pSVar7 = (SWidget *)0x0;
        pSVar8 = pSVar6;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14277e356;
        LOCK();
        aVar5 = *(atomic<int> *)&pSVar9->_padding_;
        bVar10 = aVar2 == aVar5;
        if (bVar10) {
          *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar10);
      pSVar7 = (this->SourceWidget).Object;
      pSVar8 = pSVar9;
      if (pSVar7 == (SWidget *)0x0) goto LAB_14277e356;
    }
    (**(code **)(pSVar7->_padding_ + 0x1c0))(pSVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
  }
  if ((((this->Tooltip).Object == (IToolTip *)0x0) ||
      (pTVar3 = (this->Tooltip).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1))
  goto LAB_14277e40c;
  pSVar9 = (SWidget *)(this->Tooltip).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar9;
  if (pSVar9 == (SWidget *)0x0) {
LAB_14277e3d5:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar9 = pSVar7;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar7 = pSVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14277e3d5;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pSVar6 = (SWidget *)(this->Tooltip).Object;
    pSVar7 = pSVar9;
    if (pSVar6 == (SWidget *)0x0) goto LAB_14277e3d5;
  }
  (**(code **)(pSVar6->_padding_ + 0x38))(pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
LAB_14277e40c:
  if (this != (FActiveTooltipInfo *)&stack0xffffffffffffffc8) {
    pTVar3 = (this->Tooltip).WeakReferenceCount.ReferenceController;
    (this->Tooltip).Object = (IToolTip *)0x0;
    (this->Tooltip).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (&this->SourceWidget != (TWeakPtr<SWidget,1> *)&stack0xffffffffffffffd8) {
    pTVar3 = (this->SourceWidget).WeakReferenceCount.ReferenceController;
    (this->SourceWidget).Object = (SWidget *)0x0;
    (this->SourceWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (&this->TooltipVisualizer != (TWeakPtr<SWidget,1> *)&stack0xffffffffffffffe8) {
    pTVar3 = (this->TooltipVisualizer).WeakReferenceCount.ReferenceController;
    (this->TooltipVisualizer).Object = (SWidget *)0x0;
    (this->TooltipVisualizer).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  this->OffsetDirection = Undetermined;
  return;
}

