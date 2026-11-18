// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> @ 14acbfa50

TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  EWidgetUpdateFlags EVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  SEasyParticle *pSVar13;
  EWidgetUpdateFlags EVar14;
  TReferenceControllerBase<1> *pTVar15;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SEasyParticle *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = ::operator_new(0x268);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pSVar13 = (SEasyParticle *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSEasyParticle___00_SharedPointerInternals__6B_;
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar10 + 1));
    *(undefined2 *)&pTVar10[0x23]._padding_ = 0;
    *(undefined ***)&pTVar10[0x22].SharedReferenceCount = &___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&pTVar10[0x22].SharedReferenceCount);
    pTVar10[1]._padding_ = (longlong)&SEasyParticle::_vftable__for__SLeafWidget__;
    *(undefined ***)&pTVar10[0x22].SharedReferenceCount = &SEasyParticle::_vftable__for__FGCObject__
    ;
    pTVar10[0x24]._padding_ = 0;
    pTVar10[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x25]._padding_ = 0;
    pTVar10[0x25].SharedReferenceCount = (atomic<int>)0x0;
    EVar5 = *(EWidgetUpdateFlags *)&pTVar10[4].SharedReferenceCount;
    EVar14 = EVar5 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pTVar10[4].SharedReferenceCount = EVar14;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pTVar10[2].SharedReferenceCount,(SWidget *)(pTVar10 + 1),EVar5
               ,EVar14);
    *(byte *)&pTVar10[4]._padding_ = (byte)pTVar10[4]._padding_ & 0xfe;
    pSVar13 = (SEasyParticle *)(pTVar10 + 1);
    pTVar12 = pTVar10;
    if (pSVar13 == (SEasyParticle *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *)(*pcVar8)();
        return pTVar11;
      }
      goto LAB_14acbfbdf;
    }
  }
  if (((pSVar13->_padding_ == 0) || (pSVar13->_padding_ == 0)) ||
     (*(int *)(pSVar13->_padding_ + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar13->_padding_ = (longlong)pSVar13;
    if (pTVar12 != (TReferenceControllerBase<1> *)pSVar13->_padding_) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)pSVar13->_padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pSVar13->_padding_ = (longlong)pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14acbfbdf:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = pTVar12;
  if (this != (TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *)&stack0xffffffffffffffc8) {
    (this->_Widget).Object = pSVar13;
    pTVar7 = (this->_Widget).SharedReferenceCount.ReferenceController;
    if (pTVar12 != pTVar7) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      (this->_Widget).SharedReferenceCount.ReferenceController = pTVar12;
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar7->SharedReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        pTVar10 = pTVar15;
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)pTVar7->_padding_)(pTVar7);
          LOCK();
          paVar2 = &pTVar7->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((this->_Widget).Object == (SEasyParticle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *)(*pcVar8)();
      return pTVar11;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

